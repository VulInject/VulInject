#VAR1 ""
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    if(VAR2)
    {
        {
            unsigned VAR4;
            int VAR5;
            VAR4 = rand();
            if (rand() % 2 == 0)
            {
                VAR4 = VAR6 - VAR4;
            }
            VAR5 = VAR4;
            FUN2(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}