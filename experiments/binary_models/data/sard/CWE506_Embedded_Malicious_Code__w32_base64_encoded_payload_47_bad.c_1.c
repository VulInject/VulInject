#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#VAR5 FUN1(VAR6, "")
void FUN2()
{
    if(FUN3())
    {
        {
            char * VAR7 = "";
            VAR8 * VAR9 = NULL;
            DWORD VAR10;
            do
            {
                if (!FUN4(VAR7,
                                          strlen(VAR7),
                                          VAR11,
                                          NULL,
                                          &VAR10,
                                          NULL,
                                          NULL))
                {
                    break;
                }
                VAR9 = (VAR8*) malloc(VAR10 + 1);
                if (VAR9 == NULL)
                {
                    break;
                }
                if (!FUN4(VAR7,
                                          strlen(VAR7),
                                          VAR11,
                                          VAR9,
                                          &VAR10,
                                          NULL,
                                          NULL))
                {
                    break;
                }
                VAR9[VAR10] = '';
                if (system((char*)VAR9) <= 0)
                {
                    FUN5(1);
                }
            }
            while (0);
            free(VAR9);
        }
    }
    else
    {
        {
            char * VAR9 = "";
            if (system(VAR9) <= 0)
            {
                FUN5(1);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN2();
    return 0;
}