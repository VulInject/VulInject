static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int64_t VAR6, uint64_t VAR7, uint64_t VAR8, int VAR9, int64_t VAR10)
{
    uint64_t VAR11 = VAR12;
    VAR13 *VAR14;
    int VAR15 = 0;
    VAR16 *VAR17;
    int16_t VAR18;
    VAR19 *VAR20 = NULL;
    int VAR21, VAR22, VAR23 = 0;
    uint64_t VAR24, VAR25;
    if ((VAR21 = FUN2(VAR2, VAR4, VAR5, &VAR24)) < 0)
    {
        FUN3(VAR2->VAR26, VAR27, "");
        return VAR21;
    }
    VAR4 += VAR21;
    VAR5 -= VAR21;
    VAR14 = FUN4(VAR2, VAR24);
    if (!VAR14 || !VAR14->VAR28)
    {
        FUN3(VAR2->VAR26, VAR29, "" VAR30 "", VAR24, VAR5);
        return VAR31;
    }
    else if (VAR5 <= 3)
        return 0;
    VAR17 = VAR14->VAR28;
    if (VAR17->VAR32 >= VAR33)
        return VAR15;
    VAR18 = FUN5(VAR4);
    VAR4 += 2;
    VAR22 = *VAR4++;
    VAR5 -= 3;
    if (VAR9 == -1)
        VAR9 = VAR22 & 0x80 ? VAR34 : 0;
    if (VAR7 != (VAR35)-1 && (VAR18 >= 0 || VAR7 >= -VAR18))
    {
        VAR11 = VAR7 + VAR18;
        if (VAR14->VAR36 == VAR37 && VAR11 < VAR14->VAR38)
            VAR9 = 0;
        if (VAR9)
            FUN6(VAR17, VAR10, VAR11, 0, 0, VAR39);
    }
    if (VAR2->VAR40 && VAR14->VAR36 != VAR37)
    {
        if (!VAR9 || VAR11 < VAR2->VAR41)
            return VAR15;
        VAR2->VAR40 = 0;
    }
    VAR15 = FUN7(VAR2, &VAR4, &VAR5, (VAR22 & 0x06) >> 1, &VAR20, &VAR23);
    if (VAR15)
        goto VAR42;
    if (VAR8 != VAR12)
    {
        VAR25 = VAR8 / VAR23;
        if (VAR8 != VAR25 * VAR23)
        {
            FUN3(VAR2->VAR26, VAR43, "");
        }
    }
    else
    {
        VAR25 = VAR14->VAR44 / VAR2->VAR45;
        VAR8 = VAR25 * VAR23;
    }
    if (VAR11 != VAR12)
        VAR14->VAR38 = FUN8(VAR14->VAR38, VAR11 + VAR8);
    for (VAR21 = 0; VAR21 < VAR23; VAR21++)
    {
        if ((VAR17->VAR46->VAR47 == VAR48 || VAR17->VAR46->VAR47 == VAR49 || VAR17->VAR46->VAR47 == VAR50 || VAR17->VAR46->VAR47 == VAR51) && VAR17->VAR46->VAR52 && VAR14->VAR53.VAR54)
        {
            VAR15 = FUN9(VAR2, VAR14, VAR17, VAR4, VAR5, VAR11, VAR25, VAR6);
            if (VAR15)
                goto VAR42;
        }
        else
        {
            VAR15 = FUN10(VAR2, VAR14, VAR17, VAR4, VAR20[VAR21], VAR11, VAR25, VAR6, !VAR21 ? VAR9 : 0);
            if (VAR15)
                goto VAR42;
        }
        if (VAR11 != VAR12)
            VAR11 = VAR25 ? VAR11 + VAR25 : VAR12;
        VAR4 += VAR20[VAR21];
        VAR5 -= VAR20[VAR21];
    }
VAR42:
    FUN11(VAR20);
    return VAR15;
}