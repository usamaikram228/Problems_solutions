class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>myVector;
     for(int i = 1; i <= n/2;i++)
     {
         if(n%i == 0)
         {
             myVector.push_back(i);
         }
     }
     myVector.push_back(n);
     if(k > myVector.size())
     {
         return -1;
     }
     else
     {
         return myVector[k-1];
     }

    }
};