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
            char * VAR8 = "";
            HKEY VAR9;
            if (FUN3(
                        VAR10,
                        VAR8,
                        0,
                        NULL,
                        VAR11,
                        VAR12,
                        NULL,
                        &VAR9,
                        NULL) != VAR13)
            {
            }
            else
            {
                FUN4(VAR9);
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