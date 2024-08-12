static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8;
    int VAR9;
    if (VAR6->VAR10.VAR11 > 0xffff)
    {
        FUN3(VAR4, "");
        return;
    }
    if (VAR6->VAR10.VAR12 > 0xffff)
    {
        FUN3(VAR4, "");
        return;
    }
    if (VAR6->VAR10.VAR13 > 127)
    {
        FUN3(VAR4, "");
        return;
    }
    VAR14 = VAR6->VAR14;
    VAR2->VAR15 |= (1 << VAR16);
    VAR2->VAR17 = 0;
    FUN4(&VAR6->VAR18);
    FUN4(&VAR6->VAR19);
    if (VAR6->VAR10.VAR13 && VAR6->VAR10.VAR20 && !VAR6->VAR10.VAR11 && !VAR6->VAR10.VAR12 && !VAR6->VAR10.VAR21)
    {
        VAR6->VAR22 = false;
        VAR8 = FUN5(VAR6->VAR10.VAR20, VAR6->VAR10.VAR13);
        if (!VAR8)
        {
            FUN3(VAR4, "", VAR6->VAR10.VAR20, VAR6->VAR10.VAR13);
            return;
        }
        VAR9 = FUN6(VAR6, VAR8);
        FUN7(VAR8);
        if (VAR9 < 0)
        {
            FUN3(VAR4, "", VAR6->VAR10.VAR20, VAR6->VAR10.VAR13);
            return;
        }
    }
    else
    {
        VAR6->VAR22 = true;
        FUN8(&VAR23, VAR6, VAR24);
        FUN9(NULL);
    }
    VAR6->VAR25.VAR26 = VAR27;
    FUN10(&VAR6->VAR25);
}