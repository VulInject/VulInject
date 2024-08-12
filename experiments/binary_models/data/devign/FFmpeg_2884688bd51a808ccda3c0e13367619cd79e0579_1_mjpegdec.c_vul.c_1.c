int FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR5 *VAR6)
{
    int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    int VAR14, VAR15, VAR16;
    const int VAR17 = VAR2->VAR18 ? 1 : 8;
    int VAR19, VAR20;
    if (!VAR2->VAR21)
    {
        FUN2(VAR2->VAR22, VAR23, "");
        return -1;
    }
    FUN3(VAR2->VAR24->VAR25[0]);
    VAR7 = FUN4(&VAR2->VAR26, 16);
    VAR8 = FUN4(&VAR2->VAR26, 8);
    if (VAR8 == 0 || VAR8 > VAR27)
    {
        FUN2(VAR2->VAR22, VAR28, "", VAR8);
        return VAR29;
    }
    if (VAR7 != 6 + 2 * VAR8)
    {
        FUN2(VAR2->VAR22, VAR28, "", VAR7);
        return VAR30;
    }
    for (VAR9 = 0; VAR9 < VAR8; VAR9++)
    {
        VAR15 = FUN4(&VAR2->VAR26, 8) - 1;
        FUN2(VAR2->VAR22, VAR31, "", VAR15);
        for (VAR14 = 0; VAR14 < VAR2->VAR8; VAR14++)
            if (VAR15 == VAR2->VAR32[VAR14])
                break;
        if (VAR14 == VAR2->VAR8)
        {
            FUN2(VAR2->VAR22, VAR28, "", VAR14);
            return VAR30;
        }
        if (VAR2->VAR22->VAR33 == FUN5('', '', '', '') && VAR8 == 3 && VAR2->VAR8 == 3 && VAR9)
            VAR14 = 3 - VAR9;
        VAR2->VAR34[VAR9] = VAR2->VAR35[VAR14];
        VAR2->VAR36[VAR9] = VAR2->VAR37[VAR14] * VAR2->VAR38[VAR14];
        VAR2->VAR39[VAR9] = VAR2->VAR37[VAR14];
        VAR2->VAR40[VAR9] = VAR2->VAR38[VAR14];
        if (VAR8 == 3 && VAR2->VAR8 == 3 && VAR2->VAR22->VAR41 == VAR42)
            VAR14 = (VAR9 + 2) % 3;
        if (VAR8 == 1 && VAR2->VAR8 == 3 && VAR2->VAR22->VAR41 == VAR42)
            VAR14 = (VAR14 + 2) % 3;
        VAR2->VAR43[VAR9] = VAR14;
        VAR2->VAR44[VAR9] = FUN4(&VAR2->VAR26, 4);
        VAR2->VAR45[VAR9] = FUN4(&VAR2->VAR26, 4);
        if (VAR2->VAR44[VAR9] < 0 || VAR2->VAR45[VAR9] < 0 || VAR2->VAR44[VAR9] >= 4 || VAR2->VAR45[VAR9] >= 4)
            goto VAR46;
        if (!VAR2->VAR47[0][VAR2->VAR44[VAR9]].VAR48 || !(VAR2->VAR49 ? VAR2->VAR47[2][VAR2->VAR45[0]].VAR48 : VAR2->VAR47[1][VAR2->VAR45[VAR9]].VAR48))
            goto VAR46;
    }
    VAR12 = FUN4(&VAR2->VAR26, 8);
    VAR19 = FUN4(&VAR2->VAR26, 8);
    if (VAR2->VAR22->VAR33 != FUN6(""))
    {
        VAR20 = FUN4(&VAR2->VAR26, 4);
        VAR13 = FUN4(&VAR2->VAR26, 4);
    }
    else
        VAR20 = VAR13 = 0;
    if (VAR8 > 1)
    {
        VAR2->VAR50 = (VAR2->VAR51 + VAR2->VAR52 * VAR17 - 1) / (VAR2->VAR52 * VAR17);
        VAR2->VAR53 = (VAR2->VAR54 + VAR2->VAR55 * VAR17 - 1) / (VAR2->VAR55 * VAR17);
    }
    else if (!VAR2->VAR56)
    {
        VAR10 = VAR2->VAR52 / VAR2->VAR39[0];
        VAR11 = VAR2->VAR55 / VAR2->VAR40[0];
        VAR2->VAR50 = (VAR2->VAR51 + VAR10 * VAR17 - 1) / (VAR10 * VAR17);
        VAR2->VAR53 = (VAR2->VAR54 + VAR11 * VAR17 - 1) / (VAR11 * VAR17);
        VAR2->VAR36[0] = 1;
        VAR2->VAR39[0] = 1;
        VAR2->VAR40[0] = 1;
    }
    if (VAR2->VAR22->VAR57 & VAR58)
        FUN2(VAR2->VAR22, VAR31, "", VAR2->VAR18 ? "" : "", VAR2->VAR59 ? "" : "", VAR12, VAR13, VAR19, VAR2->VAR60, VAR2->VAR61, VAR2->VAR62 ? "" : (VAR2->VAR63 ? "" : ""), VAR8);
    for (VAR9 = VAR2->VAR61; VAR9 > 0; VAR9--)
        FUN7(&VAR2->VAR26, 8);
VAR64:
    for (VAR9 = 0; VAR9 < VAR8; VAR9++)
        VAR2->VAR65[VAR9] = (4 << VAR2->VAR60);
    if (VAR2->VAR18)
    {
        FUN3(VAR2->VAR24 == VAR2->VAR66);
        if (VAR67 && VAR2->VAR56)
        {
            if ((VAR16 = FUN8(VAR2, VAR12, VAR13, VAR19)) < 0)
                return VAR16;
        }
        else
        {
            if (VAR2->VAR59)
            {
                if ((VAR16 = FUN9(VAR2, VAR8, VAR12, VAR13)) < 0)
                    return VAR16;
            }
            else
            {
                if ((VAR16 = FUN10(VAR2, VAR12, VAR13, VAR8)) < 0)
                    return VAR16;
            }
        }
    }
    else
    {
        if (VAR2->VAR49 && VAR12)
        {
            FUN3(VAR2->VAR24 == VAR2->VAR66);
            if ((VAR16 = FUN11(VAR2, VAR12, VAR19, VAR20, VAR13)) < 0)
                return VAR16;
        }
        else
        {
            if ((VAR16 = FUN12(VAR2, VAR8, VAR20, VAR13, VAR4, VAR6)) < 0)
                return VAR16;
        }
    }
    if (VAR2->VAR68 && FUN13(&VAR2->VAR26) > 32 && FUN14(&VAR2->VAR26, 8) == 0xFF)
    {
        GetBitContext VAR69 = VAR2->VAR26;
        FUN15(&VAR69);
        if (FUN14(&VAR69, 16) == 0xFFD1)
        {
            FUN2(VAR2->VAR22, VAR31, "");
            VAR2->VAR26 = VAR69;
            FUN7(&VAR2->VAR26, 16);
            VAR2->VAR70 ^= 1;
            goto VAR64;
        }
    }
    FUN16();
    return 0;
VAR46:
    FUN2(VAR2->VAR22, VAR28, "");
    return VAR30;
}