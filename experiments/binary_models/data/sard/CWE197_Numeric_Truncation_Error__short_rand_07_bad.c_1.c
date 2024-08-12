#VAR1 ""
int VAR2 = 5;
void FUN1()
{
    short VAR3;
    VAR3 = -1;
    if(VAR2==5)
    {
        VAR3 = (short)FUN2();
    }
    {
        char VAR4 = (char)VAR3;
        FUN3(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}