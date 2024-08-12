#VAR1 ""
int VAR2 = 5;
void FUN1()
{
    double * VAR3;
    VAR3 = (double *)FUN2(10*sizeof(double));
    if(VAR2==5)
    {
        {
            int VAR4;
            for(VAR4=0; VAR4<(10/2); VAR4++)
            {
                VAR3[VAR4] = (double)VAR4;
            }
        }
    }
    if(VAR2==5)
    {
        {
            int VAR4;
            for(VAR4=0; VAR4<10; VAR4++)
            {
                FUN3(VAR3[VAR4]);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}