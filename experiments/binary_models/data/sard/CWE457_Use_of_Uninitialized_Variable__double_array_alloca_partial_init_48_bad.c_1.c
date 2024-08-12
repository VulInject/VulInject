#VAR1 ""
void FUN1()
{
    double * VAR2;
    VAR2 = (double *)FUN2(10*sizeof(double));
    if(VAR3==5)
    {
        {
            int VAR4;
            for(VAR4=0; VAR4<(10/2); VAR4++)
            {
                VAR2[VAR4] = (double)VAR4;
            }
        }
    }
    if(VAR3==5)
    {
        {
            int VAR4;
            for(VAR4=0; VAR4<10; VAR4++)
            {
                FUN3(VAR2[VAR4]);
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