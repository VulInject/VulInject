static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    uint32_t VAR10, VAR11, VAR12;
    uint16_t VAR13, VAR14, VAR15, VAR16;
    int64_t VAR17;
    int VAR18;
    if (VAR9->VAR19)
        return VAR20;
    VAR17 = FUN2(VAR9);
    if (!VAR6->VAR21 && FUN3(VAR9, VAR6->VAR22, VAR23) != VAR23)
        return VAR20;
    if (VAR6->VAR22[0] != 1)
    {
        FUN4(VAR2, VAR24, "");
        return VAR25;
    }
    VAR10 = FUN5(&VAR6->VAR22[2]);
    VAR15 = FUN6(&VAR6->VAR22[14]);
    VAR16 = FUN6(&VAR6->VAR22[16]);
    VAR14 = FUN6(&VAR6->VAR22[20]);
    VAR13 = FUN6(&VAR6->VAR22[22]);
    VAR12 = FUN7(VAR15, 16) * VAR16 * VAR6->VAR22[19] / 8;
    VAR11 = VAR14 + VAR12;
    if (VAR14 > 512)
        return VAR25;
    if (VAR10 < (VAR26)VAR13 + VAR11 + VAR23)
        return VAR25;
    if (VAR6->VAR21 && VAR13)
    {
        if (VAR6->VAR27 == -1)
        {
            VAR28 *VAR29 = FUN8(VAR2, NULL);
            if (!VAR29)
                return FUN9(VAR30);
            VAR29->VAR31->VAR32 = VAR33;
            VAR29->VAR31->VAR34 = 0;
            VAR29->VAR31->VAR35 = VAR36;
            VAR29->VAR31->VAR37 = VAR6->VAR22[1] & 0x10 ? 2 : 1;
            VAR29->VAR31->VAR38 = VAR6->VAR38;
            VAR29->VAR39 = 0;
            VAR6->VAR27 = VAR29->VAR40;
            FUN10(VAR29, 64, 1, VAR6->VAR38);
        }
        VAR18 = FUN11(VAR9, VAR4, VAR13);
        if (VAR18 < 0)
            return VAR18;
        VAR4->VAR41 = VAR6->VAR27;
        VAR4->VAR17 = VAR17;
        VAR4->VAR42 = VAR13;
        VAR6->VAR21 = 0;
    }
    else
    {
        if (VAR6->VAR43 == -1)
        {
            VAR28 *VAR29 = FUN8(VAR2, NULL);
            if (!VAR29)
                return FUN9(VAR30);
            VAR29->VAR31->VAR32 = VAR44;
            VAR29->VAR31->VAR34 = 0;
            VAR29->VAR31->VAR35 = VAR45;
            VAR29->VAR31->VAR15 = VAR15;
            VAR29->VAR31->VAR16 = VAR16;
            VAR29->VAR39 = 0;
            VAR6->VAR43 = VAR29->VAR40;
            if (VAR6->VAR46)
                FUN10(VAR29, 64, VAR6->VAR47.VAR48, VAR6->VAR47.VAR49);
            else
                FUN10(VAR29, 64, 1, VAR6->VAR38);
        }
        if (FUN12(VAR4, VAR11 + VAR23) < 0)
            return FUN9(VAR30);
        memcpy(VAR4->VAR50, VAR6->VAR22, VAR23);
        VAR18 = FUN3(VAR9, VAR4->VAR50 + VAR23, VAR11);
        if (VAR18 < 0)
        {
            FUN13(VAR4);
            return VAR18;
        }
        VAR4->VAR41 = VAR6->VAR43;
        VAR4->VAR51 |= VAR52;
        VAR4->VAR17 = VAR17;
        VAR4->VAR42 = VAR6->VAR46 ? 1 : VAR13 ? VAR13
                                                         : 220;
        VAR6->VAR21 = VAR13;
    }
    if (!VAR6->VAR21)
        FUN14(VAR9, VAR10 - VAR13 - VAR11 - VAR23);
    return VAR18;