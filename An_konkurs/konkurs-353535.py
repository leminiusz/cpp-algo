import numpy as np
import matplotlib.pyplot as plt

NUMER_INDEKSU = "353535"

#funkcja wyznaczajaca wektor momentow (metoda Thomasa)
def momenty(t, y):
    n = len(t) - 1
    if n < 2: return np.zeros(n + 1)
    
    h = np.diff(t)
    mu = np.zeros(n-1)
    lam = np.zeros(n-1)
    d = np.zeros(n-1)
    
    for i in range(1, n):
        lam[i-1] = h[i] / (h[i-1] + h[i])
        mu[i-1] = 1.0 - lam[i-1]
        diff_r = (y[i+1] - y[i]) / h[i]
        diff_l = (y[i] - y[i-1]) / h[i-1]
        d[i-1] = 6.0 * (diff_r - diff_l) / (h[i-1] + h[i])

    u = np.zeros(n-1)
    q = np.zeros(n-1)
    denom = 2.0
    u[0] = d[0] / denom
    q[0] = lam[0] / denom
    
    for i in range(1, n-1):
        denom = 2.0 - mu[i-1] * q[i-1]
        u[i] = (d[i] - mu[i-1] * u[i-1]) / denom
        q[i] = lam[i] / denom
        
    M = np.zeros(n+1)
    M[n-1] = u[n-2]
    for i in range(n-2, 0, -1):
        M[i] = u[i-1] - q[i-1] * M[i+1]
        
    return M

#funkcja wyznaczajaca wartosc interpolowana w zadanym punkcie
def eval_wartosci(val, t, y, M):
    if val <= t[0]: i = 0
    elif val >= t[-1]: i = len(t) - 2
    else:
        i = np.searchsorted(t, val) - 1
        if i < 0: i = 0
    
    h = t[i+1] - t[i]
    dr = t[i+1] - val
    dl = val - t[i]
    
    term1 = M[i] * (dr)**3 / (6*h)
    term2 = M[i+1] * (dl)**3 / (6*h)
    term3 = (y[i] - M[i]*h**2/6) * (dr/h)
    term4 = (y[i+1] - M[i+1]*h**2/6) * (dl/h)
    return term1 + term2 + term3 + term4

#format wymagany w pliku dane.txt
def format(arr):
    return "[" + ", ".join(f"{x:.10f}".rstrip('0').rstrip('.') for x in arr) + "]"


krzywe = [
    {"x": [17,14,13,15,20,26,46,64,71,79,82,82,79,78], "y": [11,48,82,88,74,60,83,92,90,81,67,46,23,34]}, # w
    {"x": [111, 115], "y": [38, 42]}, # kreska i
    {"x": [105,105,106,105], "y": [60,70,75,79]}, # i
    {"x": [136,129,126,131,136,128,124,124,126,129,134,136,134,129,120], "y": [91,89,83,78,75,70,64,57,52,50,54,59,64,66,64]}, # e
    {"x": [161,158,153,153,158,167,176,180,181,180,177,173,171,171,172,176,182,189,195,198,198,199,200,200,202,204,205,206,207], "y": [56,53,58,64,73,77,76,71,64,54,51,55,60,67,72,76,78,75,70,63,52,73,88,101,115,124,128,123,118]}, # cej
    {"x": [211,216], "y": [21,26]}, # kropka j
    {"x": [266,269,273,279,287,290], "y": [53,71,57,47,59,70]}, # n
    {"x": [296,299,298,299,305,319,317], "y": [65,53,60,63,69,55,47]}, # u
    {"x": [332,333,337,340,349,355,360], "y": [47,62,57,48,55,50,65]}, # m
    {"x": [364,377,383,382,378,369,374,389,405,404,426], "y": [55,62,62,51,45,59,68,63,49,68,40]}, # er
    {"x": [438,429,431,445,445,451,458,465,473,478,469,461,458], "y": [16,47,59,44,54,63,61,68,61,50,42,49,61]}, # ko
    {"x": [487,484,483], "y": [25,26,30]}, # kreska o
    {"x": [490,485,489,498,507,519,514], "y": [45,52,56,50,57,42,38]}, # w
    {"x": [532,525], "y": [53,83]}, # przecinek
    {"x": [586,574,572,575,579,595,601,586], "y": [46,76,99,85,69,45,51,73]}, # p
    {"x": [610,629,621,615,625], "y": [44,11,34,61,66]}, # l
    {"x": [630,645,649,646,634,644,661], "y": [56,57,48,42,58,70,65]}, # e
    {"x": [666,657,658,664,673,677,689,696,691,690], "y": [51,57,65,68,52,61,46,60,60,61]}, # as
    {"x": [711,728,717,704,713,732], "y": [57,49,43,54,65,65]}, # e
    {"x": [788,786,789,791], "y": [42,45,48,45],"fill": True}, # oko 1
    {"x": [789,789,792,793,792], "y": [61,65,66,63,60]}, # oko 2
    {"x": [801,802,813], "y": [57,54,54]}, # nos
    {"x": [826,833,814], "y": [27,56,94]}, # usmiech
]


txt_lines = []
stats_pts = 0
stats_u = 0

plt.figure(figsize=(10, 6))

for k in krzywe:
    x, y = np.array(k["x"], float), np.array(k["y"], float)
    n = len(x)
    t = np.linspace(0.0, 1.0, n)
    
    Mx, My = momenty(t, x), momenty(t, y)
    u = np.linspace(0.0, 1.0, (n-1) * 15 + 1)
    
    sx = [eval_wartosci(val, t, x, Mx) for val in u]
    sy = [eval_wartosci(val, t, y, My) for val in u]
    
    if k.get("fill"):
        plt.fill(sx, sy, 'r')
    else:
        plt.plot(sx, sy, 'r-', linewidth=1.5)
    
    txt_lines.append(f"x := {format(x)}, y := {format(y)}, t := {format(t)} oraz u := {format(u)}")
    stats_pts += n
    stats_u += len(u)

plt.axis('equal')
plt.gca().invert_yaxis()
plt.axis('off')

# Zapisywanie plików wynikowych
# plik_img = f"konkurs-{NUMER_INDEKSU}.png"
# plt.savefig(plik_img, dpi=300, bbox_inches='tight')

# plik_dane = f"konkurs-{NUMER_INDEKSU}-dane.txt"
# with open(plik_dane, "w", encoding="utf-8") as f:
#     f.write("\n\n".join(txt_lines))

# plik_sum = f"konkurs-{NUMER_INDEKSU}-podsumowanie.txt"
# with open(plik_sum, "w", encoding="utf-8") as f:
#     f.write(f"{len(krzywe)}, {stats_pts}, {stats_u}")

# print(f"Utworzono:\n1. {plik_img}\n2. {plik_dane}\n3. {plik_sum}")