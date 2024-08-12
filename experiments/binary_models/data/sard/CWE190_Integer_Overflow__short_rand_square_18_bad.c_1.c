#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    short VAR4;
    VAR4 = 0;
    goto VAR5;
VAR5:
    VAR4 = (short)FUN2();
    goto VAR6;
VAR6:
    {
        short VAR7 = VAR4 * VAR4;
        FUN3(VAR7);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}