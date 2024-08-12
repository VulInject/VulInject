#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    switch(6)
    {
    case 6:
        VAR2 = 10;
        break;
    default:
        break;
    }
    switch(7)
    {
    case 7:
    {
        int VAR3;
        int VAR4[10] = { 0 };
        if (VAR2 >= 0)
        {
            VAR4[VAR2] = 1;
            for(VAR3 = 0; VAR3 < 10; VAR3++)
            {
                FUN2(VAR4[VAR3]);
            }
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