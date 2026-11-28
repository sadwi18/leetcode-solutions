class Solution:
    def minLength(self, s: str) -> int:
        # st = []
        # st.append(s[0])
        # for i in range(1,len(s)):
        #     if st and (ord(st[-1])==ord(s[i])-1):
        #         st.pop()
        #     else :
        #         st.append(s[i])
        # return len(st)
        st = []
        for ch in s:
            if st and (st[-1]+ch == "AB" or st[-1]+ch == "CD"):
                st.pop()
            else :
                st.append(ch)
        return len(st)