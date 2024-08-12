#VAR1 ""
void FUN1()
{
    char VAR2;
    VAR2 = '';
    switch(6)
    {
    case 6:
        VAR2 = VAR3;
        break;
    default:
        break;
    }
    switch(7)
    {
    case 7:
    {
        char VAR4 = VAR2 - 1;
        FUN2(VAR4);
    }
    break;
    default:
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}