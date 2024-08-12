static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8;
    if (!VAR6->VAR9 || !VAR6->VAR10 || !VAR6->VAR11 || !VAR6->VAR12)
    {
        FUN3(VAR4, ""
                         "");
        return;
    }
    else if (!strcmp(VAR6->VAR9, VAR6->VAR11) || !strcmp(VAR6->VAR10, VAR6->VAR11) || !strcmp(VAR6->VAR9, VAR6->VAR10))
    {
        FUN3(VAR4, ""
                         "");
        return;
    }
    if (FUN4(&VAR8, VAR6->VAR9, VAR4) || !FUN5(&VAR6->VAR13, VAR8, VAR4))
    {
        return;
    }
    if (FUN4(&VAR8, VAR6->VAR10, VAR4) || !FUN5(&VAR6->VAR14, VAR8, VAR4))
    {
        return;
    }
    if (FUN4(&VAR8, VAR6->VAR11, VAR4) || !FUN5(&VAR6->VAR15, VAR8, VAR4))
    {
        return;
    }
    FUN6(&VAR6->VAR16, VAR17, VAR6->VAR18);
    FUN6(&VAR6->VAR19, VAR20, VAR6->VAR18);
    FUN7(&VAR6->VAR21);
    VAR6->VAR22 = FUN8(VAR23, VAR24, VAR25, VAR26);
    FUN9(VAR6);
    return;
}