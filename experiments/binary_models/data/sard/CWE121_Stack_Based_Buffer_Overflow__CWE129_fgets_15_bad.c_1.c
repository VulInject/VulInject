#VAR1 ""
#define FUN1 (3 * sizeof(VAR2) + 2)
void FUN2()
{
    int VAR2;
    VAR2 = -1;
    switch(6)
    {
    case 6:
    {
        char VAR3[VAR4] = "";
        if (fgets(VAR3, VAR4, stdin) != NULL)
        {
            VAR2 = FUN3(VAR3);
        }
        else
        {
        }
    }
    break;
    default:
        break;
    }
    switch(7)
    {
    case 7:
    {
        int VAR5;
        int VAR6[10] = { 0 };
        if (VAR2 >= 0)
        {
            VAR6[VAR2] = 1;
            for(VAR5 = 0; VAR5 < 10; VAR5++)
            {
                FUN4(VAR6[VAR5]);
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
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}