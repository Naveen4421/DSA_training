def recursive(q):
    if len(q)==0:
        return
    print(q.pop())
    recursive(q)
