#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1( VAR6, "" )
void FUN2()
{
    goto VAR7;
VAR7:
    {
        char * VAR8 = "";
        HUSKEY VAR9;
        if (FUN3(
                    VAR8,
                    VAR10,
                    NULL,
                    &VAR9,
                    VAR11) != VAR12)
        {
        }
        else
        {
            FUN4(VAR9);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}