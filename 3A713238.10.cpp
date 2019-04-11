#include<stdio.h>

#include<stdlib.h>

#include<string.h>

main()

{

  char S[5000];

  char ouput;

  printf("請輸入一個字串："); 

  while(scanf("%s",S)==1) 

      {

         printf("處理過的字串為：",ouput);

		int a,N=strlen(S); 

         for(a=0;a<N;a++)

             if(S[a]>='a')  

               printf("%c",S[a]-'a'+'A'); 

             else 

               printf("%c",S[a]-'A'+'a'); 

      } 

	system("pause");

    return 0;  

}
