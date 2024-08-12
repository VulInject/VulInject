void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    const char *VAR5 = FUN2(VAR2, "");
    if (VAR5)
    {
        if (strcmp(VAR5, "") == 0)
        {
            if (VAR6)
            {
                FUN3(VAR4, "");
            }
            else if (VAR7)
            {
                FUN3(VAR4, "");
            }
            else
            {
                if (!FUN4())
                {
                    FUN5(""
                                 "");
                    FUN6("");
                }
                VAR8 = true;
            }
        }
        else if (strcmp(VAR5, "") == 0)
        {
            VAR8 = false;
        }
        else
        {
            FUN3(VAR4, "", VAR5);
        }
    }
    else
    {
        VAR8 = FUN7();
    }