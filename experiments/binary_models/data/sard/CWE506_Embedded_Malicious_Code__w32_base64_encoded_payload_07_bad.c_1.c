#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
int VAR7 = 5;
void FUN2()
{
    if(VAR7==5)
    {
        {
            char * VAR8 = "";
            VAR9 * VAR10 = NULL;
            DWORD VAR11;
            do
            {
                if (!FUN3(VAR8,
                                          strlen(VAR8),
                                          VAR12,
                                          NULL,
                                          &VAR11,
                                          NULL,
                                          NULL))
                {
                    break;
                }
                VAR10 = (VAR9*) malloc(VAR11 + 1);
                if (VAR10 == NULL)
                {
                    break;
                }
                if (!FUN3(VAR8,
                                          strlen(VAR8),
                                          VAR12,
                                          VAR10,
                                          &VAR11,
                                          NULL,
                                          NULL))
                {
                    break;
                }
                VAR10[VAR11] = '';
                if (system((char*)VAR10) <= 0)
                {
                    FUN4(1);
                }
            }
            while (0);
            free(VAR10);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}