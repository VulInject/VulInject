#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    if(FUN2())
    {
        {
            HANDLE VAR4;
            wchar_t * VAR5 = VAR6"";
            VAR4 = FUN3(
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
                FUN4(VAR4);
            }
        }
    }
    else
    {
        {
            HANDLE VAR4;
            wchar_t * VAR5 = VAR6"";
            VAR4 = FUN3(
                        VAR5,
                        VAR12,
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
                FUN4(VAR4);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}