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
        memcpy(VAR5, VAR6, (strlen(VAR6) + 1) * sizeof(char));
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