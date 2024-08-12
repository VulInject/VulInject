static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int64_t VAR6, uint64_t VAR7, uint64_t VAR8, int VAR9, VAR3 *VAR10, uint64_t VAR11, int VAR12, int64_t VAR13, int64_t VAR14)
{
    uint64_t VAR15 = VAR16;
    VAR17 *VAR18;
    int VAR19 = 0;
    VAR20 *VAR21;
    int16_t VAR22;
    VAR23 *VAR24 = NULL;
    int VAR25, VAR26, VAR27 = 0;
    uint64_t VAR28;
    int VAR29 = 1;
    if ((VAR25 = FUN2(VAR2, VAR4, VAR5, &VAR28)) < 0)
    {
        FUN3(VAR2->VAR30, VAR31, "");
        return VAR25;
    }
    VAR4 += VAR25;
    VAR5 -= VAR25;
    VAR18 = FUN4(VAR2, VAR28);
    if (!VAR18 || !VAR18->VAR32)
    {
        FUN3(VAR2->VAR30, VAR33, "" VAR34 "", VAR28, VAR5);
        return VAR35;
    }
    else if (VAR5 <= 3)
        return 0;
    VAR21 = VAR18->VAR32;
    if (VAR21->VAR36 >= VAR37)
        return VAR19;
    FUN5(VAR8 != VAR16);
    VAR22 = FUN6(FUN7(VAR4), 16);
    VAR4 += 2;
    VAR26 = *VAR4++;
    VAR5 -= 3;
    if (VAR9 == -1)
        VAR9 = VAR26 & 0x80 ? VAR38 : 0;
    if (VAR7 != (VAR39)-1 && (VAR22 >= 0 || VAR7 >= -VAR22))
    {
        VAR15 = VAR7 + VAR22 - VAR18->VAR40;
        if (VAR18->VAR41 == VAR42 && VAR15 < VAR18->VAR43)
            VAR9 = 0;
        if (VAR9)
            FUN8(VAR21, VAR13, VAR15, 0, 0, VAR44);
    }
    if (VAR2->VAR45 && VAR18->VAR41 != VAR42)
    {
        if (VAR15 < VAR2->VAR46)
            return VAR19;
        if (VAR9)
            VAR2->VAR45 = 0;
        else if (!VAR21->VAR45)
        {
            FUN3(VAR2->VAR30, VAR31, "");
            VAR2->VAR45 = 0;
        }
    }
    VAR19 = FUN9(VAR2, &VAR4, &VAR5, (VAR26 & 0x06) >> 1, &VAR24, &VAR27);
    if (VAR19)
        goto VAR47;
    if (VAR18->VAR48.VAR49 == 8000)
    {
        if (VAR21->VAR50->VAR51 == VAR52)
        {
            if (VAR18->VAR48.VAR49 != VAR21->VAR50->VAR53 || !VAR21->VAR50->VAR54)
                VAR29 = 0;
        }
    }
    if (!VAR8 && VAR29)
        VAR8 = VAR18->VAR55 * VAR27 / VAR2->VAR56;
    if (VAR7 != (VAR39)-1 && (VAR22 >= 0 || VAR7 >= -VAR22))
        VAR18->VAR43 = FUN10(VAR18->VAR43, VAR15 + VAR8);
    for (VAR25 = 0; VAR25 < VAR27; VAR25++)
    {
        int64_t VAR57 = VAR8 * (VAR25 + 1) / VAR27 - VAR8 * VAR25 / VAR27;
        if (VAR24[VAR25] > VAR5)
        {
            FUN3(VAR2->VAR30, VAR31, "");
            break;
        }
        if ((VAR21->VAR50->VAR51 == VAR58 || VAR21->VAR50->VAR51 == VAR59 || VAR21->VAR50->VAR51 == VAR60 || VAR21->VAR50->VAR51 == VAR61) && VAR21->VAR50->VAR62 && VAR18->VAR48.VAR63)
        {
            VAR19 = FUN11(VAR2, VAR18, VAR21, VAR4, VAR24[VAR25], VAR15, VAR6);
            if (VAR19)
                goto VAR47;
        }
        else if (VAR21->VAR50->VAR51 == VAR64)
        {
            VAR19 = FUN12(VAR2, VAR18, VAR21, VAR4, VAR24[VAR25], VAR15, VAR57, VAR6);
            if (VAR19)
                goto VAR47;
        }
        else
        {
            VAR19 = FUN13(VAR2, VAR18, VAR21, VAR4, VAR24[VAR25], VAR15, VAR57, VAR6, !VAR25 ? VAR9 : 0, VAR10, VAR11, VAR12, VAR14);
            if (VAR19)
                goto VAR47;
        }
        if (VAR15 != VAR16)
            VAR15 = VAR57 ? VAR15 + VAR57 : VAR16;
        VAR4 += VAR24[VAR25];
        VAR5 -= VAR24[VAR25];
    }
VAR47:
    FUN14(VAR24);
    return VAR19;
}