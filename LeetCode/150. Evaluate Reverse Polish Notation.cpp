class Solution {
public:
	int evalRPN(vector<string>& tokens) {
		stack<int> s;
		for (int i = 0; i < (signed) tokens.size(); i++) {
			string op = tokens[i];
			//若为操作符
			if (op == "+" || op == "-" || op == "*" || op == "/") {
				int num1 = s.top();
				s.pop();
				int num2 = s.top();
				s.pop();
				int result = 0;
				if (op == "+") {
					result = num2 + num1;
				} else if (op == "-") {
					result = num2 - num1;
				} else if (op == "*") {
					result = num2 * num1;
				} else if (op == "/") {
					result = num2 / num1;
				}
				s.push(result);
			}
			//若为数字
			else {
				int num = atoi(op.c_str());
				s.push(num);
			}
		}
		return s.top();
	}
};
