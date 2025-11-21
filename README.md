## 🧱 How the Stack Works

We use a `struct` named **stacke** to simulate stack behavior using:

- `arr[100]` → A fixed-size array  
- `top` → Stores the index of the last inserted item  

📌 **`top = -1` means the stack is empty.**

### Stack Operations

- When we add an item (**push**), we increment `top` and place the value in the array.  
- When we remove an item (**pop**), we decrement `top`.  
- When we want the top item, we return `arr[top]`.

---

## 🔧 Stack Functions Explained

### **1. `push(int value)`**
Adds a new value on top of the stack.


void push(int value) {
    if (top == 99) return; // stack full
    top++;
    arr[top] = value;
}
2. pop()
Removes the top element

void pop() {
    if (isEmpty()) return; // cannot pop if empty
    top--;
}
3. isEmpty()
Checks if the stack has no elements.


bool isEmpty() {
    return top == -1;
}
4. top_val()
Returns the value at the top without removing it.


int top_val() {
    if (isEmpty()) return -1;
    return arr[top];
}
📘 Full Example Code

#include <iostream>
using namespace std;

struct stacke {
    int arr[100];
    int top = -1;

    void push(int value) {
        if (top == 99) return;
        top++;
        arr[top] = value;
    }

    void pop() {
        if (isEmpty()) return;
        top--;
    }

    bool isEmpty() {
        return top == -1;
    }

    int top_val() {
        if (isEmpty()) return -1;
        return arr[top];
    }
};

int main() {
    stacke stk;

    stk.push(1);
    stk.push(2);
    stk.push(3);

    while (!stk.isEmpty()) {
        cout << stk.top_val() << endl;
        stk.pop();
    }

    return 0;
}
📤 Program Output

3
2
1
This output shows how a stack follows Last In, First Out (LIFO).
