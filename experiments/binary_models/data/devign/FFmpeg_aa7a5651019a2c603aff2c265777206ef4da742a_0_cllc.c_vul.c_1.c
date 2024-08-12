static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR2->VAR12;
    VAR13 *VAR14 = VAR6->VAR3;
    VAR13 *VAR15;
    uint32_t VAR16, VAR17;
    GetBitContext VAR18;
    int VAR19, VAR20;
    if (VAR11->VAR3[0])
        VAR2->FUN2(VAR2, VAR11);
    VAR11->VAR21 = 0;
    VAR15 = FUN3(VAR8->VAR22, &VAR8->VAR23, VAR6->VAR24);
    if (!VAR15)
    {
        FUN4(VAR2, VAR25, "");
        return FUN5(VAR26);
    }
    VAR8->VAR22 = VAR15;
    VAR17 = 0;
    VAR16 = FUN6(VAR14);
    if (VAR16 == FUN7('', '', '', ''))
    {
        VAR17 = FUN6(VAR14 + 4);
        if (VAR17 > VAR27 - 8 || VAR17 + 8 > VAR6->VAR24)
        {
            FUN4(VAR2, VAR25, "", VAR17);
            return VAR28;
        }
        VAR17 += 8;
        VAR14 += VAR17;
        FUN4(VAR2, VAR29, "");
    }
    VAR8->VAR30.FUN8((VAR31 *)VAR8->VAR22, (VAR31 *)VAR14, (VAR6->VAR24 - VAR17) / 2);
    FUN9(&VAR18, VAR8->VAR22, (VAR6->VAR24 - VAR17) * 8);
    VAR19 = (FUN6(VAR14) >> 8) & 0xFF;
    FUN4(VAR2, VAR29, "", VAR19);
    switch (VAR19)
    {
    case 1:
    case 2:
        VAR2->VAR32 = VAR33;
        VAR2->VAR34 = 8;
        VAR20 = VAR2->FUN10(VAR2, VAR11);
        if (VAR20 < 0)
        {
            FUN4(VAR2, VAR25, "");
            return VAR20;
        }
        VAR20 = FUN11(VAR8, &VAR18, VAR11);
        if (VAR20 < 0)
            return VAR20;
        break;
    case 3:
        VAR2->VAR32 = VAR35;
        VAR2->VAR34 = 8;
        VAR20 = VAR2->FUN10(VAR2, VAR11);
        if (VAR20 < 0)
        {
            FUN4(VAR2, VAR25, "");
            return VAR20;
        }
        VAR20 = FUN12(VAR8, &VAR18, VAR11);
        if (VAR20 < 0)
            return VAR20;
        break;
    default:
        FUN4(VAR2, VAR25, "", VAR19);
        return VAR28;
    }
    VAR11->VAR36 = 1;
    VAR11->VAR37 = VAR38;
    *VAR4 = 1;
    *(VAR10 *)VAR3 = *VAR11;
    return VAR6->VAR24;
}