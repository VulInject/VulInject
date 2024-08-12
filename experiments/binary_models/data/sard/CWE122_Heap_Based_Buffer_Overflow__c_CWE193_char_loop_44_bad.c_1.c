#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
void FUN1(char * VAR5)
{
    {
        char VAR6[10+1] = VAR4;
        size_t VAR7, VAR8;
        VAR8 = strlen(VAR6);
        for (VAR7 = 0; VAR7 < VAR8 + 1; VAR7++)
        {
            VAR5[VAR7] = VAR6[VAR7];
        }
        FUN2(VAR5);
        free(VAR5);
    }
}
void FUN3()
{
    char * VAR5;
    void (*VAR9) (char *) = VAR10;
    VAR5 = NULL;
    VAR5 = (char *)malloc(10*sizeof(char));
    if (VAR5 == NULL) {FUN4(-1);}
    FUN5(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}