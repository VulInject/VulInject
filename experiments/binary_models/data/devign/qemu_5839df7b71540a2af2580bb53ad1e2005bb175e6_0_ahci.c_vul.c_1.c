static void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, uint8_t VAR6)
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
    VAR17->VAR24 = &((VAR25 *)VAR8->VAR26)[VAR6];
    VAR17->VAR27 = VAR14->VAR19;
    VAR17->VAR28 = ((VAR29)VAR14->VAR30 << 40) | ((VAR29)VAR14->VAR31 << 32) | ((VAR29)VAR14->VAR32 << 24) | ((VAR29)VAR14->VAR33 << 16) | ((VAR29)VAR14->VAR34 << 8) | (VAR29)VAR14->VAR35;
    VAR17->VAR15 = VAR15;
    if (VAR15 != VAR6)
    {
        FUN4(VAR3, "", VAR6, VAR15);
    }
    if (VAR14->VAR36 || VAR14->VAR37 || VAR14->VAR38 || VAR14->VAR39)
    {
        FUN4(VAR3, "");
    }
    if (VAR14->VAR40 || VAR14->VAR41)
    {
        FUN4(VAR3, "");
    }
    if (VAR14->VAR42 & VAR43)
    {
        FUN4(VAR3, "");
    }
    if (VAR14->VAR15 & VAR44)
    {
        FUN4(VAR3, "");
    }
    VAR17->VAR45 = ((VAR14->VAR46 << 8) | VAR14->VAR47);
    if (!VAR17->VAR45)
    {
        VAR17->VAR45 = 0x10000;
    }
    VAR18 = VAR17->VAR45 * 512;
    FUN5(VAR8, &VAR17->VAR48, VAR17->VAR24, VAR18, 0);
    if (VAR17->VAR48.VAR18 < VAR18)
    {
        FUN6(""
                     "",
                     VAR17->VAR48.VAR18, VAR18);
        FUN7(&VAR17->VAR48);
        FUN8(VAR17);
        FUN9(VAR8->VAR49, VAR8, VAR50);
        return;
    }
    else if (VAR17->VAR48.VAR18 != VAR18)
    {
        FUN4(VAR3, ""
                      "",
                VAR17->VAR48.VAR18, VAR18);
    }
    FUN4(VAR3, "" VAR51 "" VAR51 ""
                  "" VAR51 "",
            VAR17->VAR28, VAR17->VAR28 + VAR17->VAR45 - 1, VAR11->VAR52 - 1);
    FUN10(VAR17);
}