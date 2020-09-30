bool hasCycle(ListNode *head) 
{
    ListNode *fast;
    fast = head;
    while (head)
    {
        head = head->next;
        if (fast->next && fast->next->next)
            fast = fast->next->next;
        else
            return false;
            
        if (fast == head)
            return true;
    }
    
    return false;
}