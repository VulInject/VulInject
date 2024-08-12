#VAR1 ""
void FUN1()
{
    int * VAR2;
    VAR2 = (int *)malloc(10*sizeof(int));
    if (VAR2 == NULL) {FUN2(-1);}
    goto VAR3;
VAR3:
    {
        int VAR4;
        for(VAR4=0; VAR4<(10/2); VAR4++)
        {
            VAR2[VAR4] = VAR4;
        }
    }
    goto VAR5;
VAR5:
    {
        int VAR4;
        for(VAR4=0; VAR4<10; VAR4++)
        {
            FUN3(VAR2[VAR4]);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}