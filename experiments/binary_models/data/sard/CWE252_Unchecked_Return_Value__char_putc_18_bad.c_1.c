#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    goto VAR4;
VAR4:
    FUN2((int)'', VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}