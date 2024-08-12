#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1( VAR6, "" )
static const int VAR7 = 1; 
static const int VAR8 = 0; 
void FUN2()
{
    if(VAR7)
    {
        {
            STARTUPINFOW VAR9;
            PROCESS_INFORMATION VAR10;
            if( !FUN3(NULL,
                                VAR11"",
                                NULL,
                                NULL,
                                VAR12,
                                0,
                                NULL,
                                NULL,
                                &VAR9,
                                &VAR10))
            {
                return;
            }
            else
            {
            }
            FUN4(VAR10.VAR13, VAR14);
            FUN5(VAR10.VAR13);
            FUN5(VAR10.VAR15);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}