#VAR1 ""
void FUN1()
{
    double * VAR2;
    VAR2 = NULL;
    if(1)
    {
        VAR2 = (double *)malloc(sizeof(VAR2));
        if (VAR2 == NULL) {FUN2(-1);}
        *VAR2 = 1.7E300;
    }
    FUN3(*VAR2);
    free(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}