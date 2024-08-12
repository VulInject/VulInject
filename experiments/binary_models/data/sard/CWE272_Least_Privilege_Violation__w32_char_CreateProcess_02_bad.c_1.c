#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1( VAR6, "" )
void FUN2()
{
    if(1)
    {
        {
            STARTUPINFOA VAR7;
            PROCESS_INFORMATION VAR8;
            if( !FUN3(NULL,
                                "",
                                NULL,
                                NULL,
                                VAR9,
                                0,
                                NULL,
                                NULL,
                                &VAR7,
                                &VAR8))
            {
                return;
            }
            else
            {
            }
            FUN4(VAR8.VAR10, VAR11);
            FUN5(VAR8.VAR10);
            FUN5(VAR8.VAR12);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}