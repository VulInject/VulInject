#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR4 FUN1( VAR5, "" )
void FUN2()
{
    if(1)
    {
        {
            char * VAR6 = "";
            HKEY VAR7;
            if (FUN3(
                        VAR8,
                        VAR6,
                        0,
                        VAR9,
                        &VAR7) != VAR10)
            {
            }
            else
            {
                FUN4(VAR7);
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