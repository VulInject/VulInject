static void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = &VAR2->VAR9[VAR3];
    VAR10 *VAR11 = &VAR8->VAR3.VAR12[0];
    VAR13 *VAR14 = (VAR13 *)VAR5;
    uint8_t VAR15 = VAR14->VAR15 >> 3;
    VAR16 *VAR17 = &VAR8->VAR17[VAR15];
    size_t VAR18;
    FUN2(FUN3(VAR14->VAR19));
    if (VAR17->VAR20)
    {
        fprintf(VAR21, "", VAR22, VAR15);
        return;
    }
    VAR17->VAR20 = 1;
    VAR17->VAR23 = VAR8;
    VAR17->VAR6 = VAR6;
    VAR17->VAR24 = VAR14->VAR19;
    VAR17->VAR25 = ((VAR26)VAR14->VAR27 << 40) | ((VAR26)VAR14->VAR28 << 32) | ((VAR26)VAR14->VAR29 << 24) | ((VAR26)VAR14->VAR30 << 16) | ((VAR26)VAR14->VAR31 << 8) | (VAR26)VAR14->VAR32;
    VAR17->VAR15 = VAR15;
    if (VAR15 != VAR6)
    {
        FUN4(VAR3, "", VAR6, VAR15);
    }
    if (VAR14->VAR33 || VAR14->VAR34 || VAR14->VAR35 || VAR14->VAR36)
    {
        FUN4(VAR3, "");
    }
    if (VAR14->VAR37 || VAR14->VAR38)
    {
        FUN4(VAR3, "");
    }
    if (VAR14->VAR39 & VAR40)
    {
        FUN4(VAR3, "");
    }
    if (VAR14->VAR15 & VAR41)
    {
        FUN4(VAR3, "");
    }
    VAR17->VAR42 = ((VAR43)VAR14->VAR44 << 8) | VAR14->VAR45;
    VAR18 = VAR17->VAR42 * 512;
    FUN5(VAR8, &VAR17->VAR46, VAR18, 0);
    if (VAR17->VAR46.VAR18 < VAR18)
    {
        FUN6(""
                     "",
                     VAR17->VAR46.VAR18, VAR18);
        FUN7(&VAR17->VAR46);
        FUN8(VAR17);
        FUN9(VAR8->VAR47, VAR8, VAR48);
        return;
    }
    else if (VAR17->VAR46.VAR18 != VAR18)
    {
        FUN4(VAR3, ""
                      "",
                VAR17->VAR46.VAR18, VAR18);
    }
    FUN4(VAR3, "" VAR49 "" VAR49 ""
                  "" VAR49 "",
            VAR17->VAR25, VAR17->VAR25 + VAR17->VAR42 - 1, VAR11->VAR50 - 1);
    switch (VAR17->VAR24)
    {
    case VAR51:
        FUN4(VAR3, "" VAR49 "", VAR17->VAR42, VAR17->VAR25, VAR17->VAR15);
        FUN4(VAR3, "" VAR49 "", VAR17->VAR15, VAR17->VAR25);
        FUN10(VAR11->VAR52, &VAR17->VAR53, &VAR17->VAR46, VAR54);
        VAR17->VAR55 = FUN11(VAR11->VAR52, &VAR17->VAR46, VAR17->VAR25, VAR56, VAR17);
        break;
    case VAR57:
        FUN4(VAR3, "" VAR49 "", VAR17->VAR42, VAR17->VAR25, VAR17->VAR15);
        FUN4(VAR3, "" VAR49 "", VAR17->VAR15, VAR17->VAR25);
        FUN10(VAR11->VAR52, &VAR17->VAR53, &VAR17->VAR46, VAR58);
        VAR17->VAR55 = FUN12(VAR11->VAR52, &VAR17->VAR46, VAR17->VAR25, VAR56, VAR17);
        break;
    default:
        FUN4(VAR3, "", VAR17->VAR24);
        FUN7(&VAR17->VAR46);
        FUN8(VAR17);
    }
}