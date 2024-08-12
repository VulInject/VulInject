#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    char VAR5[100];
    memset(VAR5, '', 100-1);
    VAR5[100-1] = '';
    VAR4 = VAR5 - 8;
    {
        char * VAR6 = VAR4;
        char * VAR4 = VAR6;
        {
            char VAR7[100];
            memset(VAR7, '', 100-1); 
            VAR7[100-1] = ''; 
            strncpy(VAR4, VAR7, 100-1);
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