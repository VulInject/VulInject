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
        VAR2 = (VAR3)FUN4();
    }
    if(FUN1())
    {
        {
            VAR2++;
            int64_t VAR4 = VAR2;
            FUN5(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}