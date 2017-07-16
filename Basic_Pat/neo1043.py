# coding: utf-8

def handle(letters):
    P = []; A = []; T = []; e = []; s = []; t = []; result = []
    for letter in letters:
        lit = {
            'P': P, 'A': A, 'T': T,
            'e': e, 's': s, 't': t
        }.get(letter)
        if isinstance(lit, list): lit.append(letter)
    while (P or A or T or e or s or t):
        if P: result.append(P[0]); del P[0]
        if A: result.append(A[0]); del A[0]
        if T: result.append(T[0]); del T[0]
        if e: result.append(e[0]); del e[0]
        if s: result.append(s[0]); del s[0]
        if t: result.append(t[0]); del t[0]
    return "".join(result)
        
## main
if __name__ == "__main__":
    letters = raw_input()
    print handle(letters)
