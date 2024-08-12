unsigned char *SHA1(const unsigned char *VAR1, size_t VAR2, unsigned char *VAR3)
{
SHA_CTX VAR4;
static unsigned char VAR5[VAR6];

if (VAR3 == NULL) VAR3=VAR5;
if (!SHA1_Init(&VAR4))
return NULL;
SHA1_Update(&VAR4,VAR1,VAR2);
SHA1_Final(VAR3,&VAR4);
FUN1(&VAR4,sizeof(VAR4));
return(VAR3);
}