#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = -1;
    switch(6)
    {
    case 6:
        VAR2 = FUN2();
        break;
    default:
        break;
    }
    switch(7)
    {
    case 7:
    {
        size_t VAR3 = 0;
        for (VAR3 = 0; VAR3 < (VAR4)VAR2; VAR3++)
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