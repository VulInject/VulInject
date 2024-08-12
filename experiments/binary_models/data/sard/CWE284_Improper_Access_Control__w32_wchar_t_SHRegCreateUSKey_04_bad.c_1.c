#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR4 FUN1( VAR5, "" )
#VAR1 <VAR6.VAR3>
static const int VAR7 = 1; 
static const int VAR8 = 0; 
void FUN2()
{
    if(VAR7)
    {
        {
            wchar_t * VAR9 = VAR10"";
            HUSKEY VAR11 = VAR12;
            if (FUN3(
                        VAR9,
                        VAR13,
                        NULL,
                        &VAR11,
                        VAR14) != VAR15)
            {
            }
            else
            {
                FUN4(VAR11);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}