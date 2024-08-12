#VAR1 ""
void FUN1()
{
    double * VAR2;
    double VAR3[10];
    VAR2 = VAR3;
    goto VAR4;
VAR4:
    {
        int VAR5;
        for(VAR5=0; VAR5<(10/2); VAR5++)
        {
            VAR2[VAR5] = (double)VAR5;
        }
    }
    goto VAR6;
VAR6:
    {
        int VAR5;
        for(VAR5=0; VAR5<10; VAR5++)
        {
            FUN2(VAR2[VAR5]);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}