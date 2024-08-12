#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    if(1)
    {
        {
            HANDLE VAR4;
            char * VAR5 = "";
            VAR4 = FUN2(
                        VAR5,
                        VAR6,
                        VAR7,
                        NULL,
                        VAR8,
                        VAR9,
                        NULL);
            if (VAR4 == VAR10)
            {
            }
            else
            {
                FUN3(VAR4);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}