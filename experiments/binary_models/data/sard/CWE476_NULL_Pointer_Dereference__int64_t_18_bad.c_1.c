#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    VAR4 * VAR5;
    goto VAR6;
VAR6:
    VAR5 = NULL;
    goto VAR7;
VAR7:
    FUN2(*VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}