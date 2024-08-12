#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
void FUN1()
{
    int64_t VAR5;
    VAR5 = 0LL;
    if(FUN2())
    {
        VAR5 = (VAR6)FUN3();
    }
    else
    {
        VAR5 = 2;
    }
    if(FUN2())
    {
        {
            int64_t VAR7 = VAR5 * VAR5;
            FUN4(VAR7);
        }
    }
    else
    {
        if (FUN5((VAR8)VAR5) <= FUN6(VAR9))
        {
            int64_t VAR7 = VAR5 * VAR5;
            FUN4(VAR7);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN1();
    return 0;
}