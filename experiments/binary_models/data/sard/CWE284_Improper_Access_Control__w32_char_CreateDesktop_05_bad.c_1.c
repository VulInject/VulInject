#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR4 FUN1( VAR5, "" )
int VAR6 = 1; 
int VAR7 = 0; 
void FUN2()
{
    if(VAR6)
    {
        {
            HDESK VAR8;
            char * VAR9 = "";
            VAR8 = FUN3(
                        VAR9,
                        NULL,
                        NULL,
                        0,
                        VAR10,
                        NULL);
            if (VAR8 == NULL)
            {
            }
            else
            {
                FUN4(VAR8);
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