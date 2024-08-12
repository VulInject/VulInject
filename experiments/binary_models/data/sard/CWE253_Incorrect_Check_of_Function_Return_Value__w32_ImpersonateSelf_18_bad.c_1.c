#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR4 FUN1(VAR5, "")
void FUN2()
{
    goto VAR6;
VAR6:
    if (FUN3(VAR7) > 0)
    {
        FUN4(1);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}