#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
int VAR5 = 1; 
int VAR6 = 0; 
void FUN1()
{
    char * VAR7;
    char * VAR8 = (char *)FUN2((10)*sizeof(char));
    char * VAR9 = (char *)FUN2((10+1)*sizeof(char));
    if(VAR5)
    {
        VAR7 = VAR8;
        VAR7[0] = ''; 
    }
    {
        char VAR10[10+1] = VAR4;
        size_t VAR11, VAR12;
        VAR12 = strlen(VAR10);
        for (VAR11 = 0; VAR11 < VAR12 + 1; VAR11++)
        {
            VAR7[VAR11] = VAR10[VAR11];
        }
        FUN3(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}