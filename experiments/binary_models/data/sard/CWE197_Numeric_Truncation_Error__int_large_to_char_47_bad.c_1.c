#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    if(FUN2())
    {
        VAR2 = VAR3 + 5;
    }
    else
    {
        VAR2 = VAR4-5;
    }
    {
        char VAR5 = (char)VAR2;
        FUN3(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}