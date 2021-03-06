/*
中缀表达式求值：
  基本策略：将中缀表达式转换为后缀表达式后再求值
  中缀表达式转换为后缀表达式：
    *从头到尾读取中缀表达式的每个对象，对不同对象按不同的情况处理
      1.运算数：直接输出
      2.左括号：压入堆栈
      3.右括号：将栈顶的运算符弹出并输出，直到遇到左括号（左括号出栈不输出）
      4.运算符：
        *若优先级大于栈顶运算符时，则把它压入堆栈
        *若优先级小于等于栈顶元素时，将栈顶运算符弹出并输出；再比较新的栈顶运算符，直到该运算符大于栈顶运算符优先级为止，然后将该运算符压入堆栈
      5.若对象处理完毕，则把堆栈中存留的运算符一并输出
*/
