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
    int64_t VAR2;
    VAR2 = 0LL;
    if(FUN1())
    {
        VAR2 = VAR3;
    }
    if(FUN1())
    {
        {
            int64_t VAR4 = VAR2 - 1;
            FUN4(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}