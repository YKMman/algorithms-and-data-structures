class ListNode:
    def __init__(self, data):
        self.data = data
        self.next = None

        
        
class LinkedList:
    def __init__(self, head=None):
        self.head = head
        
    def size(self):
        count = 0
        node = self.head
        while node:
            count += 1
            node = node.next
        return count

    def clear(self):
        self.head=None

    def getLast(self):
        last_node = self.head
        if last_node:
            while last_node.next:
                last_node=last_node.next
        return last_node
        
    def getFirst(self):
        return self.head
        
        
        
        
node1 = ListNode('1')
node2 = ListNode('2')
node3 = ListNode('3')
node1.next = node2
node2.next = node3

list = LinkedList(node1)

print(list.getFirst())