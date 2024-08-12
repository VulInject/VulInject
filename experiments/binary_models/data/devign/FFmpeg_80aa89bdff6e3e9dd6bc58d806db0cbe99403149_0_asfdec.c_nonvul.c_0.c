static int FUN1(VAR1 *VAR2, int64_t VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    ff_asf_guid VAR13;
    enum AVMediaType VAR14;
    int VAR15, VAR16;
    unsigned int VAR17;
    int64_t VAR18, VAR19, VAR20;
    int VAR21, VAR22 = 0;
    if (VAR2->VAR23 == VAR24)
    {
        FUN2(VAR2, VAR25, "");
        return FUN3(VAR26);
    }
    VAR18 = FUN4(VAR8);
    VAR10 = FUN5(VAR2, NULL);
    if (!VAR10)
        return FUN3(VAR27);
    FUN6(VAR10, 32, 1, 1000);
    VAR12 = FUN7(sizeof(VAR11));
    if (!VAR12)
        return FUN3(VAR27);
    VAR10->VAR6 = VAR12;
    VAR20 = VAR5->VAR28.VAR29;
    VAR12->VAR30 = 128;
    if (!(VAR5->VAR28.VAR31 & 0x01))
    {
        int64_t VAR32 = FUN8(VAR8);
        if (VAR32 <= 0 || (VAR33)VAR5->VAR28.VAR34 <= 0 || FUN9(VAR32 - (VAR33)VAR5->VAR28.VAR34) < 10000)
            VAR10->VAR35 = VAR5->VAR28.VAR36 / (10000000 / 1000) - VAR20;
    }
    FUN10(VAR8, &VAR13);
    VAR21 = 0;
    if (!FUN11(&VAR13, &VAR37))
    {
        VAR14 = VAR38;
    }
    else if (!FUN11(&VAR13, &VAR39))
    {
        VAR14 = VAR40;
    }
    else if (!FUN11(&VAR13, &VAR41))
    {
        VAR14 = VAR40;
        VAR10->VAR42->VAR43 = VAR44;
    }
    else if (!FUN11(&VAR13, &VAR45))
    {
        VAR14 = VAR46;
    }
    else if (!FUN11(&VAR13, &VAR47))
    {
        VAR21 = 1;
        VAR14 = VAR48;
    }
    else
    {
        return -1;
    }
    FUN10(VAR8, &VAR13);
    FUN12(VAR8, 8);
    VAR15 = FUN13(VAR8);
    FUN13(VAR8);
    VAR10->VAR49 = FUN14(VAR8) & 0x7f;
    VAR5->VAR50[VAR10->VAR49] = VAR2->VAR23 - 1;
    FUN13(VAR8);
    if (VAR21)
    {
        FUN10(VAR8, &VAR13);
        if (!FUN11(&VAR13, &VAR51))
        {
            VAR14 = VAR38;
            VAR22 = 1;
            FUN10(VAR8, &VAR13);
            FUN13(VAR8);
            FUN13(VAR8);
            FUN13(VAR8);
            FUN10(VAR8, &VAR13);
            FUN13(VAR8);
        }
    }
    VAR10->VAR42->VAR52 = VAR14;
    if (VAR14 == VAR38)
    {
        int VAR53 = FUN15(VAR8, VAR10->VAR42, VAR15);
        if (VAR53 < 0)
            return VAR53;
        if (VAR22)
        {
            VAR10->VAR54 = 1;
            VAR10->VAR42->VAR55 = 0;
        }
        if (VAR10->VAR42->VAR43 == VAR56)
        {
            VAR10->VAR57 = VAR58;
        }
        else
        {
            VAR10->VAR57 = VAR59;
        }
        VAR19 = FUN4(VAR8);
        if (VAR3 >= (VAR19 + 8 - VAR18 + 24))
        {
            VAR12->VAR60 = FUN16(VAR8);
            VAR12->VAR61 = FUN14(VAR8);
            VAR12->VAR62 = FUN14(VAR8);
            FUN14(VAR8);
            FUN16(VAR8);
        }
        if (VAR12->VAR60 > 1)
        {
            if (!VAR12->VAR62 || (VAR12->VAR61 / VAR12->VAR62 <= 1) || VAR12->VAR61 % VAR12->VAR62)
                VAR12->VAR60 = 0;
        }
    }
    else if (VAR14 == VAR40 && VAR3 - (FUN4(VAR8) - VAR18 + 24) >= 51)
    {
        FUN13(VAR8);
        FUN13(VAR8);
        FUN16(VAR8);
        FUN14(VAR8);
        VAR16 = FUN13(VAR8);
        VAR10->VAR42->VAR63 = FUN13(VAR8);
        VAR10->VAR42->VAR64 = FUN13(VAR8);
        FUN14(VAR8);
        VAR10->VAR42->VAR65 = FUN14(VAR8);
        VAR17 = FUN13(VAR8);
        FUN12(VAR8, 20);
        if (VAR16 > 40)
        {
            VAR10->VAR42->VAR66 = FUN17(VAR8, VAR16 - 40);
            VAR10->VAR42->VAR67 = FUN7(VAR10->VAR42->VAR66 + VAR68);
            FUN18(VAR8, VAR10->VAR42->VAR67, VAR10->VAR42->VAR66);
        }
        if (VAR10->VAR42->VAR66 && (VAR10->VAR42->VAR65 <= 8))
        {
            int VAR69;
            for (VAR69 = 0; VAR69 < FUN19(VAR10->VAR42->VAR66, VAR70) / 4; VAR69++)
                VAR12->VAR71[VAR69] = FUN20(((VAR72 *)VAR10->VAR42->VAR67)[VAR69]);
            memcpy(VAR12->VAR71, VAR10->VAR42->VAR67, FUN19(VAR10->VAR42->VAR66, VAR70));
            VAR12->VAR73 = 1;
        }
        VAR10->VAR42->VAR55 = VAR17;
        VAR10->VAR42->VAR43 = FUN21(VAR74, VAR17);
        if (VAR17 == FUN22('', '', '', ''))
        {
            VAR10->VAR57 = VAR59;
            VAR10->VAR42->VAR63 = VAR10->VAR42->VAR64 = 0;
            FUN23(&VAR10->VAR42->VAR67);
            VAR10->VAR42->VAR66 = 0;
        }
        if (VAR10->VAR42->VAR43 == VAR75)
            VAR10->VAR57 = VAR76;
    }
    VAR19 = FUN4(VAR8);
    FUN12(VAR8, VAR3 - (VAR19 - VAR18 + 24));
    return 0;
}