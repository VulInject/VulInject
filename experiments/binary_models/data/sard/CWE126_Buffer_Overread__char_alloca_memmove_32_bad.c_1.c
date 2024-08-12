#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    char * *VAR5 = &VAR4;
    char * *VAR6 = &VAR4;
    char * VAR7 = (char *)FUN2(50*sizeof(char));
    char * VAR8 = (char *)FUN2(100*sizeof(char));
    memset(VAR7, '', 50-1); 
    VAR7[50-1] = ''; 
    memset(VAR8, '', 100-1); 
    VAR8[100-1] = ''; 
    {
        char * VAR4 = *VAR5;
        VAR4 = VAR7;
        *VAR5 = VAR4;
    }
    {
        char * VAR4 = *VAR6;
        {
            char VAR9[100];
            memset(VAR9, '', 100-1);
            VAR9[100-1] = ''; 
            memmove(VAR9, VAR4, strlen(VAR9)*sizeof(char));
            VAR9[100-1] = '';
            FUN3(VAR9);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}