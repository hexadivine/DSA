/*
 * @lc app=leetcode id=415 lang=cpp
 *
 * [415] Add Strings
 */

// @lc code=start
class Solution {
    void rev(string &stringToReverse) {
    int numCharacters = stringToReverse.length();
    for (int i=0; i<numCharacters/2; i++) { 
        std::swap(stringToReverse[i], stringToReverse[numCharacters-i-1]); 
    }
}
public:
    string addStrings(string num1, string num2) {
        int intNum1, intNum2, carry=0;
        int i = num1.length()-1;
        int j = num2.length()-1;

        string revAns = "";

        while (i >= 0 && j >= 0) {
    
            intNum1 = num1[i]-'1'+1;
            intNum2 = num2[j]-'1'+1;

            revAns += (char)((intNum1+intNum2+carry)%10+(int)'1'-1);
            carry = (intNum1+intNum2+carry)/10;

            i--;
            j--;
        }
        cout << revAns << " ";
        while (i >= 0) {
            intNum1 = num1[i]-'1'+1;
            revAns += (char)((intNum1+carry)%10+(int)'1'-1);
            carry = (intNum1+carry)/10;

            i--;
        }
        cout << revAns << "-";
        while (j >= 0) {
            intNum2 = num2[j]-'1'+1;
            cout << "-"<<intNum2<<"-";
            revAns += (char)((intNum2+carry)%10+(int)'1'-1);
            carry = (intNum2+carry)/10;

            j--;
        }
        if (carry!=0)
            revAns += (char)(carry+'0');
        cout << revAns << " ";

        rev(revAns);

        return revAns;
    }
};
// @lc code=end

