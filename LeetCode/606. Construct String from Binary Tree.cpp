class Solution {
public:
	string tree2str(TreeNode* t) {
		string s = "";
		if (t == NULL)
			return s;
		s += int2str(t->val);
		if (t->left != NULL) {
			s += "(";
			s += tree2str(t->left);
			s += ")";
		}
		if (t->left == NULL && t->right != NULL) {
			s += "()";
		}
		if (t->right != NULL) {
			s += "(";
			s += tree2str(t->right);
			s += ")";
		}
		return s;
	}

	string int2str(int val) {
		ostringstream out;
		out << val;
		return out.str();
	}
};
