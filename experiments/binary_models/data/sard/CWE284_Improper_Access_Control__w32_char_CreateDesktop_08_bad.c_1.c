#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR4 FUN1( VAR5, "" )
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
            HDESK VAR6;
            char * VAR7 = "";
            VAR6 = FUN5(
                        VAR7,
                        NULL,
                        NULL,
                        0,
                        VAR8,
                        NULL);
            if (VAR6 == NULL)
            {
            }
            else
            {
                FUN6(VAR6);
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