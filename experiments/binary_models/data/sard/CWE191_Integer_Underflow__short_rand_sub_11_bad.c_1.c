#VAR1 ""
void FUN1()
{
    short VAR2;
    VAR2 = 0;
    if(FUN2())
    {
        VAR2 = (short)FUN3();
    }
    if(FUN2())
    {
        {
            short VAR3 = VAR2 - 1;
            FUN4(VAR3);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}