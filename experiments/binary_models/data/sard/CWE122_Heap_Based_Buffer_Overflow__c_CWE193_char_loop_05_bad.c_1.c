#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
int VAR5 = 1; 
int VAR6 = 0; 
void FUN1()
{
    char * VAR7;
    VAR7 = NULL;
    if(VAR5)
    {
        VAR7 = (char *)malloc(10*sizeof(char));
        if (VAR7 == NULL) {FUN2(-1);}
    }
    {
        char VAR8[10+1] = VAR4;
        size_t VAR9, VAR10;
        VAR10 = strlen(VAR8);
        for (VAR9 = 0; VAR9 < VAR10 + 1; VAR9++)
        {
            VAR7[VAR9] = VAR8[VAR9];
        }
        FUN3(VAR7);
        free(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}