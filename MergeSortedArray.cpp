class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (m==0) {
            nums1 = nums2;
        }
        else if (n != 0 && m != 0) {
            int m_tracker = 0;
            int n_tracker = 0;
            vector<int> result(m+n);
            for (int i = 0; i < (m+n); i++) {
                if (m_tracker >= m) {
                    result[i] = nums2[n_tracker];
                    n_tracker++;
                }
                else if (n_tracker >= n) {
                    result[i] = nums1[m_tracker];
                    m_tracker++;
                }
                else {
                    if (nums1[m_tracker] < nums2[n_tracker]) {
                        result[i] = nums1[m_tracker];
                        m_tracker++;
                    }
                    else if (nums1[m_tracker] > nums2[n_tracker]) {
                        result[i] = nums2[n_tracker];
                        n_tracker++;
                    }
                    else if (nums1[m_tracker] == nums2[n_tracker]){
                        result[i] = nums1[m_tracker];
                        i++;
                        result[i] = nums2[n_tracker];
                        m_tracker++;
                        n_tracker++;
                    }
                }
            }
            nums1 = result;
        }
    }
};
