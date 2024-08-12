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
    if(1)
    {
        VAR4 = VAR5;
    }
    {
        char VAR7[100];
        memset(VAR7, '', 100-1);
        VAR7[100-1] = ''; 
        memcpy(VAR7, VAR4, strlen(VAR7)*sizeof(char));
        VAR7[100-1] = '';
        FUN2(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}