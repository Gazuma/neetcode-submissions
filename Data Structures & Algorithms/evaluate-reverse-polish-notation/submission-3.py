class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        st = []
        for i in tokens:
            if(i.isdigit() or i[1:].isdigit()):
                st.append(int(i));
            
            else:
                v1 = st.pop()
                v2 = st.pop()
                print(v1,i,v2)
                if i == '+':
                    st.append(v2+v1);
                if(i=='-'):
                    st.append(v2-v1);
                if(i=="*"):
                    st.append(v2*v1);
                if(i=="/"):
                    st.append(int(v2/v1));
        return st[0];