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
            VAR4[VAR5] = VAR6[VAR5];
        }
        VAR4[100-1] = ''; 
        FUN2(VAR4);
    }
}
void FUN3()
{
    char * VAR4;
    void (*VAR7) (char *) = VAR8;
    char * VAR9 = (char *)FUN4(50*sizeof(char));
    char * VAR10 = (char *)FUN4(100*sizeof(char));
    VAR4 = VAR9;
    VAR4[0] = ''; 
    FUN5(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}