#pragma once

#include <stack>

class MyQueue {
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        m_stack1.push(x);
    }
    
    int pop() {
		int tmp = peek();
		m_stack2.pop();
		return tmp;
    }
    
    int peek() {
        if (m_stack2.empty()) {
			while (!m_stack1.empty()) {
				m_stack2.push(m_stack1.top());
				m_stack1.pop();
			}
		}
		return m_stack2.top();
    }
    
    bool empty() {
        return m_stack1.empty() && m_stack2.empty();
    }
	
public:
	std::stack<int> m_stack1;
	std::stack<int> m_stack2;
};
