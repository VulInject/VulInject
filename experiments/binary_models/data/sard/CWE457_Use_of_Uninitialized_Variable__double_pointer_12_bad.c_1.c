#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    double * VAR4;
    if(FUN2())
    {
        ; 
    }
    else
    {
        VAR4 = (double *)malloc(sizeof(double));
        if (VAR4 == NULL) {FUN3(-1);}
        *VAR4 = 5.0;
    }
    if(FUN2())
    {
        FUN4(*VAR4);
    }
    else
    {
        VAR4 = (double *)malloc(sizeof(double));
        if (VAR4 == NULL) {FUN3(-1);}
        *VAR4 = 5.0;
        FUN4(*VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}