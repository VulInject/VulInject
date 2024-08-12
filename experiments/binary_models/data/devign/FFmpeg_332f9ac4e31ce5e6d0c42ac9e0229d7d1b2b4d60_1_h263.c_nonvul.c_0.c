int FUN1(VAR1 *VAR2)
{
    int VAR3;
    if (FUN2(&VAR2->VAR4, 22) != 0x20)
    {
        FUN3(VAR2->VAR5, VAR6, "");
        return -1;
    }
    VAR2->VAR7 = FUN4(&VAR2->VAR4, 8);
    if (FUN5(&VAR2->VAR4) != 1)
    {
        FUN3(VAR2->VAR5, VAR6, "");
        return -1;
    }
    if (FUN5(&VAR2->VAR4) != 0)
    {
        FUN3(VAR2->VAR5, VAR6, "");
        return -1;
    }
    FUN6(&VAR2->VAR4);
    FUN6(&VAR2->VAR4);
    FUN6(&VAR2->VAR4);
    VAR3 = FUN4(&VAR2->VAR4, 3);
    if (VAR3 != 7)
    {
        FUN3(VAR2->VAR5, VAR6, "");
        return -1;
    }
    VAR2->VAR8 = 0;
    VAR2->VAR9 = VAR10 + FUN5(&VAR2->VAR4);
    VAR2->VAR11 = FUN5(&VAR2->VAR4);
    VAR2->VAR12 = VAR2->VAR11;
    if (FUN5(&VAR2->VAR4) != 0)
    {
        FUN3(VAR2->VAR5, VAR6, "");
        return -1;
    }
    if (FUN5(&VAR2->VAR4) != 0)
    {
        VAR2->VAR13 = 1;
        FUN3(VAR2->VAR5, VAR6, "");
    }
    if (FUN5(&VAR2->VAR4) != 0)
    {
        FUN3(VAR2->VAR5, VAR6, "");
        return -1;
    }
    FUN7(&VAR2->VAR4, 41);
    VAR2->VAR14 = VAR2->VAR15 = FUN4(&VAR2->VAR4, 5);
    FUN6(&VAR2->VAR4);
    while (FUN5(&VAR2->VAR4) != 0)
    {
        FUN7(&VAR2->VAR4, 8);
    }
    VAR2->VAR16 = 1;
    VAR2->VAR17 = VAR2->VAR18 = VAR19;
    return 0;
}