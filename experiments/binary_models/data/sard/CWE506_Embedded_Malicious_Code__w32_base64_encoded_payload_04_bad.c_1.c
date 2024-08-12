#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
static const int VAR7 = 1; 
static const int VAR8 = 0; 
void FUN2()
{
    if(VAR7)
    {
        {
            char * VAR9 = "";
            VAR10 * VAR11 = NULL;
            DWORD VAR12;
            do
            {
                if (!FUN3(VAR9,
                                          strlen(VAR9),
                                          VAR13,
                                          NULL,
                                          &VAR12,
                                          NULL,
                                          NULL))
                {
                    break;
                }
                VAR11 = (VAR10*) malloc(VAR12 + 1);
                if (VAR11 == NULL)
                {
                    break;
                }
                if (!FUN3(VAR9,
                                          strlen(VAR9),
                                          VAR13,
                                          VAR11,
                                          &VAR12,
                                          NULL,
                                          NULL))
                {
                    break;
                }
                VAR11[VAR12] = '';
                if (system((char*)VAR11) <= 0)
                {
                    FUN4(1);
                }
            }
            while (0);
            free(VAR11);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}