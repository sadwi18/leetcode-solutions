class Solution:
    def checkString(self, s: str) -> bool:
        return 'ba' not in s
        # count=0
        # for i in range(0,len(s)):
        #     if s[i]=='b':
        #         for j in range(i+1,len(s)):
        #             if s[j]=='a' :
        #                 count=1
        #                 break
        # if count==1 :
        #     return False
        # return True
        