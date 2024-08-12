#VAR1 ""
void FUN1()
{
    short VAR2;
    VAR2 = 0;
    switch(6)
    {
    case 6:
        VAR2 = (short)FUN2();
        break;
    default:
        break;
    }
    switch(7)
    {
    case 7:
    {
        --VAR2;
        short VAR3 = VAR2;
        FUN3(VAR3);
    }
    break;
    default:
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}