#VAR1 ""
double * FUN1(double * VAR2)
{
    VAR2 = (double *)malloc(sizeof(VAR2));
    if (VAR2 == NULL) {FUN2(-1);}
    *VAR2 = 1.7E300;
    return VAR2;
}
void FUN3()
{
    double * VAR2;
    VAR2 = NULL;
    VAR2 = FUN1(VAR2);
    FUN4(*VAR2);
    free(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}