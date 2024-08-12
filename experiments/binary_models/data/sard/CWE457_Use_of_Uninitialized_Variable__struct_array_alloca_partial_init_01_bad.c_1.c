#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    VAR3 = (VAR2 *)FUN2(10*sizeof(VAR2));
    {
        int VAR4;
        for(VAR4=0; VAR4<(10/2); VAR4++)
        {
            VAR3[VAR4].VAR5 = VAR4;
            VAR3[VAR4].VAR6 = VAR4;
        }
    }
    {
        int VAR4;
        for(VAR4=0; VAR4<10; VAR4++)
        {
            FUN3(VAR3[VAR4].VAR5);
            FUN3(VAR3[VAR4].VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}