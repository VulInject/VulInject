#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1( VAR6, "" )
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
            wchar_t * VAR7 = VAR8"";
            HUSKEY VAR9;
            if (FUN5(
                        VAR7,
                        VAR10,
                        NULL,
                        &VAR9,
                        VAR11) != VAR12)
            {
            }
            else
            {
                FUN6(VAR9);
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