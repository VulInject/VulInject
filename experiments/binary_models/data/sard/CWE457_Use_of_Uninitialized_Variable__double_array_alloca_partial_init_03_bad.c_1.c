#VAR1 ""
void FUN1()
{
    double * VAR2;
    VAR2 = (double *)FUN2(10*sizeof(double));
    if(5==5)
    {
        {
            int VAR3;
            for(VAR3=0; VAR3<(10/2); VAR3++)
            {
                VAR2[VAR3] = (double)VAR3;
            }
        }
    }
    if(5==5)
    {
        {
            int VAR3;
            for(VAR3=0; VAR3<10; VAR3++)
            {
                FUN3(VAR2[VAR3]);
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