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
    int VAR2;
    VAR2 = -1;
    if(FUN1())
    {
        VAR2 = FUN4();
    }
    if(FUN1())
    {
        {
            size_t VAR3 = 0;
            for (VAR3 = 0; VAR3 < (VAR4)VAR2; VAR3++)
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}