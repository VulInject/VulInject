#VAR1 ""
void FUN1()
{
    int VAR2;
    VAR2 = 0;
    goto VAR3;
VAR3:
    VAR2 = VAR4;
    goto VAR5;
VAR5:
    if(VAR2 > 0) 
    {
        int VAR6 = VAR2 * 2;
        FUN2(VAR6);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}