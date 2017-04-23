/* Problem Number: 1
   Problem Name: Two Sum
   Problem Link : https://leetcode.com/problems/two-sum/#/description */

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
  public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        //Key is the number and value is its index in the vector.
        unordered_map<int, int> hash;
        vector<int> result;
        for (int i = 0; i < numbers.size(); i++) {
            int numberToFind = target - numbers[i];

            //if numberToFind is found in map, return them

            if (hash.find(numberToFind) != hash.end()) {
            //+1 because indices are NOT zero based

			result.push_back(hash[numberToFind] + 1);
			result.push_back(i+1);
			return result;
		}

            //number was not found. Put it in the map.
            hash[numbers[i]] = i;
        }
        return result;
    }
};

int main()
{
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);
    vector<int> result;
    Solution a;
    result = a.twoSum(nums,9);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << "\n";
    }
    return 0;
}
