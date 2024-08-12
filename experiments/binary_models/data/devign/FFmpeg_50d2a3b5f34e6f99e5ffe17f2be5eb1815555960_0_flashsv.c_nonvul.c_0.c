static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    int VAR7 = VAR6->VAR8;
    VAR9 *VAR10 = VAR2->VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
    GetBitContext VAR19;
    if (VAR7 == 0)
        return 0;
    if (VAR7 < 4)
        return -1;
    FUN2(&VAR19, VAR6->VAR3, VAR7 * 8);
    VAR10->VAR20 = 16 * (FUN3(&VAR19, 4) + 1);
    VAR10->VAR21 = FUN3(&VAR19, 12);
    VAR10->VAR22 = 16 * (FUN3(&VAR19, 4) + 1);
    VAR10->VAR23 = FUN3(&VAR19, 12);
    if (VAR10->VAR24 == 2)
    {
        FUN4(&VAR19, 6);
        if (FUN5(&VAR19))
        {
            FUN6(VAR2, "");
            return VAR25;
        }
        if (FUN5(&VAR19))
        {
            FUN6(VAR2, "");
            return VAR25;
        }
    }
    VAR12 = VAR10->VAR21 / VAR10->VAR20;
    VAR14 = VAR10->VAR21 % VAR10->VAR20;
    VAR13 = VAR10->VAR23 / VAR10->VAR22;
    VAR15 = VAR10->VAR23 % VAR10->VAR22;
    if (VAR10->VAR26 < VAR10->VAR20 * VAR10->VAR22)
    {
        int VAR27 = 3 * VAR10->VAR20 * VAR10->VAR22, VAR28;
        if ((VAR28 = FUN7(&VAR10->VAR29, VAR27)) < 0)
        {
            VAR10->VAR26 = 0;
            FUN8(VAR2, VAR30, "");
            return VAR28;
        }
        if (VAR10->VAR24 == 2)
        {
            VAR10->VAR31 = FUN9(VAR27);
            if (VAR10->VAR31 <= 0)
            {
                FUN8(VAR2, VAR30, "");
                return -1;
            }
            if ((VAR28 = FUN7(&VAR10->VAR32, VAR10->VAR31)) < 0)
            {
                VAR10->VAR26 = 0;
                FUN8(VAR2, VAR30, "");
                return VAR28;
            }
        }
    }
    VAR10->VAR26 = VAR10->VAR20 * VAR10->VAR22;
    if (VAR2->VAR33 == 0 && VAR2->VAR34 == 0)
    {
        VAR2->VAR33 = VAR10->VAR21;
        VAR2->VAR34 = VAR10->VAR23;
    }
    if (VAR2->VAR33 != VAR10->VAR21 || VAR2->VAR34 != VAR10->VAR23)
    {
        FUN8(VAR2, VAR30, "");
        FUN8(VAR2, VAR30, "", VAR2->VAR34, VAR2->VAR33, VAR10->VAR23, VAR10->VAR21);
        return VAR35;
    }
    VAR10->VAR36 = (VAR6->VAR37 & VAR38) && (VAR10->VAR24 == 2);
    if (VAR10->VAR36)
    {
        int VAR28;
        int VAR39 = (VAR13 + !!VAR15) * (VAR12 + !!VAR14) * sizeof(VAR10->VAR40[0]);
        if ((VAR28 = FUN7(&VAR10->VAR41, VAR6->VAR8)) < 0)
            return VAR28;
        memcpy(VAR10->VAR41, VAR6->VAR3, VAR6->VAR8);
        if ((VAR28 = FUN7(&VAR10->VAR40, VAR39)) < 0)
            return VAR28;
        memset(VAR10->VAR40, 0, VAR39);
    }
    FUN10(VAR2, "", VAR10->VAR21, VAR10->VAR23, VAR10->VAR20, VAR10->VAR22, VAR12, VAR13, VAR14, VAR15);
    if ((VAR18 = FUN11(VAR2, VAR10->VAR42)) < 0)
    {
        FUN8(VAR2, VAR30, "");
        return VAR18;
    }
    for (VAR17 = 0; VAR17 < VAR13 + (VAR15 ? 1 : 0); VAR17++)
    {
        int VAR43 = VAR17 * VAR10->VAR22;
        int VAR44 = (VAR17 < VAR13) ? VAR10->VAR22 : VAR15;
        for (VAR16 = 0; VAR16 < VAR12 + (VAR14 ? 1 : 0); VAR16++)
        {
            int VAR45 = VAR16 * VAR10->VAR20;
            int VAR46 = (VAR16 < VAR12) ? VAR10->VAR20 : VAR14;
            int VAR47 = 0;
            int VAR8 = FUN3(&VAR19, 16);
            VAR10->VAR48 = 0;
            VAR10->VAR49 = 0;
            VAR10->VAR50 = 0;
            VAR10->VAR51 = 0;
            VAR10->VAR52 = VAR44;
            if (8 * VAR8 > FUN12(&VAR19))
            {
                FUN13(VAR10->VAR42);
                return VAR35;
            }
            if (VAR10->VAR24 == 2 && VAR8)
            {
                FUN4(&VAR19, 3);
                VAR10->VAR48 = FUN3(&VAR19, 2);
                VAR47 = FUN5(&VAR19);
                VAR10->VAR49 = FUN5(&VAR19);
                VAR10->VAR50 = FUN5(&VAR19);
                if (VAR10->VAR48 != 0 && VAR10->VAR48 != 2)
                {
                    FUN8(VAR2, VAR30, "", VAR16, VAR17, VAR10->VAR48);
                    return VAR35;
                }
                if (VAR47)
                {
                    if (!VAR10->VAR53)
                    {
                        FUN8(VAR2, VAR30, "");
                        return VAR35;
                    }
                    VAR10->VAR51 = FUN3(&VAR19, 8);
                    VAR10->VAR52 = FUN3(&VAR19, 8);
                    if (VAR10->VAR51 + VAR10->VAR52 > VAR44)
                    {
                        FUN8(VAR2, VAR30, "", VAR10->VAR51, VAR10->VAR52, VAR44);
                        return VAR35;
                    }
                    FUN8(VAR2, VAR54, "", VAR16, VAR17, VAR10->VAR51, VAR10->VAR52);
                    VAR8 -= 2;
                }
                if (VAR10->VAR50)
                    FUN8(VAR2, VAR54, "", VAR16, VAR17);
                if (VAR10->VAR49)
                {
                    int VAR55 = FUN3(&VAR19, 8);
                    int VAR56 = FUN3(&VAR19, 8);
                    FUN8(VAR2, VAR54, "", VAR16, VAR17, VAR55, VAR56);
                    VAR8 -= 2;
                    FUN6(VAR2, "");
                    return VAR25;
                }
                if (!VAR10->VAR40 && (VAR10->VAR49 || VAR10->VAR50))
                {
                    FUN8(VAR2, VAR30, "");
                    return VAR35;
                }
                VAR8--;
            }
            if (VAR47)
            {
                int VAR57;
                int VAR58 = (VAR10->VAR23 - VAR43 - 1) * VAR10->VAR42->VAR59[0];
                for (VAR57 = 0; VAR57 < VAR44; VAR57++)
                {
                    int VAR60 = VAR58 - VAR57 * VAR10->VAR42->VAR59[0] + VAR45 * 3;
                    memcpy(VAR10->VAR42->VAR3[0] + VAR60, VAR10->VAR53 + VAR60, VAR46 * 3);
                }
            }
            if (VAR8)
            {
                if (FUN14(VAR2, VAR6, &VAR19, VAR8, VAR46, VAR44, VAR45, VAR43, VAR16 + VAR17 * (VAR12 + !!VAR14)))
                    FUN8(VAR2, VAR30, "", VAR16, VAR17);
            }
        }
    }
    if (VAR10->VAR36 && VAR10->VAR24 == 2)
    {
        if (!VAR10->VAR53)
        {
            VAR10->VAR53 = FUN15(VAR10->VAR42->VAR59[0] * VAR2->VAR34);
            if (!VAR10->VAR53)
            {
                FUN8(VAR2, VAR30, "");
                return FUN16(VAR61);
            }
        }
        memcpy(VAR10->VAR53, VAR10->VAR42->VAR3[0], VAR10->VAR42->VAR59[0] * VAR2->VAR34);
    }
    if ((VAR18 = FUN17(VAR3, VAR10->VAR42)) < 0)
        return VAR18;
    *VAR4 = 1;
    if ((FUN18(&VAR19) / 8) != VAR7)
        FUN8(VAR2, VAR30, "", VAR7, (FUN18(&VAR19) / 8));
    return VAR7;
}