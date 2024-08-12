#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(char * VAR4)
{
    {
        size_t VAR5;
        char VAR6[100];
        memset(VAR6, '', 100-1); 
        VAR6[100-1] = ''; 
        for (VAR5 = 0; VAR5 < 100; VAR5++)
        {
            VAR6[VAR5] = VAR4[VAR5];
        }
        VAR6[100-1] = '';
        FUN2(VAR6);
    }
}
void FUN3()
{
    char * VAR4;
    char * VAR7 = (char *)FUN4(100*sizeof(char));
    memset(VAR7, '', 100-1);
    VAR7[100-1] = '';
    VAR4 = VAR7 - 8;
    FUN1(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}