from collections import deque
def queue(q):
    if len(q)==0:
        return 0
    n=len(q)
    fh=deque()
    sh=deque()
    for i in range(n//2):
        fh.append(q.popleft())
    for i in range(n//2,n):
        sh.append(q.popleft())
    print("first half",fh)
    print("second half",sh)
    for i in range(n//2):
        q.append(fh.popleft())
        q.append(sh.popleft())
    if fh:
        q.append(fh.popleft())
    if sh:
        q.append(sh.popleft())
    print(q)

que=deque([8,9,1,2,3,5,4])
#que=[8,9,1,2,3,5]
queue(que)



    
