#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR4 FUN1( VAR5, "" )
void FUN2()
{
    if(FUN3())
    {
        {
            char * VAR6 = "";
            HKEY VAR7;
            if (FUN4(
                        VAR8,
                        VAR6,
                        0,
                        NULL,
                        VAR9,
                        VAR10,
                        NULL,
                        &VAR7,
                        NULL) != VAR11)
            {
            }
            else
            {
                FUN5(VAR7);
            }
        }
    }
    else
    {
        {
            char * VAR6 = "";
            HKEY VAR7;
            if (FUN4(
                        VAR8,
                        VAR6,
                        0,
                        NULL,
                        VAR9,
                        VAR12,
                        NULL,
                        &VAR7,
                        NULL) != VAR11)
            {
            }
            else
            {
                FUN5(VAR7);
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