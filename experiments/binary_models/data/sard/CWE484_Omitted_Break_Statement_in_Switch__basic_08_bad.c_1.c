#VAR1 ""
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    if(FUN1())
    {
        {
            int VAR2 = (rand() % 3);
            switch (VAR2)
            {
            case 0:
            case 1:
                break;
            case 2:
                break;
            default:
                break;
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}