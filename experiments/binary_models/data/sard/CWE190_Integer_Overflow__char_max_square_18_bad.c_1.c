#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    char VAR4;
    VAR4 = '';
    goto VAR5;
VAR5:
    VAR4 = VAR6;
    goto VAR7;
VAR7:
    {
        char VAR8 = VAR4 * VAR4;
        FUN2(VAR8);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}