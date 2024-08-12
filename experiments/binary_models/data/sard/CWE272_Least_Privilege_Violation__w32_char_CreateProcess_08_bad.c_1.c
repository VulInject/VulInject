#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1( VAR6, "" )
int FUN2()
{
    return 1;
}
int FUN3()
{
    return 0;
}
void FUN4()
{
    if(FUN2())
    {
        {
            STARTUPINFOA VAR7;
            PROCESS_INFORMATION VAR8;
            if( !FUN5(NULL,
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
            FUN6(VAR8.VAR10, VAR11);
            FUN7(VAR8.VAR10);
            FUN7(VAR8.VAR12);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN8(NULL) );
    FUN4();
    return 0;
}