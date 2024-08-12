#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(char * VAR4)
{
    {
        char VAR5[100];
        memset(VAR5, '', 100-1);
        VAR5[100-1] = ''; 
        memmove(VAR5, VAR4, strlen(VAR5)*sizeof(char));
        VAR5[100-1] = '';
        FUN2(VAR5);
    }
}
void FUN3()
{
    char * VAR4;
    char VAR6[50];
    char VAR7[100];
    memset(VAR6, '', 50-1); 
    VAR6[50-1] = ''; 
    memset(VAR7, '', 100-1); 
    VAR7[100-1] = ''; 
    VAR4 = VAR6;
    FUN1(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}