#VAR1 ""
static const int VAR2 = 1; 
static const int VAR3 = 0; 
void FUN1()
{
    if(VAR2)
    {
        {
            int VAR4 = (rand() % 3);
            switch (VAR4)
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