#include<iostream>
#include<cstring>

int main()
{
    const int N = 26;//number of characters in the alphabet
    int count[N];
    char str[] = "MISSISSIPPI";

    for (int i = 0; i < N; i++) count[i] = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            ++count[str[i]-'a'];
        else if (str[i] >= 'A' && str[i] <= 'Z')
            ++count[str[i] - 'A'];

    }
    for (int i = 0; i < N; i++)
        std::cout<< "\n"<<(char)('a'+i) << "-" <<count[i];
        
 return 0;
  
}
	
