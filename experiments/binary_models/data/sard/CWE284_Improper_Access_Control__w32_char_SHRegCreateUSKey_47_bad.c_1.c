#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR4 FUN1( VAR5, "" )
#VAR1 <VAR6.VAR3>
void FUN2()
{
    if(FUN3())
    {
        {
            char * VAR7 = "";
            HUSKEY VAR8 = VAR9;
            if (FUN4(
                        VAR7,
                        VAR10,
                        NULL,
                        &VAR8,
                        VAR11) != VAR12)
            {
            }
            else
            {
                FUN5(VAR8);
            }
        }
    }
    else
    {
        {
            char * VAR7 = "";
            HUSKEY VAR8 = VAR9;
            if (FUN4(
                        VAR7,
                        VAR13,
                        NULL,
                        &VAR8,
                        VAR11) != VAR12)
            {
            }
            else
            {
                FUN5(VAR8);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}