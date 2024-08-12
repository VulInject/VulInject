#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = 0;
    goto VAR3;
VAR3:
    VAR2 = FUN2();
    goto VAR4;
VAR4:
    {
        int VAR5 = VAR2 + 1;
        FUN3(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}