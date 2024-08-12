#VAR1 ""
VAR2 FUN1(int64_t VAR3)
{
    VAR3 = VAR4;
    return VAR3;
}
void FUN2()
{
    int64_t VAR3;
    VAR3 = 0LL;
    VAR3 = FUN1(VAR3);
    {
        VAR3--;
        int64_t VAR5 = VAR3;
        FUN3(VAR5);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}