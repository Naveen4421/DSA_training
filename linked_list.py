class linkedlist:
    def __init__(self,data):
        self.data=data
        self.next=None
    def append(self,data):
        new_node=self(data)
        if self.head is None:
            self.head=new_node
            return
        last=self.head
        while last.next:
            last=last.next
        last.next=new_node
    def display(self):
        temp=self.head
        while temp:
            print(temp.data,end="->")
            temp=temp.next
        print("None")
if __name__=="__main__":
    l1=linkedlist()
    l1.append(10)
    l1.append(20)
    l1.append(30)
    l1.display()
            