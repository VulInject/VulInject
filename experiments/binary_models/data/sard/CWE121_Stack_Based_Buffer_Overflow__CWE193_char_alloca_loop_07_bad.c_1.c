#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
int VAR5 = 5;
void FUN1()
{
    char * VAR6;
    char * VAR7 = (char *)FUN2((10)*sizeof(char));
    char * VAR8 = (char *)FUN2((10+1)*sizeof(char));
    if(VAR5==5)
    {
        VAR6 = VAR7;
        VAR6[0] = ''; 
    }
    {
        char VAR9[10+1] = VAR4;
        size_t VAR10, VAR11;
        VAR11 = strlen(VAR9);
        for (VAR10 = 0; VAR10 < VAR11 + 1; VAR10++)
        {
            VAR6[VAR10] = VAR9[VAR10];
        }
        FUN3(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}