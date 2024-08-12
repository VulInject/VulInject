static VAR1 *FUN1(const char *VAR2)
{
    VAR1 *VAR3 = NULL;
    VAR4 *VAR5, *VAR6 = FUN2(VAR7, false);
    if (VAR2)
    {
        VAR3 = FUN3(VAR2);
    }
    if (VAR3)
    {
        return VAR3;
    }
    if (VAR2 && !FUN4(VAR2))
    {
        FUN5("");
        FUN6("");
    }
    else
    {
        FUN7("");
        VAR6 = FUN8(VAR6, VAR8);
        for (VAR5 = VAR6; VAR5; VAR5 = VAR5->VAR9)
        {
            VAR1 *VAR3 = VAR5->VAR10;
            if (VAR3->VAR11)
            {
                FUN7("", VAR3->VAR11, VAR3->VAR12, VAR3->VAR2);
            }
            FUN7("", VAR3->VAR2, VAR3->VAR12, VAR3->VAR13 ? "" : "");
        }
    }
    FUN9(!VAR2 || !FUN4(VAR2));