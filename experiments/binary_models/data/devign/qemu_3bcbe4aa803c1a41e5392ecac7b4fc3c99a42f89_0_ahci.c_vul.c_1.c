static void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = &VAR2->VAR9[VAR3];
    VAR10 *VAR11 = &VAR8->VAR3.VAR12[0];
    VAR13 *VAR14 = (VAR13 *)VAR5;
    uint8_t VAR15 = VAR14->VAR15 >> 3;
    VAR16 *VAR17 = &VAR8->VAR17[VAR15];
    if (VAR17->VAR18)
    {
        fprintf(VAR19, "", VAR20, VAR15);
        return;
    }
    VAR17->VAR18 = 1;
    VAR17->VAR21 = VAR8;
    VAR17->VAR6 = VAR6;
    VAR17->VAR22 = ((VAR23)VAR14->VAR24 << 40) | ((VAR23)VAR14->VAR25 << 32) | ((VAR23)VAR14->VAR26 << 24) | ((VAR23)VAR14->VAR27 << 16) | ((VAR23)VAR14->VAR28 << 8) | (VAR23)VAR14->VAR29;
    VAR17->VAR30 = ((VAR31)VAR14->VAR32 << 8) | VAR14->VAR33;
    FUN2(VAR3, "" VAR34 "" VAR34 ""
                  "" VAR34 "",
            VAR17->VAR22, VAR17->VAR22 + VAR17->VAR30 - 2, VAR11->VAR35 - 1);
    FUN3(VAR8, &VAR17->VAR36, 0);
    VAR17->VAR15 = VAR15;
    switch (VAR14->VAR37)
    {
    case VAR38:
        FUN2(VAR3, "" VAR34 ""
                      "",
                VAR17->VAR30 - 1, VAR17->VAR22, VAR17->VAR15);
        FUN2(VAR3, "" VAR34 "", VAR17->VAR15, VAR17->VAR22);
        FUN4(VAR11->VAR39, &VAR17->VAR40, &VAR17->VAR36, VAR41);
        VAR17->VAR42 = FUN5(VAR11->VAR39, &VAR17->VAR36, VAR17->VAR22, VAR43, VAR17);
        break;
    case VAR44:
        FUN2(VAR3, "" VAR34 "", VAR17->VAR30 - 1, VAR17->VAR22, VAR17->VAR15);
        FUN2(VAR3, "" VAR34 "", VAR17->VAR15, VAR17->VAR22);
        FUN4(VAR11->VAR39, &VAR17->VAR40, &VAR17->VAR36, VAR45);
        VAR17->VAR42 = FUN6(VAR11->VAR39, &VAR17->VAR36, VAR17->VAR22, VAR43, VAR17);
        break;
    default:
        if (FUN7(VAR5[2]))
        {
            FUN2(VAR3, "", VAR5[2]);
        }
        else
        {
            FUN2(VAR3, "");
        }
        FUN8(&VAR17->VAR36);
    }
}