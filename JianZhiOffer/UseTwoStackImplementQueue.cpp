//用两个栈来实现一个队列，完成队列的Push和Pop操作。 队列中的元素为int类型。

//idea:当插入时，直接插入 stack1
//当弹出时，当 stack2 不为空，弹出 stack2 栈顶元素，如果 stack2 为空，将 stack1 中的全部数逐个出栈入栈 stack2，再弹出 stack2 栈顶元素

class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        //判断stack2是否为空
        if(!stack2.empty())
        {
            int temp= stack2.top();
            stack2.pop();
            return temp;
        }
        else
        {
            while(!stack1.empty())
            {
                int t= stack1.top();
                stack1.pop();
                stack2.push(t);
            }
            int temp= stack2.top();
            stack2.pop();
            return temp;
        }
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};
