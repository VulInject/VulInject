#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    goto VAR3;
VAR3:
    VAR2 = VAR4 + 5;
    {
        short VAR5 = (short)VAR2;
        FUN2(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}