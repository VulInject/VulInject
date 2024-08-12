#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char * VAR4;
    char * VAR5 = (char *)FUN2(100*sizeof(char));
    memset(VAR5, '', 100-1);
    VAR5[100-1] = '';
    if(VAR6==5)
    {
        VAR4 = VAR5 - 8;
    }
    {
        size_t VAR7;
        char VAR8[100];
        memset(VAR8, '', 100-1); 
        VAR8[100-1] = ''; 
        for (VAR7 = 0; VAR7 < 100; VAR7++)
        {
            VAR4[VAR7] = VAR8[VAR7];
        }
        VAR4[100-1] = '';
        FUN3(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}