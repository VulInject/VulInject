#VAR1 ""
void FUN1(int64_t VAR2)
{
    {
        VAR2--;
        int64_t VAR3 = VAR2;
        FUN2(VAR3);
    }
}
void FUN3()
{
    int64_t VAR2;
    void (*VAR4) (VAR5) = VAR6;
    VAR2 = 0LL;
    VAR2 = (VAR5)FUN4();
    FUN5(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}