def count(a):
    from collections import Counter
    d=Counter(a)
    non_repeating=[ch for ch in d if d[ch]==1]
    return non_repeating
    return d
