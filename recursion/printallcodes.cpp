#include <string.h>
#include<bits/stdc++.h>
using namespace std;

// using namespace std;
bool nonLower(string s)
{
     
    // Traverse the string
    for(int i = 0; i < s.size(); i++)
    {
         
        // If any character is not
        // found to be in lowerCase
        if (!islower(s[i]))
        {
            return true;
        }
    }
    return false;
}
 
// Function to print the decodings
void printCodes(vector<string> output)
{
    for(int i = 0; i < output.size(); i++)
    {
         
        // If all characters are not
        // in lowercase
        if (nonLower(output[i]))
            continue;
             
        cout << (output[i]) << endl;
    }
}
 
// Fuction to return the character
// corresponding to given integer
char getChar(int n)
{
    return (char)(n + 96);
}
 
// Function to return the decodings
vector<string> getCode(string str)
{
     
    // Base case
    if (str.size() == 0)
    {
        vector<string> ans;
        ans.push_back("");
        return ans;
    }
 
    // Recursive call
    vector<string> output1 = getCode(str.substr(1));
 
    // Stores the characters of
    // two digit numbers
    vector<string> output2(0);
 
    // Extract first digit and
    // first two digits
    int firstDigit= (str[0] - '0');
    int firstTwoDigit = 0;
     
    if (str.size() >= 2)
    {
        firstTwoDigit = (str[0] - '0') * 10 +
                        (str[1] - '0');
 
        // Check if it lies in the
        // range of alphabets
        if (firstTwoDigit >= 10 &&
            firstTwoDigit <= 26)
        {
             
            // Next recursive call
            output2 = getCode(str.substr(2));
        }
    }
 
    // Combine both the output in a
    // single final output array
    vector<string> output(output1.size() +
                          output2.size());
 
    // Index of final output array
    int k = 0;
 
    // Store the elements of output1
    // in final output array
    for(int i = 0; i < output1.size(); i++)
    {
        char ch = getChar(firstDigit);
 
        output[i] = ch + output1[i];
        k++;
    }
 
    // Store the elements of output2
    // in final output array
    for(int i = 0; i < output2.size(); i++)
    {
        char ch = getChar(firstTwoDigit);
 
        output[k] = ch + output2[i];
        k++;
    }
 
    // Result the result
    return output;
}

void printAllPossibleCodes(string input) 
{
    /*
    Given the input as a string, print all its possible combinations. You do not need to return anything.
    */
   
	vector<string> output = getCode(input);
    printCodes(output);

}

