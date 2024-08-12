#VAR1 ""
void FUN1()
{
    int64_t VAR2;
    VAR2 = 0LL;
    goto VAR3;
VAR3:
    VAR2 = (VAR4)FUN2();
    goto VAR5;
VAR5:
    {
        --VAR2;
        int64_t VAR6 = VAR2;
        FUN3(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}