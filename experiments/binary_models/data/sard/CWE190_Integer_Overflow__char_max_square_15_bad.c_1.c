#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char VAR4;
    VAR4 = '';
    switch(6)
    {
    case 6:
        VAR4 = VAR5;
        break;
    default:
        break;
    }
    switch(7)
    {
    case 7:
    {
        char VAR6 = VAR4 * VAR4;
        FUN2(VAR6);
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