////포인터를 이용해서 입력받은 문자열안에 입력받은 문자(ch) 찾기

#include <stdio.h>
#include <string.h>

int countch(char *a, char b)
{
    int cnt = 0;
    for(int i = 0; i<strlen(a); i++)
    {
        if(*(a+i) == b)
            cnt += 1;
    }
    return cnt;
}

int main() {
    char line[80] = {};
    gets(line);

    char ch;
    scanf("%c",&ch);

    int ans;

    ans = countch(line,ch);

    printf("%d",ans);
    return 0;
}
