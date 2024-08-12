int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5->VAR6;
    VAStatus VAR7;
    int VAR8;
    VAR4->VAR9 = VAR10;
    VAR4->VAR11 = VAR10;
    if (VAR2->VAR12)
    {
        FUN2(VAR2, VAR13, ""
                                      "");
        VAR4->VAR14 = 1;
        VAR4->VAR15 = VAR2->VAR12;
        VAR4->VAR16 = FUN3(VAR17);
        if (!VAR4->VAR16)
        {
            VAR8 = FUN4(VAR18);
            goto VAR19;
        }
        VAR4->VAR20 = (VAR21 *)VAR4->VAR16->VAR22;
        VAR4->VAR23 = VAR4->VAR20->VAR23;
        VAR4->VAR23->VAR24 = VAR4->VAR15->VAR24;
        VAR4->VAR23->VAR25 = VAR26;
    }
    if (VAR4->VAR14)
    {
        VAR4->VAR9 = VAR4->VAR15->VAR27;
        VAR4->VAR11 = VAR4->VAR15->VAR28;
        FUN2(VAR2, VAR29, ""
                                    "",
               VAR4->VAR9, VAR4->VAR11);
    }
    else
    {
        VAR8 = FUN5(VAR2, VAR17);
        if (VAR8 < 0)
            goto VAR19;
        VAR4->VAR30 = (VAR31 *)VAR2->VAR32->VAR22;
        VAR4->VAR33 = VAR4->VAR30->VAR23;
        VAR4->VAR20 = VAR4->VAR30->VAR34;
        VAR4->VAR23 = VAR4->VAR20->VAR23;
        VAR8 = FUN6(VAR2, VAR4->VAR30->VAR16, &VAR4->VAR9, VAR2->VAR32);
        if (VAR8)
            goto VAR19;
        VAR7 = FUN7(VAR4->VAR23->VAR24, VAR4->VAR9, VAR2->VAR35, VAR2->VAR36, VAR37, VAR4->VAR33->VAR38, VAR4->VAR33->VAR39, &VAR4->VAR11);
        if (VAR7 != VAR40)
        {
            FUN2(VAR2, VAR41, ""
                                        "",
                   VAR7, FUN8(VAR7));
            VAR8 = FUN4(VAR42);
            goto VAR19;
        }
        FUN2(VAR2, VAR29, ""
                                    "",
               VAR4->VAR9, VAR4->VAR11);
    }
    return 0;
VAR19:
    FUN9(VAR2);
    return VAR8;
}