#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR4 FUN1( VAR5, "" )
int FUN2()
{
    return 1;
}
int FUN3()
{
    return 0;
}
void FUN4()
{
    if(FUN2())
    {
        {
            char * VAR6 = "";
            HKEY VAR7;
            if (FUN5(
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
                FUN6(VAR7);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN4();
    return 0;
}