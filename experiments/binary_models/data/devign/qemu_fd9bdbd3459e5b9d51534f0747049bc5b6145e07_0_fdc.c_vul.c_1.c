static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    FUN2("");
    if (VAR2->VAR4 != NULL)
    {
        VAR2->VAR5 = FUN3(VAR2->VAR4);
        if (!FUN4(VAR2->VAR4))
        {
            FUN2("");
            VAR2->VAR6 = VAR7;
        }
        else if (!VAR2->VAR8)
        {
            VAR3 = FUN5(VAR2);
            if (VAR3)
            {
                FUN2("");
            }
            else
            {
                VAR2->VAR8 = true;
                FUN2("", (VAR2->VAR9 & VAR10) ? 2 : 1, VAR2->VAR11, VAR2->VAR12, VAR2->VAR5 ? "" : "");
            }
        }
    }
    else
    {
        FUN2("");
        VAR2->VAR12 = 0;
        VAR2->VAR11 = 0;
        VAR2->VAR9 &= ~VAR10;
        VAR2->VAR13 = VAR7;
        VAR2->VAR6 = VAR7;
    }