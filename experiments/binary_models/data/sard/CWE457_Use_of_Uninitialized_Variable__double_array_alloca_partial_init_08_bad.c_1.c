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
    VAR2 = (double *)FUN4(10*sizeof(double));
    if(FUN1())
    {
        {
            int VAR3;
            for(VAR3=0; VAR3<(10/2); VAR3++)
            {
                VAR2[VAR3] = (double)VAR3;
            }
        }
    }
    if(FUN1())
    {
        {
            int VAR3;
            for(VAR3=0; VAR3<10; VAR3++)
            {
                FUN5(VAR2[VAR3]);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}