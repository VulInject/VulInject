#VAR1 ""
void FUN1(int64_t VAR2)
{
    {
        int64_t VAR3 = VAR2 + 1;
        FUN2(VAR3);
    }
}
void FUN3()
{
    int64_t VAR2;
    VAR2 = 0LL;
    VAR2 = VAR4;
    FUN1(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}