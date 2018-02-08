//You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

//The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".

//Example 1:

//Input: J = "aA", S = "aAAbbbb"
//Output: 3
//Example 2:

//Input: J = "z", S = "ZZ"
//Output: 0


//通过hash的方法，先将字符串J中的每个字符串当作key存起来，再遍历字符串S，检查是否存在这些key。
//•时间复杂度为O(s + j)。(s为字符串S的长度，j为字符串J的长度)
//•空间复杂度为O(j)。

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int nResult = 0;
        map< char , int > mapJ;
        for( int i = 0; i < J.length(); i++ )
        {
            mapJ[J[i]] = 1;
        }

        for( int k = 0; k<S.length(); k++)
        {
            if( mapJ.find( S[k]) != mapJ.end() )
            {
                nResult++;
            }
        }
        return nResult;

    }
};
