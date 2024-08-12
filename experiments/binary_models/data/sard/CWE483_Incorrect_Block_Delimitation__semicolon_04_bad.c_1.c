#VAR1 ""
static const int VAR2 = 1; 
static const int VAR3 = 0; 
void FUN1()
{
    if(VAR2)
    {
        {
            int VAR4 = (rand() % 3);
            int VAR5 = 0;
            if (VAR4 == 0);
            {
                VAR5 = 1;
            }
            if (VAR5)
            {
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