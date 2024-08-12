#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR4 FUN1( VAR5, "" )
#VAR1 <VAR6.VAR3>
static const int VAR7 = 5;
void FUN2()
{
    if(VAR7==5)
    {
        {
            char * VAR8 = "";
            HUSKEY VAR9 = VAR10;
            if (FUN3(
                        VAR8,
                        VAR11,
                        NULL,
                        &VAR9,
                        VAR12) != VAR13)
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