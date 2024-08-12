static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int64_t VAR6, uint64_t VAR7, uint64_t VAR8, int VAR9, VAR3 *VAR10, uint64_t VAR11, int VAR12, int64_t VAR13)
{
    uint64_t VAR14 = VAR15;
    VAR16 *VAR17;
    int VAR18 = 0;
    VAR19 *VAR20;
    int16_t VAR21;
    VAR22 *VAR23 = NULL;
    int VAR24, VAR25, VAR26 = 0;
    uint64_t VAR27;
    if ((VAR24 = FUN2(VAR2, VAR4, VAR5, &VAR27)) < 0)
    {
        FUN3(VAR2->VAR28, VAR29, "");
        return VAR24;
    }
    VAR4 += VAR24;
    VAR5 -= VAR24;
    VAR17 = FUN4(VAR2, VAR27);
    if (!VAR17 || !VAR17->VAR30)
    {
        FUN3(VAR2->VAR28, VAR31, "" VAR32 "", VAR27, VAR5);
        return VAR33;
    }
    else if (VAR5 <= 3)
        return 0;
    VAR20 = VAR17->VAR30;
    if (VAR20->VAR34 >= VAR35)
        return VAR18;
    FUN5(VAR8 != VAR15);
    VAR21 = FUN6(VAR4);
    VAR4 += 2;
    VAR25 = *VAR4++;
    VAR5 -= 3;
    if (VAR9 == -1)
        VAR9 = VAR25 & 0x80 ? VAR36 : 0;
    if (VAR7 != (VAR37)-1 && (VAR21 >= 0 || VAR7 >= -VAR21))
    {
        VAR14 = VAR7 + VAR21;
        if (VAR17->VAR38 == VAR39 && VAR14 < VAR17->VAR40)
            VAR9 = 0;
        if (VAR9)
            FUN7(VAR20, VAR13, VAR14, 0, 0, VAR41);
    }
    if (VAR2->VAR42 && VAR17->VAR38 != VAR39)
    {
        if (VAR14 < VAR2->VAR43)
            return VAR18;
        if (!VAR20->VAR42)
        {
            FUN3(VAR2->VAR28, VAR29, "");
            VAR2->VAR42 = 0;
        }
        if (VAR9)
            VAR2->VAR42 = 0;
    }
    VAR18 = FUN8(VAR2, &VAR4, VAR5, (VAR25 & 0x06) >> 1, &VAR23, &VAR26);
    if (VAR18)
        goto VAR44;
    if (!VAR8)
        VAR8 = VAR17->VAR45 * VAR26 / VAR2->VAR46;
    if (VAR7 != (VAR37)-1 && (VAR21 >= 0 || VAR7 >= -VAR21))
        VAR17->VAR40 = FUN9(VAR17->VAR40, VAR14 + VAR8);
    for (VAR24 = 0; VAR24 < VAR26; VAR24++)
    {
        int64_t VAR47 = VAR8 * (VAR24 + 1) / VAR26 - VAR8 * VAR24 / VAR26;
        if (VAR23[VAR24] > VAR5)
        {
            FUN3(VAR2->VAR28, VAR29, "");
            break;
        }
        if ((VAR20->VAR48->VAR49 == VAR50 || VAR20->VAR48->VAR49 == VAR51 || VAR20->VAR48->VAR49 == VAR52 || VAR20->VAR48->VAR49 == VAR53) && VAR20->VAR48->VAR54 && VAR17->VAR55.VAR56)
        {
            VAR18 = FUN10(VAR2, VAR17, VAR20, VAR4, VAR5, VAR14, VAR6);
            if (VAR18)
                goto VAR44;
        }
        else
        {
            VAR18 = FUN11(VAR2, VAR17, VAR20, VAR4, VAR23[VAR24], VAR14, VAR47, VAR6, !VAR24 ? VAR9 : 0, VAR10, VAR11, VAR12);
            if (VAR18)
                goto VAR44;
        }
        if (VAR14 != VAR15)
            VAR14 = VAR47 ? VAR14 + VAR47 : VAR15;
        VAR4 += VAR23[VAR24];
        VAR5 -= VAR23[VAR24];
    }
VAR44:
    FUN12(VAR23);
    return VAR18;
}