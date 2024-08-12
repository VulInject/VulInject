#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
void FUN1()
{
    int64_t VAR5;
    VAR6 *VAR7 = &VAR5;
    VAR6 *VAR8 = &VAR5;
    VAR5 = 0LL;
    {
        int64_t VAR5 = *VAR7;
        VAR5 = VAR9;
        *VAR7 = VAR5;
    }
    {
        int64_t VAR5 = *VAR8;
        {
            int64_t VAR10 = VAR5 * VAR5;
            FUN2(VAR10);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}