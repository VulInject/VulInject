#VAR1 ""
VAR2 FUN1(int64_t VAR3)
{
    VAR3 = (VAR2)FUN2();
    return VAR3;
}
void FUN3()
{
    int64_t VAR3;
    VAR3 = 0LL;
    VAR3 = FUN1(VAR3);
    {
        VAR3--;
        int64_t VAR4 = VAR3;
        FUN4(VAR4);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}