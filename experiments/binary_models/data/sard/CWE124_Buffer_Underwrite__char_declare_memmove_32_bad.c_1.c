#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    char * *VAR5 = &VAR4;
    char * *VAR6 = &VAR4;
    char VAR7[100];
    memset(VAR7, '', 100-1);
    VAR7[100-1] = '';
    {
        char * VAR4 = *VAR5;
        VAR4 = VAR7 - 8;
        *VAR5 = VAR4;
    }
    {
        char * VAR4 = *VAR6;
        {
            char VAR8[100];
            memset(VAR8, '', 100-1); 
            VAR8[100-1] = ''; 
            memmove(VAR4, VAR8, 100*sizeof(char));
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