#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
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
    int64_t VAR5;
    VAR5 = 0LL;
    if(FUN1())
    {
        VAR5 = VAR6;
    }
    if(FUN1())
    {
        {
            int64_t VAR7 = VAR5 * VAR5;
            FUN4(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}