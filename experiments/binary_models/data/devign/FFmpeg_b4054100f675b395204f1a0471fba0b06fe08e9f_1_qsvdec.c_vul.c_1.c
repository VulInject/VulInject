static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    mfxVideoParam VAR7 = {{0}};
    mfxBitstream VAR8 = {{{0}}};
    int VAR9;
    enum AVPixelFormat VAR10[3] = {VAR11, VAR12, VAR13};
    VAR9 = FUN2(VAR2, VAR10);
    if (VAR9 < 0)
        return VAR9;
    VAR2->VAR14 = VAR9;
    VAR4->VAR15 = VAR16;
    if (VAR2->VAR17)
    {
        VAR18 *VAR19 = VAR2->VAR17;
        VAR4->VAR20 = VAR19->VAR20;
        VAR4->VAR15 = VAR19->VAR15;
        VAR4->VAR21 = VAR19->VAR21;
        VAR4->VAR22 = VAR19->VAR22;
    }
    if (!VAR4->VAR20)
    {
        if (!VAR4->VAR23.VAR20)
        {
            VAR9 = FUN3(VAR2, &VAR4->VAR23, VAR4->VAR24);
            if (VAR9 < 0)
                return VAR9;
        }
        VAR4->VAR20 = VAR4->VAR23.VAR20;
    }
    if (VAR6->VAR25)
    {
        VAR8.VAR26 = VAR6->VAR27;
        VAR8.VAR28 = VAR6->VAR25;
        VAR8.VAR29 = VAR8.VAR28;
        VAR8.VAR30 = VAR6->VAR31;
    }
    else
        return VAR32;
    VAR9 = FUN4(VAR2->VAR33);
    if (VAR9 < 0)
    {
        FUN5(VAR2, VAR34, "", VAR2->VAR33);
        return VAR9;
    }
    VAR7.VAR35.VAR36 = VAR9;
    VAR9 = FUN6(VAR4->VAR20, &VAR8, &VAR7);
    if (VAR37 == VAR9)
    {
        return VAR6->VAR25;
    }
    else if (VAR9 < 0)
    {
        FUN5(VAR2, VAR34, "", VAR9);
        return FUN7(VAR9);
    }
    VAR7.VAR38 = VAR4->VAR15;
    VAR7.VAR39 = VAR4->VAR40;
    VAR7.VAR41 = VAR4->VAR21;
    VAR7.VAR42 = VAR4->VAR22;
    VAR7.VAR35.VAR43.VAR44 = 8;
    VAR7.VAR35.VAR43.VAR45 = 8;
    VAR9 = FUN8(VAR4->VAR20, &VAR7);
    if (VAR9 < 0)
    {
        if (VAR46 == VAR9)
        {
            FUN5(VAR2, VAR34, "");
        }
        else
        {
            FUN5(VAR2, VAR34, "", VAR9);
        }
        return FUN7(VAR9);
    }
    VAR2->VAR47 = VAR7.VAR35.VAR48;
    VAR2->VAR49 = VAR7.VAR35.VAR50;
    VAR2->VAR51 = VAR7.VAR35.VAR43.VAR52;
    VAR2->VAR53 = VAR7.VAR35.VAR43.VAR54;
    VAR2->VAR55 = VAR7.VAR35.VAR43.VAR56 - VAR7.VAR35.VAR43.VAR57;
    VAR2->VAR58 = VAR7.VAR35.VAR43.VAR59 - VAR7.VAR35.VAR43.VAR60;
    if (!VAR4->VAR61)
    {
        VAR4->VAR61 = FUN9((1 + 16) * (sizeof(VAR62 *) + sizeof(VAR63 *)));
        if (!VAR4->VAR61)
            return FUN10(VAR64);
    }
    if (!VAR4->VAR65)
    {
        VAR4->VAR65 = FUN9(1024 * 16);
        if (!VAR4->VAR65)
            return FUN10(VAR64);
    }
    if (!VAR4->VAR66)
    {
        VAR4->VAR66 = FUN9(sizeof(VAR5) * (1 + 16));
        if (!VAR4->VAR66)
            return FUN10(VAR64);
    }
    VAR4->VAR67 = 1;
    return 0;
}