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
            char * VAR7 = "";
            HUSKEY VAR8;
            if (FUN5(
                        VAR7,
                        VAR9,
                        NULL,
                        &VAR8,
                        VAR10) != VAR11)
            {
            }
            else
            {
                FUN6(VAR8);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN4();
    return 0;
}