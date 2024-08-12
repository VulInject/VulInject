#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1( VAR6, "" )
void FUN2()
{
    if(VAR7==5)
    {
        {
            STARTUPINFOA VAR8;
            PROCESS_INFORMATION VAR9;
            if( !FUN3(NULL,
                                "",
                                NULL,
                                NULL,
                                VAR10,
                                0,
                                NULL,
                                NULL,
                                &VAR8,
                                &VAR9))
            {
                return;
            }
            else
            {
            }
            FUN4(VAR9.VAR11, VAR12);
            FUN5(VAR9.VAR11);
            FUN5(VAR9.VAR13);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}