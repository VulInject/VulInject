#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    char VAR5[100];
    memset(VAR5, '', 100-1);
    VAR5[100-1] = '';
    goto VAR6;
VAR6:
    VAR4 = VAR5 - 8;
    {
        size_t VAR7;
        char VAR6[100];
        memset(VAR6, '', 100-1); 
        VAR6[100-1] = ''; 
        for (VAR7 = 0; VAR7 < 100; VAR7++)
        {
            VAR4[VAR7] = VAR6[VAR7];
        }
        VAR4[100-1] = '';
        FUN2(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}