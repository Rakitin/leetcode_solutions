#pragma once

#include <queue>

class MyStack {
public:
    MyStack() {
        
    }
    
    void push(int x) {
		std::queue<int> tmp;
    	while (!m_queue1.empty()) {
			tmp.push(m_queue1.front());
			m_queue1.pop();
		}
		m_queue1.push(x);
        while (!tmp.empty()) {
			m_queue1.push(tmp.front());
			tmp.pop();
		}
    }
    
    int pop() {
        int tmp = m_queue1.front();
		m_queue1.pop();
		return tmp;
    }
    
    int top() {
        return m_queue1.front();
    }
    
    bool empty() {
        return m_queue1.empty();
    }
	
private:
	std::queue<int> m_queue1;
};
