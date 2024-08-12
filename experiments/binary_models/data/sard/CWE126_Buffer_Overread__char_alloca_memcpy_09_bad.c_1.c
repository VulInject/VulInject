#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    char * VAR5 = (char *)FUN2(50*sizeof(char));
    char * VAR6 = (char *)FUN2(100*sizeof(char));
    memset(VAR5, '', 50-1); 
    VAR5[50-1] = ''; 
    memset(VAR6, '', 100-1); 
    VAR6[100-1] = ''; 
    if(VAR7)
    {
        VAR4 = VAR5;
    }
    {
        char VAR8[100];
        memset(VAR8, '', 100-1);
        VAR8[100-1] = ''; 
        memcpy(VAR8, VAR4, strlen(VAR8)*sizeof(char));
        VAR8[100-1] = '';
        FUN3(VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}