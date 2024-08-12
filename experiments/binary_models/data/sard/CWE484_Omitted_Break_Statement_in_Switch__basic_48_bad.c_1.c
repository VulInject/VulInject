#VAR1 ""
void FUN1()
{
    if(VAR2==5)
    {
        {
            int VAR3 = (rand() % 3);
            switch (VAR3)
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
    srand( (unsigned)FUN2(NULL) );
    FUN1();
    return 0;
}