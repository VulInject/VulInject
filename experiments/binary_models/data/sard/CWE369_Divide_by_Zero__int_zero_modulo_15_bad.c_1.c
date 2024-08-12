#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    switch(6)
    {
    case 6:
        VAR2 = 0;
        break;
    default:
        break;
    }
    switch(7)
    {
    case 7:
        FUN2(100 % VAR2);
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