static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    int VAR7 = VAR6->VAR8;
    VAR9 *VAR10 = VAR2->VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;
    GetBitContext VAR18;
    if (VAR7 == 0)
        return 0;
    if (VAR7 < 4)
        return -1;
    FUN2(&VAR18, VAR6->VAR3, VAR7 * 8);
    VAR10->VAR19 = 16 * (FUN3(&VAR18, 4) + 1);
    VAR10->VAR20 = FUN3(&VAR18, 12);
    VAR10->VAR21 = 16 * (FUN3(&VAR18, 4) + 1);
    VAR10->VAR22 = FUN3(&VAR18, 12);
    if (VAR10->VAR23 == 2)
    {
        FUN4(&VAR18, 6);
        if (FUN5(&VAR18))
        {
            FUN6(VAR2, "", 1);
            return VAR24;
        }
        if (FUN5(&VAR18))
        {
            FUN6(VAR2, "", 1);
            return VAR24;
        }
    }
    VAR12 = VAR10->VAR20 / VAR10->VAR19;
    VAR14 = VAR10->VAR20 % VAR10->VAR19;
    VAR13 = VAR10->VAR22 / VAR10->VAR21;
    VAR15 = VAR10->VAR22 % VAR10->VAR21;
    if (VAR10->VAR25 < VAR10->VAR19 * VAR10->VAR21)
    {
        int VAR26 = 3 * VAR10->VAR19 * VAR10->VAR21;
        VAR10->VAR27 = FUN7(VAR10->VAR27, VAR26);
        if (!VAR10->VAR27)
        {
            FUN8(VAR2, VAR28, "");
            return FUN9(VAR29);
        }
        if (VAR10->VAR23 == 2)
        {
            VAR10->VAR30 = FUN10(VAR26);
            if (VAR10->VAR30 <= 0)
            {
                FUN8(VAR2, VAR28, "");
                return -1;
            }
            VAR10->VAR31 = FUN7(VAR10->VAR31, VAR10->VAR30);
            if (!VAR10->VAR31)
            {
                FUN8(VAR2, VAR28, "");
                return FUN9(VAR29);
            }
        }
    }
    VAR10->VAR25 = VAR10->VAR19 * VAR10->VAR21;
    if (VAR2->VAR32 == 0 && VAR2->VAR33 == 0)
    {
        FUN11(VAR2, VAR10->VAR20, VAR10->VAR22);
    }
    if (VAR2->VAR32 != VAR10->VAR20 || VAR2->VAR33 != VAR10->VAR22)
    {
        FUN8(VAR2, VAR28, "");
        FUN8(VAR2, VAR28, "", VAR2->VAR33, VAR2->VAR32, VAR10->VAR22, VAR10->VAR20);
        return VAR34;
    }
    VAR10->VAR35 = (VAR6->VAR36 & VAR37) && (VAR10->VAR23 == 2);
    if (VAR10->VAR35)
    {
        VAR10->VAR38 = FUN7(VAR10->VAR38, VAR6->VAR8);
        memcpy(VAR10->VAR38, VAR6->VAR3, VAR6->VAR8);
    }
    if (VAR10->VAR23 == 2)
        VAR10->VAR39 = FUN7(VAR10->VAR39, (VAR13 + !!VAR15) * (VAR12 + !!VAR14) * sizeof(VAR10->VAR39[0]));
    FUN12(VAR2, "", VAR10->VAR20, VAR10->VAR22, VAR10->VAR19, VAR10->VAR21, VAR12, VAR13, VAR14, VAR15);
    VAR10->VAR40.VAR41 = 3;
    VAR10->VAR40.VAR42 = VAR43 | VAR44 | VAR45;
    if (VAR2->FUN13(VAR2, &VAR10->VAR40) < 0)
    {
        FUN8(VAR2, VAR28, "");
        return -1;
    }
    for (VAR17 = 0; VAR17 < VAR13 + (VAR15 ? 1 : 0); VAR17++)
    {
        int VAR46 = VAR17 * VAR10->VAR21;
        int VAR47 = (VAR17 < VAR13) ? VAR10->VAR21 : VAR15;
        for (VAR16 = 0; VAR16 < VAR12 + (VAR14 ? 1 : 0); VAR16++)
        {
            int VAR48 = VAR16 * VAR10->VAR19;
            int VAR49 = (VAR16 < VAR12) ? VAR10->VAR19 : VAR14;
            int VAR50 = 0;
            int VAR8 = FUN3(&VAR18, 16);
            VAR10->VAR51 = 0;
            VAR10->VAR52 = 0;
            VAR10->VAR53 = 0;
            VAR10->VAR54 = 0;
            VAR10->VAR55 = VAR47;
            if (8 * VAR8 > FUN14(&VAR18))
            {
                VAR2->FUN15(VAR2, &VAR10->VAR40);
                VAR10->VAR40.VAR3[0] = NULL;
                return VAR34;
            }
            if (VAR10->VAR23 == 2 && VAR8)
            {
                FUN4(&VAR18, 3);
                VAR10->VAR51 = FUN3(&VAR18, 2);
                VAR50 = FUN5(&VAR18);
                VAR10->VAR52 = FUN5(&VAR18);
                VAR10->VAR53 = FUN5(&VAR18);
                if (VAR10->VAR51 != 0 && VAR10->VAR51 != 2)
                {
                    FUN8(VAR2, VAR28, "", VAR16, VAR17, VAR10->VAR51);
                    return VAR34;
                }
                if (VAR50)
                {
                    if (!VAR10->VAR56)
                    {
                        FUN8(VAR2, VAR28, "");
                        return VAR34;
                    }
                    VAR10->VAR54 = FUN3(&VAR18, 8);
                    VAR10->VAR55 = FUN3(&VAR18, 8);
                    FUN8(VAR2, VAR57, "", VAR16, VAR17, VAR10->VAR54, VAR10->VAR55);
                    VAR8 -= 2;
                }
                if (VAR10->VAR53)
                    FUN8(VAR2, VAR57, "", VAR16, VAR17);
                if (VAR10->VAR52)
                {
                    int VAR58 = FUN3(&VAR18, 8);
                    int VAR59 = FUN3(&VAR18, 8);
                    FUN8(VAR2, VAR57, "", VAR16, VAR17, VAR58, VAR59);
                    VAR8 -= 2;
                    FUN6(VAR2, "", 1);
                    return VAR24;
                }
                if (!VAR10->VAR39 && (VAR10->VAR52 || VAR10->VAR53))
                {
                    FUN8(VAR2, VAR28, ""
                                                "");
                    return VAR34;
                }
                VAR8--;
            }
            if (VAR50)
            {
                int VAR60;
                int VAR61 = (VAR10->VAR22 - VAR46 - 1) * VAR10->VAR40.VAR62[0];
                for (VAR60 = 0; VAR60 < VAR47; VAR60++)
                    memcpy(VAR10->VAR40.VAR3[0] + VAR61 - VAR60 * VAR10->VAR40.VAR62[0] + VAR48 * 3, VAR10->VAR56 + VAR61 - VAR60 * VAR10->VAR40.VAR62[0] + VAR48 * 3, VAR49 * 3);
            }
            if (VAR8)
            {
                if (FUN16(VAR2, VAR6, &VAR18, VAR8, VAR49, VAR47, VAR48, VAR46, VAR16 + VAR17 * (VAR12 + !!VAR14)))
                    FUN8(VAR2, VAR28, "", VAR16, VAR17);
            }
        }
    }
    if (VAR10->VAR35 && VAR10->VAR23 == 2)
    {
        if (!VAR10->VAR56)
        {
            VAR10->VAR56 = FUN17(VAR10->VAR40.VAR62[0] * VAR2->VAR33);
            if (!VAR10->VAR56)
            {
                FUN8(VAR2, VAR28, "");
                return FUN9(VAR29);
            }
        }
        memcpy(VAR10->VAR56, VAR10->VAR40.VAR3[0], VAR10->VAR40.VAR62[0] * VAR2->VAR33);
    }
    *VAR4 = 1;
    *(VAR63 *)VAR3 = VAR10->VAR40;
    if ((FUN18(&VAR18) / 8) != VAR7)
        FUN8(VAR2, VAR28, "", VAR7, (FUN18(&VAR18) / 8));
    return VAR7;
}