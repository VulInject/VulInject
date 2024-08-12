static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    GdkWindowHints VAR5 = 0;
    GdkGeometry VAR6 = {};
    VAR7 *VAR8 = NULL;
    VAR9 *VAR10;
    if (VAR2->VAR11 == VAR12)
    {
        if (!VAR2->VAR13.VAR14)
        {
            return;
        }
        if (VAR4->VAR15)
        {
            VAR6.VAR16 = FUN2(VAR2->VAR13.VAR14) * VAR17;
            VAR6.VAR18 = FUN3(VAR2->VAR13.VAR14) * VAR17;
            VAR5 |= VAR19;
        }
        else
        {
            VAR6.VAR16 = FUN2(VAR2->VAR13.VAR14) * VAR2->VAR13.VAR20;
            VAR6.VAR18 = FUN3(VAR2->VAR13.VAR14) * VAR2->VAR13.VAR21;
            VAR5 |= VAR19;
        }
        VAR8 = VAR2->VAR13.VAR22;
        FUN4(VAR8, VAR6.VAR16, VAR6.VAR18);
    }
    else if (VAR2->VAR11 == VAR23)
    {
        VAR24 *VAR25 = FUN5(VAR2->VAR26.VAR27);
        VAR28 *VAR29;
        VAR6.VAR30 = FUN6(VAR25);
        VAR6.VAR31 = FUN7(VAR25);
        VAR5 |= VAR32;
        VAR6.VAR33 = VAR6.VAR30;
        VAR6.VAR34 = VAR6.VAR31;
        VAR5 |= VAR35;
        VAR6.VAR16 = VAR6.VAR30 * VAR36;
        VAR6.VAR18 = VAR6.VAR31 * VAR37;
        VAR5 |= VAR19;
        FUN8(VAR2->VAR26.VAR27, "", &VAR29, NULL);
        VAR6.VAR33 += VAR29->VAR38 + VAR29->VAR39;
        VAR6.VAR34 += VAR29->VAR40 + VAR29->VAR41;
        VAR6.VAR16 += VAR29->VAR38 + VAR29->VAR39;
        VAR6.VAR18 += VAR29->VAR40 + VAR29->VAR41;
        VAR8 = VAR2->VAR26.VAR27;
    }
    VAR10 = FUN9(VAR2->VAR42 ? VAR2->VAR42 : VAR4->VAR42);
    FUN10(VAR10, VAR8, &VAR6, VAR5);
}