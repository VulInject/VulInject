void FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4)
{
    if (!FUN2(VAR3, "") || !FUN2(VAR3, ""))
    {
        const char *VAR5;
        if (FUN3(VAR4, "", &VAR5) && VAR2->VAR6 <= VAR7)
        {
            VAR2->VAR6 = VAR7;
            VAR2->VAR8[0] = 0;
            VAR2->VAR9 = 0;
            FUN4(VAR5, (VAR10)VAR11, VAR2);
        }
        else if (FUN3(VAR4, "", &VAR5) && VAR2->VAR6 <= VAR12)
        {
            VAR2->VAR6 = VAR12;
            memset(&VAR2->VAR13, 0, sizeof(VAR14));
            VAR2->VAR8[0] = 0;
            VAR2->VAR9 = 0;
            FUN4(VAR5, (VAR10)VAR15, VAR2);
            FUN5(VAR2->VAR13.VAR16, sizeof(VAR2->VAR13.VAR16));
            if (!FUN2(VAR2->VAR13.VAR9, ""))
                VAR2->VAR9 = 1;
        }
    }
    else if (!FUN2(VAR3, ""))
    {
        FUN4(VAR4, (VAR10)VAR17, VAR2);
    }
}