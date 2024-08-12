#VAR1 ""
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    double * VAR4;
    VAR4 = NULL;
    if(VAR2)
    {
        VAR4 = (double *)malloc(sizeof(VAR4));
        if (VAR4 == NULL) {FUN2(-1);}
        *VAR4 = 1.7E300;
    }
    FUN3(*VAR4);
    free(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}