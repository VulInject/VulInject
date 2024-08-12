#VAR1 ""
static const int VAR2 = 5;
void FUN1()
{
    int VAR3;
    VAR3 = -1;
    if(VAR2==5)
    {
        VAR3 = FUN2();
    }
    if(VAR2==5)
    {
        {
            size_t VAR4 = 0;
            for (VAR4 = 0; VAR4 < (VAR5)VAR3; VAR4++)
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}