#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    char VAR5[50];
    char VAR6[100];
    memset(VAR5, '', 50-1); 
    VAR5[50-1] = ''; 
    memset(VAR6, '', 100-1); 
    VAR6[100-1] = ''; 
    goto VAR7;
VAR7:
    VAR4 = VAR5;
    {
        char VAR8[100];
        memset(VAR8, '', 100-1);
        VAR8[100-1] = ''; 
        memmove(VAR8, VAR4, strlen(VAR8)*sizeof(char));
        VAR8[100-1] = '';
        FUN2(VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}