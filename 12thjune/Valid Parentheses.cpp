bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<char> s;

    for(auto i:expression){

        if(i=='{' || i=='[' || i=='(')
            s.push(i);
        else {

          if ( (i == '}' || i==']' || i==')') )
        {
        if (s.empty())
          return false;
        if (i == '}' && s.top()!='{')
            return false;
        if (i == ')' && s.top()!='(')
            return false;
        if (i == ']' && s.top()!='[')
            return false;
        }

       
            s.pop();
        }
    }

    return s.empty();
}