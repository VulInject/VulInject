void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *const VAR6 = &VAR2->VAR7;
    const int VAR8 = VAR6->VAR9;
    int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    int VAR16 = 0;
    const int VAR17 = VAR4 * VAR2->VAR18 + VAR3;
    FUN2(VAR6, VAR2->VAR19.VAR20->VAR21, VAR2->VAR22.VAR20->VAR21, VAR2->VAR23.VAR20->VAR21, 16 * VAR3, 16 * VAR4, 2);
    FUN3(VAR2, 16 * VAR3, 16 * VAR4);
    VAR6->VAR24 = 0;
    if (VAR2->VAR25 == VAR26 && VAR2->VAR23.VAR27[VAR17])
    {
        int VAR28 = FUN4(VAR2, VAR3, VAR4);
        VAR28 = ((unsigned)(VAR28 * VAR28 + 128 * 256)) >> 16;
        VAR6->VAR29 += VAR28;
        VAR2->VAR30.VAR31[VAR4 * VAR2->VAR18 + VAR3] = VAR28;
        VAR2->VAR32[VAR4 * VAR2->VAR18 + VAR3] = VAR33;
        return;
    }
    if (VAR2->VAR25 == VAR26)
        VAR12 = FUN4(VAR2, VAR3, VAR4);
    else
        VAR12 = VAR34;
    VAR6->VAR24 = 0;
    VAR10 = FUN5(VAR2, VAR3, VAR4, VAR2->VAR35, 0, VAR2->VAR36) + 3 * VAR8;
    VAR6->VAR24 = 0;
    VAR11 = FUN5(VAR2, VAR3, VAR4, VAR2->VAR37, 2, VAR2->VAR38) + 2 * VAR8;
    FUN6(VAR2, "", VAR2->VAR35[VAR17][0], VAR2->VAR35[VAR17][1]);
    VAR6->VAR24 = 0;
    VAR13 = FUN7(VAR2, VAR3, VAR4) + VAR8;
    FUN6(VAR2, "", VAR12, VAR10, VAR11, VAR13);
    if (VAR2->VAR39->VAR40 & VAR41)
    {
        VAR6->VAR24 = 0;
        VAR6->VAR42 = VAR6->VAR43[VAR2->VAR36] + VAR44;
        VAR15 = FUN8(VAR2, 0, VAR2->VAR45[0], VAR2->VAR46[0], VAR2->VAR35[VAR17][0], VAR2->VAR35[VAR17][1], 0);
        VAR6->VAR42 = VAR6->VAR43[VAR2->VAR38] + VAR44;
        VAR14 = FUN8(VAR2, 2, VAR2->VAR45[1], VAR2->VAR46[1], VAR2->VAR37[VAR17][0], VAR2->VAR37[VAR17][1], 0);
    }
    else
        VAR15 = VAR14 = VAR34;
    {
        int VAR28 = VAR10;
        VAR16 = VAR47;
        if (VAR12 <= VAR28)
        {
            VAR28 = VAR12;
            VAR16 = VAR48;
        }
        if (VAR11 < VAR28)
        {
            VAR28 = VAR11;
            VAR16 = VAR49;
        }
        if (VAR13 < VAR28)
        {
            VAR28 = VAR13;
            VAR16 = VAR50;
        }
        if (VAR15 < VAR28)
        {
            VAR28 = VAR15;
            VAR16 = VAR51;
        }
        if (VAR14 < VAR28)
        {
            VAR28 = VAR14;
            VAR16 = VAR52;
        }
        VAR28 = ((unsigned)(VAR28 * VAR28 + 128 * 256)) >> 16;
        VAR6->VAR29 += VAR28;
        VAR2->VAR30.VAR31[VAR4 * VAR2->VAR18 + VAR3] = VAR28;
    }
    if (VAR6->VAR39->VAR53 > VAR54)
    {
        VAR16 = VAR47 | VAR49 | VAR50 | VAR48;
        if (VAR15 < VAR34)
            VAR16 |= VAR51;
        if (VAR14 < VAR34)
            VAR16 |= VAR52;
        if (VAR15 < VAR34 && VAR14 < VAR34)
        {
            VAR16 |= VAR55;
        }
        if (VAR12 > 256 * 256 * 16)
            VAR16 &= ~VAR48;
        if (VAR2->VAR25 == VAR26 && VAR16 & VAR48 && VAR2->VAR56 & VAR57 && *(VAR58 *)VAR2->VAR59[VAR17])
            VAR16 |= VAR33;
    }
    VAR2->VAR32[VAR4 * VAR2->VAR18 + VAR3] = VAR16;
}