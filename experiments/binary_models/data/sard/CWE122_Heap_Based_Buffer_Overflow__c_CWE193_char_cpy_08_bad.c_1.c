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
    VAR5 = NULL;
    if(FUN1())
    {
        VAR5 = (char *)malloc(10*sizeof(char));
        if (VAR5 == NULL) {FUN4(-1);}
    }
    {
        char VAR6[10+1] = VAR4;
        strcpy(VAR5, VAR6);
        FUN5(VAR5);
        free(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}