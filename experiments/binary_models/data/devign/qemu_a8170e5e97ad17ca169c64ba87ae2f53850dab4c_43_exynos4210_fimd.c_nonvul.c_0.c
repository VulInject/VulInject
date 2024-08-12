static void FUN1(VAR1 *VAR2, unsigned VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR6[VAR3];
    hwaddr VAR7, VAR8;
    if (!VAR2->VAR9 || !(VAR5->VAR10 & VAR11) || FUN2(VAR2->VAR12, VAR3))
    {
        return;
    }
    if (VAR5->VAR13)
    {
        FUN3(VAR5->VAR13, VAR5->VAR14, 0, 0);
        VAR5->VAR13 = NULL;
        VAR5->VAR14 = 0;
    }
    VAR7 = VAR5->VAR15[FUN4(VAR5)];
    VAR5->VAR14 = VAR8 = (VAR5->VAR16 + VAR5->VAR17) * (VAR5->VAR18 - VAR5->VAR19 + 1);
    VAR5->VAR20 = FUN5(FUN6(&VAR2->VAR21), VAR7, VAR5->VAR14);
    assert(VAR5->VAR20.VAR22);
    assert(VAR5->VAR20.VAR23 == VAR7);
    FUN7("", VAR3, VAR7, VAR5->VAR14);
    if (VAR5->VAR20.VAR24 != VAR5->VAR14 || !FUN8(VAR5->VAR20.VAR22))
    {
        FUN9("", VAR3);
        goto VAR25;
    }
    VAR5->VAR13 = FUN10(VAR7, &VAR8, 0);
    if (!VAR5->VAR13)
    {
        FUN9("", VAR3);
        goto VAR25;
    }
    if (VAR8 != VAR5->VAR14)
    {
        FUN9(""
                     "",
                     VAR3);
        FUN3(VAR5->VAR13, VAR8, 0, 0);
        goto VAR25;
    }
    return;
VAR25:
    VAR5->VAR20.VAR22 = NULL;
    VAR5->VAR20.VAR24 = 0;
    VAR5->VAR13 = NULL;
    VAR5->VAR14 = 0;
}