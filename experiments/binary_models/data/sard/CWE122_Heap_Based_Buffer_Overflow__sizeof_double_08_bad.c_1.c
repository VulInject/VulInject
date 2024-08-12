#VAR1 ""
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
    double * VAR2;
    VAR2 = NULL;
    if(FUN1())
    {
        VAR2 = (double *)malloc(sizeof(VAR2));
        if (VAR2 == NULL) {FUN4(-1);}
        *VAR2 = 1.7E300;
    }
    FUN5(*VAR2);
    free(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}