static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    VAR12 *VAR13 = VAR6->VAR3;
    uint32_t VAR14, VAR15;
    int VAR16;
    GetBitContext VAR17;
    int VAR18, VAR19;
    if (VAR6->VAR20 < 4 + 4)
    {
        FUN2(VAR2, VAR21, "", VAR6->VAR20);
        return VAR22;
    }
    VAR15 = 0;
    VAR14 = FUN3(VAR13);
    if (VAR14 == FUN4('', '', '', ''))
    {
        VAR15 = FUN3(VAR13 + 4);
        if (VAR15 > VAR23 - 8 || VAR15 + 8 > VAR6->VAR20)
        {
            FUN2(VAR2, VAR21, "" VAR24 "", VAR15);
            return VAR22;
        }
        FUN5(VAR2, VAR13 + 8, VAR15);
        VAR15 += 8;
        VAR13 += VAR15;
    }
    VAR16 = (VAR6->VAR20 - VAR15) & ~1;
    FUN6(&VAR8->VAR25, &VAR8->VAR26, VAR16);
    if (!VAR8->VAR25)
    {
        FUN2(VAR2, VAR21, "");
        return FUN7(VAR27);
    }
    VAR8->VAR28.FUN8((VAR29 *)VAR8->VAR25, (VAR29 *)VAR13, VAR16 / 2);
    FUN9(&VAR17, VAR8->VAR25, VAR16 * 8);
    VAR18 = (FUN3(VAR13) >> 8) & 0xFF;
    FUN2(VAR2, VAR30, "", VAR18);
    switch (VAR18)
    {
    case 0:
        VAR2->VAR31 = VAR32;
        VAR2->VAR33 = 8;
        VAR19 = FUN10(VAR2, VAR11, 0);
        if (VAR19 < 0)
        {
            FUN2(VAR2, VAR21, "");
            return VAR19;
        }
        VAR19 = FUN11(VAR8, &VAR17, VAR11);
        if (VAR19 < 0)
            return VAR19;
        break;
    case 1:
    case 2:
        VAR2->VAR31 = VAR34;
        VAR2->VAR33 = 8;
        VAR19 = FUN10(VAR2, VAR11, 0);
        if (VAR19 < 0)
        {
            FUN2(VAR2, VAR21, "");
            return VAR19;
        }
        VAR19 = FUN12(VAR8, &VAR17, VAR11);
        if (VAR19 < 0)
            return VAR19;
        break;
    case 3:
        VAR2->VAR31 = VAR35;
        VAR2->VAR33 = 8;
        VAR19 = FUN10(VAR2, VAR11, 0);
        if (VAR19 < 0)
        {
            FUN2(VAR2, VAR21, "");
            return VAR19;
        }
        VAR19 = FUN13(VAR8, &VAR17, VAR11);
        if (VAR19 < 0)
            return VAR19;
        break;
    default:
        FUN2(VAR2, VAR21, "", VAR18);
        return VAR22;
    }
    VAR11->VAR36 = 1;
    VAR11->VAR37 = VAR38;
    *VAR4 = 1;
    return VAR6->VAR20;
}