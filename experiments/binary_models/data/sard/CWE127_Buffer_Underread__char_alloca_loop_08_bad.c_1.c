#VAR1 ""
#VAR1 <VAR2.VAR3>
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    char * VAR4;
    char * VAR5 = (char *)FUN4(100*sizeof(char));
    memset(VAR5, '', 100-1);
    VAR5[100-1] = '';
    if(FUN1())
    {
        VAR4 = VAR5 - 8;
    }
    {
        size_t VAR6;
        char VAR7[100];
        memset(VAR7, '', 100-1); 
        VAR7[100-1] = ''; 
        for (VAR6 = 0; VAR6 < 100; VAR6++)
        {
            VAR7[VAR6] = VAR4[VAR6];
        }
        VAR7[100-1] = '';
        FUN5(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}