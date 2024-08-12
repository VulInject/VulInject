#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    short VAR4;
    VAR4 = 0;
    if(FUN2())
    {
        VAR4 = (short)FUN3();
    }
    if(FUN2())
    {
        {
            short VAR5 = VAR4 * VAR4;
            FUN4(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}