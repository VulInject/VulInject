#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    long VAR4;
    goto VAR5;
VAR5:
    VAR4 = 5L;
    goto VAR6;
VAR6:
    VAR4 = 10L;
    FUN2(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}