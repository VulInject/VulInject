static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR9 *VAR10 = FUN4(VAR8);
    VAR11 *VAR12 = FUN5(VAR8);
    VAR13 *VAR14 = FUN6(VAR12);
    VAR15 *VAR16 = FUN7(VAR14);
    VAR17 *VAR18;
    VAR3 *VAR19 = NULL;
    VAR18 = FUN8(VAR8->VAR20, true, VAR16->VAR21, VAR4);
    if (!VAR18)
    {
        return;
    }
    if (!FUN9(VAR2) && VAR2->VAR22)
    {
        FUN10(&VAR19, ""
                         "",
                   FUN9(VAR2));
        goto VAR23;
    }
    VAR18->VAR24 = VAR2;
    VAR18->VAR25 = VAR26;
    VAR18->VAR27 = VAR28;
    VAR18->VAR29.VAR30 = 0xff;
    VAR18->VAR29.VAR31 = VAR32;
    VAR18->VAR33 = VAR34;
    VAR8->VAR18 = VAR18;
    VAR2->VAR35 = NULL;
    VAR2->VAR36 = -1;
    FUN11(VAR18, 0, VAR37);
    FUN12(VAR18->VAR38, VAR18->VAR39, VAR18->VAR40, VAR18->VAR20, VAR8->VAR20.VAR41 ? "" : "");
    if (!FUN13())
    {
        VAR2->VAR42 &= ~VAR43;
    }
    if (VAR6->VAR44)
    {
        VAR6->FUN14(VAR2, &VAR19);
        if (VAR19)
        {
            goto VAR23;
        }
    }
    VAR10->FUN14(VAR8, &VAR19);
    if (VAR19)
    {
        goto VAR23;
    }
    return;
VAR23:
    FUN15(VAR4, VAR19);
    FUN16(VAR18->VAR38, VAR18->VAR39, VAR18->VAR40, VAR18->VAR20, NULL);
    VAR8->VAR18 = NULL;
    FUN17(VAR18);
}