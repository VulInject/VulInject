#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
void FUN1()
{
    char * VAR5;
    char VAR6[10];
    char VAR7[10+1];
    if(VAR8==5)
    {
        VAR5 = VAR6;
        VAR5[0] = ''; 
    }
    {
        char VAR9[10+1] = VAR4;
        size_t VAR10, VAR11;
        VAR11 = strlen(VAR9);
        for (VAR10 = 0; VAR10 < VAR11 + 1; VAR10++)
        {
            VAR5[VAR10] = VAR9[VAR10];
        }
        FUN2(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}