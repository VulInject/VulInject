#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
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
    char * VAR5;
    char * VAR6 = (char *)FUN4((10)*sizeof(char));
    char * VAR7 = (char *)FUN4((10+1)*sizeof(char));
    if(FUN1())
    {
        VAR5 = VAR6;
        VAR5[0] = ''; 
    }
    {
        char VAR8[10+1] = VAR4;
        size_t VAR9, VAR10;
        VAR10 = strlen(VAR8);
        for (VAR9 = 0; VAR9 < VAR10 + 1; VAR9++)
        {
            VAR5[VAR9] = VAR8[VAR9];
        }
        FUN5(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}