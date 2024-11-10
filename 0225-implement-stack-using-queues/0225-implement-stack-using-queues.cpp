class MyStack {
public:
    queue<int> q;
    
    MyStack() {}
    
    void push(int x) {
      q.push(x);
      for(int i=0;i<q.size()-1;i++){
        q.push(q.front());
        q.pop();}}
    
    int pop() {
       int temp=q.front();
       q.pop();
       return temp;}
    int top() {
      int temp=q.front();
      return temp;}
    bool empty() {
      return q.size()<1;}};