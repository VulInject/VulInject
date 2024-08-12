static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    ThreadFrame VAR12 = {.VAR13 = VAR3};
    VAR14 *VAR15 = VAR6->VAR3;
    uint32_t VAR16, VAR17;
    int VAR18;
    GetBitContext VAR19;
    int VAR20, VAR21;
    if (VAR6->VAR22 < 4 + 4)
    {
        FUN2(VAR2, VAR23, "", VAR6->VAR22);
    }
    VAR17 = 0;
    VAR16 = FUN3(VAR15);
    if (VAR16 == FUN4('', '', '', ''))
    {
        VAR17 = FUN3(VAR15 + 4);
        if (VAR17 > VAR24 - 8 || VAR17 + 8 > VAR6->VAR22)
        {
            FUN2(VAR2, VAR23, "" VAR25 "", VAR17);
        }
        FUN5(VAR2, VAR15 + 8, VAR17);
        VAR17 += 8;
        VAR15 += VAR17;
    }
    VAR18 = (VAR6->VAR22 - VAR17) & ~1;
    FUN6(&VAR8->VAR26, &VAR8->VAR27, VAR18);
    if (!VAR8->VAR26)
    {
        FUN2(VAR2, VAR23, "");
        return FUN7(VAR28);
    }
    VAR8->VAR29.FUN8((VAR30 *)VAR8->VAR26, (VAR30 *)VAR15, VAR18 / 2);
    if ((VAR21 = FUN9(&VAR19, VAR8->VAR26, VAR18)) < 0)
        return VAR21;
    VAR20 = (FUN3(VAR15) >> 8) & 0xFF;
    FUN2(VAR2, VAR31, "", VAR20);
    switch (VAR20)
    {
    case 0:
        VAR2->VAR32 = VAR33;
        VAR2->VAR34 = 8;
        if ((VAR21 = FUN10(VAR2, &VAR12, 0)) < 0)
            return VAR21;
        VAR21 = FUN11(VAR8, &VAR19, VAR11);
        if (VAR21 < 0)
            return VAR21;
        break;
    case 1:
    case 2:
        VAR2->VAR32 = VAR35;
        VAR2->VAR34 = 8;
        if ((VAR21 = FUN10(VAR2, &VAR12, 0)) < 0)
            return VAR21;
        VAR21 = FUN12(VAR8, &VAR19, VAR11);
        if (VAR21 < 0)
            return VAR21;
        break;
    case 3:
        VAR2->VAR32 = VAR36;
        VAR2->VAR34 = 8;
        if ((VAR21 = FUN10(VAR2, &VAR12, 0)) < 0)
            return VAR21;
        VAR21 = FUN13(VAR8, &VAR19, VAR11);
        if (VAR21 < 0)
            return VAR21;
        break;
    default:
        FUN2(VAR2, VAR23, "", VAR20);
    }
    VAR11->VAR37 = 1;
    VAR11->VAR38 = VAR39;
    *VAR4 = 1;
    return VAR6->VAR22;