#VAR1 ""
void FUN1()
{
    int64_t VAR2;
    VAR2 = 0LL;
    VAR2 = (VAR3)FUN2();
    {
        int64_t VAR4 = VAR2;
        int64_t VAR2 = VAR4;
        {
            VAR2++;
            int64_t VAR5 = VAR2;
            FUN3(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}