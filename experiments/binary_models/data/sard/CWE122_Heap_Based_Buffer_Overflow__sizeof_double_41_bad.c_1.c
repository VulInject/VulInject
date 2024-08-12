#VAR1 ""
void FUN1(double * VAR2)
{
    FUN2(*VAR2);
    free(VAR2);
}
void FUN3()
{
    double * VAR2;
    VAR2 = NULL;
    VAR2 = (double *)malloc(sizeof(VAR2));
    if (VAR2 == NULL) {FUN4(-1);}
    *VAR2 = 1.7E300;
    FUN1(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}