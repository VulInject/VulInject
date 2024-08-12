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
            wchar_t * VAR6 = VAR7"";
            HKEY VAR8;
            if (FUN5(
                        VAR9,
                        VAR6,
                        0,
                        VAR10,
                        &VAR8) != VAR11)
            {
            }
            else
            {
                FUN6(VAR8);
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