#include "App.h"

int App::start() {
    Stack<int> st;
    st.push(30);
    st.push(26);
    st.push(13);

    try {
        st.pop();
    }
    catch (Exception::StackExceptions &ex) {
        std::cout << ex.what() << '\n';
    }
    st.StackSize(st);

    return 0;
}