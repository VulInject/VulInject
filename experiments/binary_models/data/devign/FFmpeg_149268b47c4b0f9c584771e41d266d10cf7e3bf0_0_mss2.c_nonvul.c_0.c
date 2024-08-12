static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = &VAR12->VAR15;
    VAR16 *VAR17 = VAR3;
    GetBitContext VAR18;
    GetByteContext VAR19;
    ArithCoder VAR20;
    int VAR21, VAR22, VAR23, VAR24, VAR25, VAR26;
    struct Rectangle VAR27[VAR28], *VAR29;
    int VAR30 = 0, VAR31, VAR32 = 0, FUN2(VAR33);
    if ((VAR26 = FUN3(&VAR18, VAR8, VAR9)) < 0)
        return VAR26;
    if (VAR21 = FUN4(&VAR18))
        FUN5(&VAR18, 7);
    VAR22 = FUN4(&VAR18);
    VAR23 = VAR21 ? 0 : FUN4(&VAR18);
    VAR24 = FUN4(&VAR18);
    VAR25 = VAR24 && FUN4(&VAR18);
    if (VAR15->VAR34 > 0)
        VAR12->VAR35 = VAR15->VAR34;
    else if (VAR15->VAR34 < 0)
    {
        if (FUN4(&VAR18))
        {
            if (FUN4(&VAR18))
            {
                if (FUN4(&VAR18))
                    VAR12->VAR35 = FUN6(&VAR18, 16);
                else
                    VAR12->VAR35 = FUN6(&VAR18, 12);
            }
            else
                VAR12->VAR35 = FUN6(&VAR18, 8) << 4;
        }
        else
        {
            if (VAR21)
                VAR12->VAR35 = VAR2->VAR36 / 2;
        }
    }
    else
        VAR12->VAR35 = VAR2->VAR36;
    if (VAR15->VAR34 && (VAR12->VAR35 < 1 - VAR25 || VAR12->VAR35 > VAR2->VAR36 - 1))
        return VAR37;
    FUN7(&VAR18);
    VAR8 += FUN8(&VAR18) >> 3;
    VAR9 -= FUN8(&VAR18) >> 3;
    if (VAR9 < 1)
        return VAR37;
    if (VAR25 && (VAR22 || VAR23 || VAR15->VAR34 && VAR12->VAR35))
        return VAR37;
    VAR2->VAR38 = VAR25 ? VAR39 : VAR40;
    if (VAR12->VAR41->VAR42 != VAR2->VAR38)
        FUN9(VAR12->VAR41);
    if (VAR22)
    {
        FUN10(&VAR19, VAR8, VAR9 + VAR43);
        FUN11(&VAR20, &VAR19);
        VAR32 = !FUN12(&VAR20);
        while (FUN12(&VAR20))
        {
            if (VAR30 == VAR28)
                return VAR37;
            VAR29 = &VAR27[VAR30];
            if (!VAR30)
                VAR29->VAR44 = FUN13(&VAR20, VAR2->VAR45);
            else
                VAR29->VAR44 = FUN13(&VAR20, VAR2->VAR45 - VAR27[VAR30 - 1].VAR44) + VAR27[VAR30 - 1].VAR44;
            VAR29->VAR46 = FUN13(&VAR20, VAR2->VAR36);
            VAR29->VAR47 = FUN13(&VAR20, VAR2->VAR45 - VAR29->VAR44) + 1;
            VAR29->VAR48 = FUN13(&VAR20, VAR2->VAR36 - VAR29->VAR46) + 1;
            VAR30++;
        }
        if (VAR32 && VAR30)
        {
            FUN14(VAR2, VAR49, "");
            return VAR37;
        }
        if (VAR32)
        {
            VAR27[0].VAR44 = 0;
            VAR27[0].VAR46 = 0;
            VAR27[0].VAR47 = VAR2->VAR45;
            VAR27[0].VAR48 = VAR2->VAR36;
            VAR30 = 1;
        }
        for (VAR31 = 0; VAR31 < VAR30; VAR31++)
        {
            if (!VAR32 && FUN12(&VAR20))
            {
                FUN14(VAR2, VAR49, "");
                return VAR37;
            }
            if (!VAR31)
            {
                VAR33 = FUN12(&VAR20) - 1;
                if (!VAR33)
                    VAR33 = FUN13(&VAR20, 256);
            }
            VAR27[VAR31].VAR50 = FUN13(&VAR20, 2);
        }
        VAR8 += FUN15(&VAR20);
        VAR9 -= FUN15(&VAR20);
        if (VAR9 < 1)
            return VAR37;
    }
    VAR15->VAR51 = VAR15->VAR52 = 0;
    if (VAR21 && !VAR25)
    {
        if ((VAR31 = FUN16(VAR15, VAR8, VAR9)) < 0)
            return VAR37;
        VAR8 += VAR31;
        VAR9 -= VAR31;
    }
    else if (VAR23)
    {
        VAR8 += 4;
        VAR9 -= 4;
        if (VAR9 < 1)
            return VAR37;
        VAR15->VAR51 = FUN17(VAR8 - 4) - VAR2->VAR45;
        VAR15->VAR52 = FUN17(VAR8 - 2) - VAR2->VAR36;
    }
    if (VAR15->VAR51 < 0 || VAR15->VAR52 < 0)
    {
        FUN18(VAR7 *, VAR15->VAR53, VAR15->VAR54);
        if ((VAR26 = FUN19(VAR2, VAR17, VAR55)) < 0)
            return VAR26;
        if (VAR12->VAR41->VAR3[0])
        {
            FUN20(VAR17->VAR56[0] == VAR12->VAR41->VAR56[0]);
            VAR15->VAR57 = VAR12->VAR41->VAR3[0] + VAR12->VAR41->VAR56[0] * (VAR2->VAR36 - 1);
        }
        else
        {
            FUN14(VAR2, VAR49, "");
            return VAR37;
        }
    }
    else
    {
        if ((VAR26 = FUN21(VAR2, VAR12->VAR41)) < 0)
            return VAR26;
        if ((VAR26 = FUN22(VAR17, VAR12->VAR41)) < 0)
            return VAR26;
        VAR15->VAR57 = NULL;
    }
    VAR15->VAR58 = VAR17->VAR3[0] + VAR17->VAR56[0] * (VAR2->VAR36 - 1);
    VAR15->VAR59 = -VAR17->VAR56[0];
    VAR17->VAR60 = VAR21;
    VAR17->VAR61 = VAR21 ? VAR62 : VAR63;
    if (VAR25)
    {
        FUN10(&VAR19, VAR8, VAR9);
        if (FUN23(&VAR19, (VAR64 *)VAR15->VAR58, VAR15->VAR59 >> 1, VAR21, VAR2->VAR45, VAR2->VAR36))
            return VAR37;
        VAR9 -= FUN24(&VAR19);
    }
    else
    {
        if (VAR21)
        {
            VAR15->VAR65 = 0;
            FUN25(&VAR12->VAR66[0]);
            if (VAR15->VAR34)
                FUN25(&VAR12->VAR66[1]);
        }
        if (VAR24)
        {
            if ((VAR26 = FUN3(&VAR18, VAR8, VAR9)) < 0)
                return VAR26;
            if (VAR26 = FUN26(&VAR18, VAR15->VAR53, VAR15->VAR67, VAR15->VAR58, VAR15->VAR59, VAR15->VAR68, VAR21, VAR12->VAR35, 0, VAR2->VAR45, VAR2->VAR36))
                return VAR26;
            FUN7(&VAR18);
            if (VAR15->VAR34)
                if (VAR26 = FUN26(&VAR18, VAR15->VAR53, VAR15->VAR67, VAR15->VAR58, VAR15->VAR59, VAR15->VAR68, VAR21, VAR12->VAR35, 1, VAR2->VAR45, VAR2->VAR36))
                    return VAR26;
            FUN7(&VAR18);
            VAR8 += FUN8(&VAR18) >> 3;
            VAR9 -= FUN8(&VAR18) >> 3;
        }
        else if (!VAR32 || VAR33 != -1)
        {
            if (VAR15->VAR65)
                return VAR37;
            FUN10(&VAR19, VAR8, VAR9 + VAR43);
            FUN11(&VAR20, &VAR19);
            VAR15->VAR21 = VAR21;
            if (VAR15->VAR65 = FUN27(&VAR12->VAR66[0], &VAR20, 0, 0, VAR2->VAR45, VAR12->VAR35))
                return VAR37;
            VAR8 += FUN15(&VAR20);
            VAR9 -= FUN15(&VAR20);
            if (VAR15->VAR34)
            {
                if (VAR9 < 1)
                    return VAR37;
                FUN10(&VAR19, VAR8, VAR9 + VAR43);
                FUN11(&VAR20, &VAR19);
                if (VAR15->VAR65 = FUN27(&VAR12->VAR66[1], &VAR20, 0, VAR12->VAR35, VAR2->VAR45, VAR2->VAR36 - VAR12->VAR35))
                    return VAR37;
                VAR8 += FUN15(&VAR20);
                VAR9 -= FUN15(&VAR20);
            }
        }
        else
            memset(VAR15->VAR53, 0, VAR15->VAR67 * VAR2->VAR36);
    }
    if (VAR22)
    {
        for (VAR31 = 0; VAR31 < VAR30; VAR31++)
        {
            int VAR44 = VAR27[VAR31].VAR44;
            int VAR46 = VAR27[VAR31].VAR46;
            int VAR47 = VAR27[VAR31].VAR47;
            int VAR48 = VAR27[VAR31].VAR48;
            if (VAR27[VAR31].VAR50)
            {
                int VAR69;
                if (VAR9 < 4 || !(VAR69 = FUN28(VAR8)))
                    return VAR37;
                if (VAR26 = FUN29(VAR2, VAR8 + 3, VAR9 - 3, VAR44, VAR46, VAR47, VAR48, VAR33))
                    return VAR26;
                VAR8 += VAR69 + 3;
                VAR9 -= VAR69 + 3;
            }
            else
            {
                VAR7 *VAR70 = VAR15->VAR58 + VAR46 * VAR15->VAR59 + VAR44 * 3;
                if (VAR33 != -1)
                {
                    VAR12->VAR71.FUN30(VAR70, VAR15->VAR59, VAR33, VAR15->VAR53 + VAR46 * VAR15->VAR67 + VAR44, VAR15->VAR67, VAR47, VAR48);
                }
                else
                {
                    do
                    {
                        memset(VAR70, 0x80, VAR47 * 3);
                        VAR70 += VAR15->VAR59;
                    } while (--VAR48);
                }
            }
        }
    }
    if (VAR9)
        FUN14(VAR2, VAR72, "");
    if (VAR15->VAR51 < 0 || VAR15->VAR52 < 0)
    {
        FUN9(VAR12->VAR41);
        VAR26 = FUN22(VAR12->VAR41, VAR17);
        if (VAR26 < 0)
            return VAR26;
    }
    *VAR4 = 1;
    return VAR6->VAR10;
}