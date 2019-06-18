#include<stdio.h> 
#include<string.h> 
  
//int main() 
//{ 
//	char szInput[256];
//	printf ("Enter a sentence: ");
//	gets (szInput);
//	printf ("The sentence entered is %u characters long.\n",(unsigned)strlen(szInput));
//	printf ("the size of szInput allocated is %d bytes", sizeof(szInput));
//	return 0;
//}


/* 
 * sizeof_vs_strlen.c -- program shows difference between using sizeof and
 * strlen with array and string
 */
void main()
{
     int a = 5;
     int *p = &a;
     printf("%d, %u, %p", p, p, p);
     getch();
}

//int main(void)
//{
//    char msg[] = {'c','h','r','i','s','t','o','p','h','e','r'};
//	                                /* Character array */	
//    char name1[] = "christopher";       /* character array */
//    char *name2 = "christopher";        /* string literal */
// 
//    printf("sizeof: size of char array msg[] \"%s\" is %d bytes!\n",
//           msg, sizeof(msg));
//    printf("strlen: size of char array msg[] \"%s\" is %d bytes!\n",
//           msg, strlen(msg));	
// 
//    printf("sizeof: size of char array name1[] \"%s\" is %d bytes!\n",
//           name1, sizeof(name1));
//    printf("strlen: size of char array name1[] \"%s\" is %d bytes!\n",
//           name1, strlen(name1));
// 
//    printf("sizeof: size of string \"%s\" is %d bytes!\n",
//           name2, sizeof(name2));
//    printf("strlen: size of string \"%s\" is %d bytes!\n",
//           name2, strlen(name2));
// 
//    return 0;
//}
	//    char source[] = "GeeksForGeeks"; 
//  
//    // A copy of source is created dynamically 
//    // and pointer to copy is returned. 
//    char* target = strdup(source); 
//  
//    printf("%s", target); 
//    
//  
//    // 5 bytes of source are copied to a new memory 
//    // allocated dynamically and pointer to copied 
//    // memory is returned. 
//    char* target2 = strndup(source, 5); 
//  
//    printf("%s\n\n\n\n\n\n\n", target2); 
//
///* strcpy example */
//	char str1[]="aaaaaaaaaabbbbbbbbbbbccccccccccddddddddddeeeeeeeeeeffffffffff";
//	char str2[2];
//	char str3[1];
//	strcpy (str3,"copy to str3");
//	strcpy (str2, str3);
//	strcpy (str1,str2);
//	printf ("%s\n%s\n%s\n",str1,str2,str3);
//
//
//	return 0; 
//}