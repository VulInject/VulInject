#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR4 FUN1( VAR5, "" )
static const int VAR6 = 1; 
static const int VAR7 = 0; 
void FUN2()
{
    if(VAR6)
    {
        {
            wchar_t * VAR8 = VAR9"";
            HKEY VAR10;
            if (FUN3(
                        VAR11,
                        VAR8,
                        0,
                        VAR12,
                        &VAR10) != VAR13)
            {
            }
            else
            {
                FUN4(VAR10);
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