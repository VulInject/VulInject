#VAR1 ""
short FUN1(short VAR2)
{
    VAR2 = (short)FUN2();
    return VAR2;
}
void FUN3()
{
    short VAR2;
    VAR2 = 0;
    VAR2 = FUN1(VAR2);
    {
        VAR2--;
        short VAR3 = VAR2;
        FUN4(VAR3);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}