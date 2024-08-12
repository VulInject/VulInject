#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
void FUN1()
{
    int64_t VAR5;
    VAR5 = 0LL;
    goto VAR6;
VAR6:
    VAR5 = (VAR7)FUN2();
    goto VAR8;
VAR8:
    {
        int64_t VAR9 = VAR5 * VAR5;
        FUN3(VAR9);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}