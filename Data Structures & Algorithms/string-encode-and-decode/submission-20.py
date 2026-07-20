class Solution:
    arr = []
    def encode(self, strs: List[str]) -> str:
        if(len(strs)==0):
            return "problem";
        res = "";
        for i in strs:
            if i == "":
                res+= i+"fuck"
            else:
                res+= (i+"fuck")
        return res
    def decode(self, s: str) -> List[str]:
        if(s=="problem"):
            return []
        print(s)
        x = s.split('fuck')
        print(x)
        return x[:-1]