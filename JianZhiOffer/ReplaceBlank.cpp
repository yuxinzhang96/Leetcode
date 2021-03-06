//请实现一个函数，将一个字符串中的每个空格替换成“%20”。
//例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。
class Solution {
public:
	void replaceSpace(char *str,int length) {
        //开辟一个新的字符串？ 空间复杂性太高
        //从后往前替换，复杂度低
        if(str==NULL)
            return; //边界检查1：判断是否为空字符串
	    
        //先统计字符串中空格的数量
        int blank= 0;
        int rawlength=0;
        int newlength=0;
        
        for(int i=0;str[i]!='\0';i++)
        {
            rawlength++;
            if(str[i]==' ')
               blank++;               
        }
        newlength= rawlength+2*blank;
        if(newlength+1>length)
            return; //边界检查2：判断新开辟的指针空间是否指向空
        char * p1=str+rawlength;
        char * p2=str+newlength;
        while(p1!=p2)
        {
            if(*p1==' ')
            {
                *p2='0';
                *p2--;
                *p2='2';
                *p2--;
                *p2='%';
                *p2--;                                
            }
            else
            {
                *p2= *p1;
                *p2--;              
            }
            *p1--;
        }
	}
};
