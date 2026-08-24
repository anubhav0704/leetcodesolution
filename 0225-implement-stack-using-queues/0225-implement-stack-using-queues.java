class MyStack {
    Queue<Integer> q=new ArrayDeque<>();
    public MyStack() {
        
    }
    
    public void push(int x) {
        int s=q.size();
        q.add(x);
        for(int i=1;i<=s;i++){
            q.offer(q.peek());
            q.poll();
        }
    }
    
    public int pop() {
        return q.poll();
    }
    
    public int top() {
        int res=q.peek();
        return res;
    }
    
    public boolean empty() {
        return q.isEmpty();
    }
}

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * boolean param_4 = obj.empty();
 */