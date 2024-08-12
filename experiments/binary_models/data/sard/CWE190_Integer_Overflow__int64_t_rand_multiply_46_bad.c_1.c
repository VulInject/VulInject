#VAR1 ""
void FUN1()
{
    int64_t VAR2;
    VAR2 = 0LL;
    if(FUN2())
    {
        VAR2 = (VAR3)FUN3();
    }
    if(FUN2())
    {
        if(VAR2 > 0) 
        {
            int64_t VAR4 = VAR2 * 2;
            FUN4(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}