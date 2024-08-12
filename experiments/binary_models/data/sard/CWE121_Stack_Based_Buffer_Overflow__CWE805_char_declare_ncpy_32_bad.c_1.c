#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    char * *VAR5 = &VAR4;
    char * *VAR6 = &VAR4;
    char VAR7[50];
    char VAR8[100];
    {
        char * VAR4 = *VAR5;
        VAR4 = VAR7;
        VAR4[0] = ''; 
        *VAR5 = VAR4;
    }
    {
        char * VAR4 = *VAR6;
        {
            char VAR9[100];
            memset(VAR9, '', 100-1); 
            VAR9[100-1] = ''; 
            strncpy(VAR4, VAR9, 100-1);
            VAR4[100-1] = ''; 
            FUN2(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}