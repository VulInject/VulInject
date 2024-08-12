#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    while(1)
    {
        VAR2 = FUN2();
        break;
    }
    {
        char VAR3 = (char)VAR2;
        FUN3(VAR3);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}