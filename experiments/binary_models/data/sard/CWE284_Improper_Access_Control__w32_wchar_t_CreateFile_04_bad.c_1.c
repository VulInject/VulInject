#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    if(VAR4)
    {
        {
            HANDLE VAR6;
            wchar_t * VAR7 = VAR8"";
            VAR6 = FUN2(
                        VAR7,
                        VAR9,
                        VAR10,
                        NULL,
                        VAR11,
                        VAR12,
                        NULL);
            if (VAR6 == VAR13)
            {
            }
            else
            {
                FUN3(VAR6);
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