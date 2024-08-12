#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    while(1)
    {
        VAR2 = VAR3 + 5;
        break;
    }
    {
        short VAR4 = (short)VAR2;
        FUN2(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}