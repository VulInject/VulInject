#VAR1 ""
void FUN1(short VAR2)
{
    if(VAR2 > 0) 
    {
        short VAR3 = VAR2 * 2;
        FUN2(VAR3);
    }
}
void FUN3()
{
    short VAR2;
    VAR2 = 0;
    VAR2 = (short)FUN4();
    FUN1(VAR2);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}