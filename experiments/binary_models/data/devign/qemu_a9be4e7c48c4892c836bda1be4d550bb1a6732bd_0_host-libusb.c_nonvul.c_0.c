static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, VAR9 *VAR10)
{
    VAR11 *VAR12 = FUN2(VAR2);
    VAR13 *VAR14;
    int VAR15;
    FUN3(VAR12->VAR16, VAR12->VAR17, VAR4, VAR5, VAR6, VAR7);
    if (VAR12->VAR18 == NULL)
    {
        VAR4->VAR19 = VAR20;
        FUN4(VAR12->VAR16, VAR12->VAR17, VAR4, VAR4->VAR19);
        return;
    }
    switch (VAR5)
    {
    case VAR21 | VAR22:
        FUN5(VAR12, VAR6);
        FUN4(VAR12->VAR16, VAR12->VAR17, VAR4, VAR4->VAR19);
        return;
    case VAR21 | VAR23:
        FUN6(VAR12, VAR6 & 0xff, VAR4);
        FUN4(VAR12->VAR16, VAR12->VAR17, VAR4, VAR4->VAR19);
        return;
    case VAR24 | VAR25:
        FUN7(VAR12, VAR7, VAR6, VAR4);
        FUN4(VAR12->VAR16, VAR12->VAR17, VAR4, VAR4->VAR19);
        return;
    case VAR26 | VAR27:
        if (VAR6 == 0)
        {
            int VAR28 = (VAR7 & VAR29) ? VAR30 : VAR31;
            FUN8(VAR12->VAR18, VAR7);
            FUN9(VAR2, VAR28, VAR7 & 0x0f, 0);
            FUN4(VAR12->VAR16, VAR12->VAR17, VAR4, VAR4->VAR19);
            return;
        }
    }
    VAR14 = FUN10(VAR12, VAR4, (VAR5 >> 8) & VAR29, VAR8 + 8);
    VAR14->VAR32 = VAR10;
    VAR14->VAR33 = VAR8;
    memcpy(VAR14->VAR34, VAR2->VAR35, 8);
    if (!VAR14->VAR36)
    {
        memcpy(VAR14->VAR34 + 8, VAR14->VAR32, VAR14->VAR33);
    }
    if ((VAR2->VAR37 & VAR38) && !(VAR2->VAR39->VAR37 & VAR38) && VAR5 == 0x8006 && VAR6 == 0x100 && VAR7 == 0)
    {
        VAR14->VAR40 = true;
    }
    FUN11(VAR14->VAR41, VAR12->VAR18, VAR14->VAR34, VAR42, VAR14, VAR43);
    VAR15 = FUN12(VAR14->VAR41);
    if (VAR15 != 0)
    {
        VAR4->VAR19 = VAR20;
        FUN13(VAR12->VAR16, VAR12->VAR17, VAR4, VAR4->VAR19, VAR4->VAR44);
        if (VAR15 == VAR45)
        {
            FUN14(VAR12);
        }
        return;
    }
    VAR4->VAR19 = VAR46;
}