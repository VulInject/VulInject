#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
# VAR5 FUN1(VAR6, "")
void FUN2()
{
    goto VAR7;
VAR7:
    FUN3(0);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}