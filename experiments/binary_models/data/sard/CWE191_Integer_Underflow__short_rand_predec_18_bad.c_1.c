#VAR1 ""
void FUN1()
{
    short VAR2;
    VAR2 = 0;
    goto VAR3;
VAR3:
    VAR2 = (short)FUN2();
    goto VAR4;
VAR4:
    {
        --VAR2;
        short VAR5 = VAR2;
        FUN3(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}