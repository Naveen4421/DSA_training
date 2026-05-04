class linkedlist:
    class node:
            def __init__(self,data):
                self.data=data
                self.next=None
    def __init__ (self):
        self.head=None
    def ins_beg(self,val):
        NewNode=linkedlist.node(val)
        NewNode.next=self.head
        self.head=NewNode

    def display(self):
        temp=self.head
        while temp:
            print(temp.data,end="-->")
            temp=temp.next
        print("Null")

    def cycle(self):
        r=t=self.head
        while r and r.next:
            t=t.next
            r=r.next.next
            if t==r:
                return True
        return False


    def merge_sorted_list(self,l1,l2):
        merged=Linkedlist[0]
        temp=merge
        while l1 and l2:
            if l1.data<l2.data:
                temp.next=l1.data
                l1=l1.next
            else:
                temp.next=l2.data
                l2=l2.next
            temp=temp.next
        if l1:
            temp.next=l1
        if l2:
            temp.next=l2
        return merge.next

    def reverse(self):
        curr=head
        prev=None
        while curr:
            n=curr.next
            curr.next=prev
            prev=curr
            curr=n
        return prev
        
