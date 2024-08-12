static VAR1 *FUN1(VAR2 *VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR3->VAR8;
    VAR2 *VAR9 = VAR7->VAR10[0];
    VAR11 *VAR12 = VAR7->VAR13;
    if (VAR12->VAR14)
    {
        VAR1 *VAR15, *VAR8;
        int VAR16;
        VAR15 = FUN2(VAR9, VAR4, VAR5);
        if (!VAR15)
        {
            FUN3(VAR7, VAR17, ""
                                        "");
            return NULL;
        }
        VAR8 = FUN4();
        if (!VAR8)
        {
            FUN5(&VAR15);
            return NULL;
        }
        VAR16 = FUN6(VAR8, VAR15, VAR12->VAR18);
        if (VAR16)
        {
            FUN3(VAR7, VAR17, ""
                                        "",
                   VAR16);
            FUN5(&VAR15);
            FUN5(&VAR8);
            return NULL;
        }
        FUN5(&VAR15);
        return VAR8;
    }
    else
    {
        return FUN7(VAR3, VAR4, VAR5);
    }
}