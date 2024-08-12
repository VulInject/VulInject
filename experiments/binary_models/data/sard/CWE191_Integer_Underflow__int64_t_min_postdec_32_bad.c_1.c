#VAR1 ""
void FUN1()
{
    int64_t VAR2;
    VAR3 *VAR4 = &VAR2;
    VAR3 *VAR5 = &VAR2;
    VAR2 = 0LL;
    {
        int64_t VAR2 = *VAR4;
        VAR2 = VAR6;
        *VAR4 = VAR2;
    }
    {
        int64_t VAR2 = *VAR5;
        {
            VAR2--;
            int64_t VAR7 = VAR2;
            FUN2(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}