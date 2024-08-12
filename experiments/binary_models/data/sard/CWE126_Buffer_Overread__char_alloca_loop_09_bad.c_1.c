#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    char * VAR5 = (char *)FUN2(50*sizeof(char));
    char * VAR6 = (char *)FUN2(100*sizeof(char));
    memset(VAR5, '', 50-1); 
    VAR5[50-1] = ''; 
    memset(VAR6, '', 100-1); 
    VAR6[100-1] = ''; 
    if(VAR7)
    {
        VAR4 = VAR5;
    }
    {
        size_t VAR8, VAR9;
        char VAR10[100];
        memset(VAR10, '', 100-1);
        VAR10[100-1] = ''; 
        VAR9 = strlen(VAR10);
        for (VAR8 = 0; VAR8 < VAR9; VAR8++)
        {
            VAR10[VAR8] = VAR4[VAR8];
        }
        VAR10[100-1] = '';
        FUN3(VAR10);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}