#VAR1 ""
void FUN1()
{
    double * VAR2;
    double VAR3[10];
    VAR2 = VAR3;
    switch(6)
    {
    case 6:
    {
        int VAR4;
        for(VAR4=0; VAR4<(10/2); VAR4++)
        {
            VAR2[VAR4] = (double)VAR4;
        }
    }
    break;
    default:
        break;
    }
    switch(7)
    {
    case 7:
    {
        int VAR4;
        for(VAR4=0; VAR4<10; VAR4++)
        {
            FUN2(VAR2[VAR4]);
        }
    }
    break;
    default:
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}