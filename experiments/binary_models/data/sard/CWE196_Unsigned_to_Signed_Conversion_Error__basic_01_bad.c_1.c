#VAR1 ""
void FUN1()
{
    {
        unsigned VAR2;
        int VAR3;
        VAR2 = rand();
        if (rand() % 2 == 0)
        {
            VAR2 = VAR4 - VAR2;
        }
        VAR3 = VAR2;
        FUN2(VAR3);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}