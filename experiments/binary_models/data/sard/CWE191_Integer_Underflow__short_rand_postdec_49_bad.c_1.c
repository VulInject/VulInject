#VAR1 ""
void FUN1()
{
    short VAR2;
    VAR2 = 0;
    if(VAR3==5)
    {
        VAR2 = (short)FUN2();
    }
    if(VAR3==5)
    {
        {
            VAR2--;
            short VAR4 = VAR2;
            FUN3(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}