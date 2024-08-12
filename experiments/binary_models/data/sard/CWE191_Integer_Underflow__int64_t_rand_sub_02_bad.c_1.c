#VAR1 ""
void FUN1()
{
    int64_t VAR2;
    VAR2 = 0LL;
    if(1)
    {
        VAR2 = (VAR3)FUN2();
    }
    if(1)
    {
        {
            int64_t VAR4 = VAR2 - 1;
            FUN3(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}