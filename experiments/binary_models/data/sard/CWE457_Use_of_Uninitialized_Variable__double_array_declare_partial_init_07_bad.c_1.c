#VAR1 ""
int VAR2 = 5;
void FUN1()
{
    double * VAR3;
    double VAR4[10];
    VAR3 = VAR4;
    if(VAR2==5)
    {
        {
            int VAR5;
            for(VAR5=0; VAR5<(10/2); VAR5++)
            {
                VAR3[VAR5] = (double)VAR5;
            }
        }
    }
    if(VAR2==5)
    {
        {
            int VAR5;
            for(VAR5=0; VAR5<10; VAR5++)
            {
                FUN2(VAR3[VAR5]);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}