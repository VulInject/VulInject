#VAR1 ""
#VAR1 <VAR2.VAR3>
short FUN1(short VAR4)
{
    VAR4 = (short)FUN2();
    return VAR4;
}
void FUN3()
{
    short VAR4;
    VAR4 = 0;
    VAR4 = FUN1(VAR4);
    {
        short VAR5 = VAR4 * VAR4;
        FUN4(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}