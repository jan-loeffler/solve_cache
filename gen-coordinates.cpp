#include <iostream>
#include "openssl/md5.h"
#include <string.h>
#include <stdio.h>
std::string hash ="ac911f28463fe990363e133e30bb7774";
int main()
{
char string[] = "N 49° 50.XXX' E 8° 48.XXX' fuwo's Geburtstagscache";
unsigned char digest[MD5_DIGEST_LENGTH];   
 char mdString[33];
 for(size_t b = 0; b <= 9; b++)
 for(size_t c = 0; c <= 9; c++)
 for(size_t d = 0; d <= 9; d++)
 for(size_t f = 0; f <= 9; f++)
 for(size_t g = 0; g <= 9; g++)
  for(size_t h = 0; h <= 9; h++)
    {
   string[10]= b + '0';
   string[11]= c + '0';
   string[12]= d + '0';
   string[24]= f + '0';
   string[25]= g + '0';
   string[26]= h + '0';

   MD5((unsigned char*)&string, strlen(string), (unsigned char*)&digest);    
 
    for(int i = 0; i < 16; i++)
         sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
     if(hash.compare(mdString)== 0 ){ 
             std::cout << string;
            printf("md5 digest: %s\n", mdString);
      return 0; 
        }

    }
}
