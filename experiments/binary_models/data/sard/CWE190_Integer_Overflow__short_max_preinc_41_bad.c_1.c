#VAR1 ""
void FUN1(short VAR2)
{
    {
        ++VAR2;
        short VAR3 = VAR2;
        FUN2(VAR3);
    }
}
void FUN3()
{
    short VAR2;
    VAR2 = 0;
    VAR2 = VAR4;
    FUN1(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}