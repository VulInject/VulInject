#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR4 FUN1( VAR5, "" )
void FUN2()
{
    goto VAR6;
VAR6:
    {
        char * VAR7 = "";
        HKEY VAR8;
        if (FUN3(
                    VAR9,
                    VAR7,
                    0,
                    NULL,
                    VAR10,
                    VAR11,
                    NULL,
                    &VAR8,
                    NULL) != VAR12)
        {
        }
        else
        {
            FUN4(VAR8);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}