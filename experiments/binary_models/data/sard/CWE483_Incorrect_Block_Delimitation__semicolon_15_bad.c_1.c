#VAR1 ""
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        int VAR2 = (rand() % 3);
        int VAR3 = 0;
        if (VAR2 == 0);
        {
            VAR3 = 1;
        }
        if (VAR3)
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
    srand( (unsigned)FUN2(NULL) );
    FUN1();
    return 0;
}