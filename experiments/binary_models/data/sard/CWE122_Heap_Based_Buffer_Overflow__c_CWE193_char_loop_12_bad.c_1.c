#VAR1 ""
#VAR1 <VAR2.VAR3>
#define VAR4 ""
void FUN1()
{
    char * VAR5;
    VAR5 = NULL;
    if(FUN2())
    {
        VAR5 = (char *)malloc(10*sizeof(char));
        if (VAR5 == NULL) {FUN3(-1);}
    }
    else
    {
        VAR5 = (char *)malloc((10+1)*sizeof(char));
        if (VAR5 == NULL) {FUN3(-1);}
    }
    {
        char VAR6[10+1] = VAR4;
        size_t VAR7, VAR8;
        VAR8 = strlen(VAR6);
        for (VAR7 = 0; VAR7 < VAR8 + 1; VAR7++)
        {
            VAR5[VAR7] = VAR6[VAR7];
        }
        FUN4(VAR5);
        free(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}