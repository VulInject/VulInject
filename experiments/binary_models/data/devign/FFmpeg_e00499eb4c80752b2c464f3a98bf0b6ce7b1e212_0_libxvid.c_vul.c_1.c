static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    int VAR8, VAR9, VAR10, VAR11 = !!VAR4->VAR12;
    struct VAR13 *VAR14 = VAR2->VAR15;
    VAR5 *VAR16 = VAR2->VAR17;
    int VAR18 = (VAR2->VAR19 + 15) / 16;
    int VAR20 = (VAR2->VAR21 + 15) / 16;
    char *VAR22;
    xvid_enc_frame_t VAR23 = {0};
    xvid_enc_stats_t VAR24 = {0};
    if ((VAR10 = FUN2(VAR2, VAR4, VAR18 * VAR20 * VAR25 + VAR26)) < 0)
        return VAR10;
    VAR23.VAR27 = VAR28;
    VAR24.VAR27 = VAR28;
    VAR23.VAR29 = VAR4->VAR12;
    VAR23.VAR30 = VAR4->VAR31;
    if (VAR2->VAR32 != VAR33)
    {
        FUN3(VAR2, VAR34, "");
        return FUN4(VAR35);
    }
    VAR23.VAR36.VAR37 = VAR38;
    for (VAR9 = 0; VAR9 < 4; VAR9++)
    {
        VAR23.VAR36.VAR39[VAR9] = VAR6->VAR12[VAR9];
        VAR23.VAR36.VAR40[VAR9] = VAR6->VAR41[VAR9];
    }
    VAR23.VAR42 = VAR14->VAR42;
    VAR23.VAR43 = VAR14->VAR43;
    VAR23.VAR44 = VAR14->VAR45;
    VAR23.VAR46 = VAR6->VAR47 == VAR48 ? VAR49 : VAR6->VAR47 == VAR50 ? VAR51
                                                                                 : VAR6->VAR47 == VAR52   ? VAR53
                                                                                                                             : VAR54;
    if (VAR2->VAR55.VAR56 < 0 || VAR2->VAR55.VAR56 > 255 || VAR2->VAR55.VAR57 < 0 || VAR2->VAR55.VAR57 > 255)
    {
        FUN3(VAR2, VAR58, "", VAR2->VAR55.VAR56, VAR2->VAR55.VAR57);
        FUN5(&VAR2->VAR55.VAR56, &VAR2->VAR55.VAR57, VAR2->VAR55.VAR56, VAR2->VAR55.VAR57, 255);
    }
    VAR23.VAR59 = VAR60;
    VAR23.VAR61 = VAR2->VAR55.VAR56;
    VAR23.VAR62 = VAR2->VAR55.VAR57;
    if (VAR14->VAR63)
        VAR23.VAR64 = VAR6->VAR65 / VAR66;
    else
        VAR23.VAR64 = 0;
    VAR23.VAR67 = VAR14->VAR68;
    VAR23.VAR69 = VAR14->VAR70;
    VAR8 = FUN6(VAR14->VAR71, VAR72, &VAR23, &VAR24);
    VAR2->VAR73 = NULL;
    if (VAR14->VAR74)
    {
        VAR22 = VAR14->VAR75;
        VAR14->VAR75 = VAR14->VAR74;
        VAR14->VAR74 = VAR22;
        VAR14->VAR74[0] = 0;
        if (VAR14->VAR75[0] != 0)
        {
            VAR2->VAR73 = VAR14->VAR75;
        }
    }
    if (VAR8 > 0)
    {
        *VAR7 = 1;
        VAR16->VAR65 = VAR24.VAR64 * VAR66;
        if (VAR24.VAR46 == VAR51)
            VAR16->VAR47 = VAR50;
        else if (VAR24.VAR46 == VAR53)
            VAR16->VAR47 = VAR52;
        else if (VAR24.VAR46 == VAR76)
            VAR16->VAR47 = VAR77;
        else
            VAR16->VAR47 = VAR48;
        if (VAR23.VAR78 & VAR79)
        {
            VAR16->VAR80 = 1;
            VAR4->VAR81 |= VAR82;
            if (VAR14->VAR83)
                return FUN7(VAR2, VAR4, VAR24.VAR84, VAR8);
        }
        else
            VAR16->VAR80 = 0;
        VAR4->VAR31 = VAR8;
        return 0;
    }
    else
    {
        if (!VAR11)
            FUN8(VAR4);
        if (!VAR8)
            return 0;
        FUN3(VAR2, VAR34, "", VAR8);
        return VAR85;
    }
}