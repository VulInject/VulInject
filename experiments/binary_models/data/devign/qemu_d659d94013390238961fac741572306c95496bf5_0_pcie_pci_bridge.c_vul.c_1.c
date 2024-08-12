static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    int VAR9, VAR10;
    FUN4(VAR2, VAR11);
    VAR2->VAR12[VAR13] = 0x1;
    FUN5(&VAR8->VAR14, FUN6(VAR2), "", FUN7(VAR2));
    VAR9 = FUN8(VAR2, &VAR6->VAR15, &VAR8->VAR14, 0, VAR4);
    if (VAR9)
    {
        goto VAR16;
    }
    VAR9 = FUN9(VAR2, 0, VAR17, 0, VAR4);
    if (VAR9 < 0)
    {
        goto VAR18;
    }
    VAR10 = FUN10(VAR2, VAR19, 0, VAR20, VAR4);
    if (VAR10 < 0)
    {
        goto VAR21;
    }
    VAR2->VAR22.VAR23 = VAR10;
    FUN11(VAR2->VAR12 + VAR10 + VAR24, 0x3);
    FUN12(VAR2);
    FUN13(VAR2);
    VAR9 = FUN14(VAR2, VAR25, 0x100, VAR26, VAR4);
    if (VAR9 < 0)
    {
        goto VAR27;
    }
    if (VAR8->VAR28 != VAR29)
    {
        VAR9 = FUN15(VAR2, 0, 1, true, true, VAR4);
        if (VAR9 < 0)
        {
            goto VAR30;
        }
    }
    FUN16(VAR2, 0, VAR31 | VAR32, &VAR8->VAR14);
    return;
VAR30:
    FUN17(VAR2);
VAR27:
VAR21:
    FUN18(VAR2);
VAR18:
    FUN19(VAR2);
VAR16:
    FUN20(VAR2);
}