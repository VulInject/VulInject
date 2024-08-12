#VAR1 ""
#VAR1 <VAR2.VAR3>
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    if(FUN1())
    {
        {
            HANDLE VAR4;
            wchar_t * VAR5 = VAR6"";
            VAR4 = FUN4(
                        VAR5,
                        VAR7,
                        VAR8,
                        NULL,
                        VAR9,
                        VAR10,
                        NULL);
            if (VAR4 == VAR11)
            {
            }
            else
            {
                FUN5(VAR4);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}