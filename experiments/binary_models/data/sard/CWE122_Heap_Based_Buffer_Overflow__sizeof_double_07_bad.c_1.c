#VAR1 ""
int VAR2 = 5;
void FUN1()
{
    double * VAR3;
    VAR3 = NULL;
    if(VAR2==5)
    {
        VAR3 = (double *)malloc(sizeof(VAR3));
        if (VAR3 == NULL) {FUN2(-1);}
        *VAR3 = 1.7E300;
    }
    FUN3(*VAR3);
    free(VAR3);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}