
class ListNode {
    int val;
    ListNode next;
    ListNode(int x){
        val = x;
    }
}

public class ReverseLinkedList {
    public ListNode reverseList(ListNode head) {
        ListNode prev =null;
        ListNode current = head;

        while(current != null){
            ListNode nextTemp = current.next;
            current.next = prev;
            prev =  current;
            current = nextTemp;
        }
        return prev;
    }

    public static void main(String[] args) {
        ReverseLinkedList solution = new ReverseLinkedList();

        ListNode head = new ListNode(1);
        head.next = new ListNode(2);
        head.next.next = new ListNode(3);

        ListNode reversedHead = solution.reverseList(head);

        System.out.print("Reversed Linked List: ");

        while (reversedHead != null) {
            System.out.print(reversedHead.val + " ");
            reversedHead = reversedHead.next;
        }
        System.out.println();
    }
}
