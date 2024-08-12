#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    double VAR4;
    goto VAR5;
VAR5:
    ; 
    goto VAR6;
VAR6:
    FUN2(VAR4);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}