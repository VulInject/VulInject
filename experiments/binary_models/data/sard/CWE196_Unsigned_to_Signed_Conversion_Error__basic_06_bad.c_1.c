#VAR1 ""
static const int VAR2 = 5;
void FUN1()
{
    if(VAR2==5)
    {
        {
            unsigned VAR3;
            int VAR4;
            VAR3 = rand();
            if (rand() % 2 == 0)
            {
                VAR3 = VAR5 - VAR3;
            }
            VAR4 = VAR3;
            FUN2(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}