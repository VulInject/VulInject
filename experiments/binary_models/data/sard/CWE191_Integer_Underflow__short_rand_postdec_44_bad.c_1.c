#VAR1 ""
void FUN1(short VAR2)
{
    {
        VAR2--;
        short VAR3 = VAR2;
        FUN2(VAR3);
    }
}
void FUN3()
{
    short VAR2;
    void (*VAR4) (short) = VAR5;
    VAR2 = 0;
    VAR2 = (short)FUN4();
    FUN5(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}