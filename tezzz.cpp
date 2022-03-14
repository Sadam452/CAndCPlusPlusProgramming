//program for ENCRYPTION-Decryption
#include<stdio.h>
#include<string.h>
int main()
{
	char message[200],enc_message[200],dec_message[200];
	char list[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int i;
	printf("Enter your message to encrypt :");
	gets(message);
	strcpy(enc_message,message);
	for(i=0;i<strlen(message);i++)
	{
		for(int j=0;j<26;j++)
		{
			if(message[i]==list[j])
			{
			enc_message[i]=list[(j+5)%26];break;}
		}
	}
    printf("Encrypted version of '%s' IS:\n %s",message,enc_message);
    strcpy(dec_message,enc_message);
	for(i=0;i<strlen(enc_message);i++)
	{
		for(int j=0;j<26;j++)
		{
			if(enc_message[i]==list[j])
			{
			dec_message[i]=list[(j+21)%26];break;}
		}
	}
	printf("\nDecrypted version of '%s' IS:\n %s",enc_message,dec_message);
	return 0;
}
