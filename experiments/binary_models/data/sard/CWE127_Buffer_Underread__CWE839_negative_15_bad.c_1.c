#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    switch(6)
    {
    case 6:
        VAR2 = -5;
        break;
    default:
        break;
    }
    switch(7)
    {
    case 7:
    {
        int VAR3[10] = { 0 };
        if (VAR2 < 10)
        {
            FUN2(VAR3[VAR2]);
        }
        else
        {
        }
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