bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<char> s;

    for(auto i:expression){
      
      if(i=='(' || i=='{' || i=='[')
        s.push(i);
      else{
        if(s.empty())
          return false;

        char ch=s.top();
        s.pop();
        if ( (i == ')' && ch == '(') || (i == '}' && ch == '{')
        || (i==']' && ch=='[')) {
          
          continue;
        } 
        else{
          return false;
        }
      }

      
    }
    return s.empty();
}