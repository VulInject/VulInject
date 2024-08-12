#VAR1 ""
#VAR1 <VAR2.VAR3>
int VAR4 = 1; 
int VAR5 = 0; 
void FUN1()
{
    char * VAR6;
    char * VAR7 = (char *)FUN2(50*sizeof(char));
    char * VAR8 = (char *)FUN2(100*sizeof(char));
    memset(VAR7, '', 50-1); 
    VAR7[50-1] = ''; 
    memset(VAR8, '', 100-1); 
    VAR8[100-1] = ''; 
    if(VAR4)
    {
        VAR6 = VAR7;
    }
    {
        char VAR9[100];
        memset(VAR9, '', 100-1);
        VAR9[100-1] = ''; 
        memmove(VAR9, VAR6, strlen(VAR9)*sizeof(char));
        VAR9[100-1] = '';
        FUN3(VAR9);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}