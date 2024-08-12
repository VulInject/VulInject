#VAR1 ""
#VAR1 <VAR2.VAR3>
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
    char * VAR4;
    VAR4 = NULL;
    if(FUN1())
    {
        VAR4 = (char *)malloc(100*sizeof(char));
        if (VAR4 == NULL) {FUN4(-1);}
        memset(VAR4, '', 100-1);
        VAR4[100-1] = '';
        free(VAR4);
    }
    if(FUN1())
    {
        FUN5(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}