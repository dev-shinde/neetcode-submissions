class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        //we are already having a vector of temperatures.

        stack<int> st;
        vector<int> result(temperatures.size(), 0);

        for(int i = 0; i < temperatures.size(); i++){
            while(!st.empty() && temperatures[i] > temperatures[st.top()]){
            int idx = st.top();
            st.pop();
            result[idx] = i - idx;
        }
        st.push(i);
        }

        return result;
    }
};
