#VAR1 ""
void FUN1(int VAR2)
{
    {
        short VAR3 = (short)VAR2;
        FUN2(VAR3);
    }
}
void FUN3()
{
    int VAR2;
    void (*VAR4) (int) = VAR5;
    VAR2 = -1;
    VAR2 = VAR6 + 5;
    FUN4(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}