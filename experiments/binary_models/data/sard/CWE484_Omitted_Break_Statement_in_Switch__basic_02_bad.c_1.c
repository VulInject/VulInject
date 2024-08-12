#VAR1 ""
void FUN1()
{
    if(1)
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
    srand( (unsigned)FUN2(NULL) );
    FUN1();
    return 0;
}