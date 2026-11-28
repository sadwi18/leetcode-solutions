class Solution:
    def reformatNumber(self, number: str) -> str:
        ans = ""
        for ch in number:
            if 48 <= ord(ch) <= 57:
                ans += ch
        ans_len = len(ans)
        i = 0
        res = ""
        while ans_len > 0:
            if ans_len == 2:
                res += ans[i:i+2]         
                i += 2
                ans_len -= 2
            elif ans_len == 3:
                res += ans[i:i+3]         
                i += 3
                ans_len -= 3
            elif ans_len == 4:
                res += ans[i:i+2] + "-" + ans[i+2:i+4]  
                i += 4
                ans_len -= 4
            else:
                res += ans[i:i+3] + "-"    
                i += 3
                ans_len -= 3
                
        return res


