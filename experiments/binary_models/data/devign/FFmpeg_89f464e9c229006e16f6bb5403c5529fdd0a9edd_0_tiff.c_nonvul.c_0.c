static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *const VAR8 = VAR2->VAR9;
    VAR10 *const VAR11 = VAR3;
    ThreadFrame VAR12 = {.VAR13 = VAR3};
    unsigned VAR14;
    int VAR15, VAR16, VAR17, VAR18;
    int VAR19, VAR20, VAR21, VAR22;
    unsigned VAR23, VAR24;
    VAR25 *VAR26;
    GetByteContext VAR27;
    GetByteContext VAR28;
    FUN2(&VAR8->VAR29, VAR6->VAR3, VAR6->VAR30);
    if ((VAR16 = FUN3(&VAR8->VAR29, &VAR15, &VAR14)))
    {
        FUN4(VAR2, VAR31, "");
        return VAR16;
    }
    else if (VAR14 >= VAR32 - 14 || VAR6->VAR30 < VAR14 + 14)
    {
        FUN4(VAR2, VAR31, "");
        return VAR33;
    }
    VAR8->VAR15 = VAR15;
    VAR8->VAR34 = VAR8->VAR35 = 1;
    VAR8->VAR36 = VAR37;
    VAR8->VAR38 = VAR39;
    VAR8->VAR40 = 0;
    FUN5(VAR8);
    VAR8->VAR41 = VAR8->VAR42 = 0;
    FUN6(&VAR8->VAR29, VAR14, VAR43);
    VAR21 = FUN7(&VAR8->VAR29, VAR15);
    if (FUN8(&VAR8->VAR29) < VAR21 * 12)
        return VAR33;
    for (VAR19 = 0; VAR19 < VAR21; VAR19++)
    {
        if ((VAR16 = FUN9(VAR8, VAR11)) < 0)
            return VAR16;
    }
    for (VAR19 = 0; VAR19 < VAR8->VAR44; VAR19++)
    {
        const char *VAR45 = FUN10(VAR8->VAR46[VAR19].VAR47);
        if (!VAR45)
        {
            FUN4(VAR2, VAR48, "", VAR8->VAR46[VAR19].VAR47);
            continue;
        }
        if (FUN11(VAR8->VAR46[VAR19].VAR47) != VAR8->VAR46[VAR19].VAR49)
        {
            FUN4(VAR2, VAR48, "", VAR8->VAR46[VAR19].VAR47);
            continue;
        }
        VAR16 = FUN12(FUN13(VAR11), VAR45, VAR8->VAR46[VAR19].VAR50, 0);
        if (VAR16 < 0)
        {
            FUN4(VAR2, VAR31, "", VAR45);
            return VAR16;
        }
    }
    if (!VAR8->VAR42 && !VAR8->VAR51)
    {
        FUN4(VAR2, VAR31, "");
        return VAR33;
    }
    if ((VAR16 = FUN14(VAR8, &VAR12)) < 0)
        return VAR16;
    if (VAR8->VAR52 == 1 && !VAR8->VAR53)
    {
        FUN4(VAR2, VAR48, "");
        VAR8->VAR53 = VAR6->VAR30 - VAR8->VAR51;
    }
    if (VAR8->VAR41)
    {
        if (VAR8->VAR41 >= (unsigned)VAR6->VAR30)
            return VAR33;
        FUN2(&VAR27, VAR6->VAR3 + VAR8->VAR41, VAR6->VAR30 - VAR8->VAR41);
    }
    if (VAR8->VAR42)
    {
        if (VAR8->VAR42 >= (unsigned)VAR6->VAR30)
            return VAR33;
        FUN2(&VAR28, VAR6->VAR3 + VAR8->VAR42, VAR6->VAR30 - VAR8->VAR42);
    }
    if (VAR8->VAR54 <= 0 || VAR8->VAR54 % VAR8->VAR55[1])
    {
        FUN4(VAR2, VAR31, "", VAR8->VAR54);
        return VAR33;
    }
    VAR18 = VAR8->VAR56 ? VAR8->VAR34 : 1;
    for (VAR17 = 0; VAR17 < VAR18; VAR17++)
    {
        VAR22 = VAR11->VAR57[VAR17];
        VAR26 = VAR11->VAR3[VAR17];
        for (VAR19 = 0; VAR19 < VAR8->VAR58; VAR19 += VAR8->VAR54)
        {
            if (VAR8->VAR41)
                VAR24 = FUN15(&VAR27, VAR8->VAR59, VAR15);
            else
                VAR24 = VAR8->VAR53;
            if (VAR8->VAR42)
                VAR23 = FUN15(&VAR28, VAR8->VAR60, VAR15);
            else
                VAR23 = VAR8->VAR51;
            if (VAR23 > VAR6->VAR30 || VAR24 > VAR6->VAR30 - VAR23)
            {
                FUN4(VAR2, VAR31, "");
                return VAR33;
            }
            if ((VAR16 = FUN16(VAR8, VAR11, VAR26, VAR22, VAR6->VAR3 + VAR23, VAR24, VAR19, FUN17(VAR8->VAR54, VAR8->VAR58 - VAR19))) < 0)
            {
                if (VAR2->VAR61 & VAR62)
                    return VAR16;
                break;
            }
            VAR26 += VAR8->VAR54 * VAR22;
        }
        if (VAR8->VAR63 == 2)
        {
            if (VAR8->VAR36 == VAR64)
            {
                FUN4(VAR8->VAR2, VAR31, "");
                return VAR65;
            }
            VAR26 = VAR11->VAR3[VAR17];
            VAR23 = VAR8->VAR35 >> 3;
            if (VAR8->VAR56)
                VAR23 = FUN18(VAR23 / VAR8->VAR34, 1);
            VAR24 = VAR8->VAR66 * VAR23;
            if (VAR8->VAR2->VAR67 == VAR68 || VAR8->VAR2->VAR67 == VAR69 || VAR8->VAR2->VAR67 == VAR70 || VAR8->VAR2->VAR67 == VAR71 || VAR8->VAR2->VAR67 == VAR72 || VAR8->VAR2->VAR67 == VAR73)
            {
                for (VAR19 = 0; VAR19 < VAR8->VAR58; VAR19++)
                {
                    for (VAR20 = VAR23; VAR20 < VAR24; VAR20 += 2)
                        FUN19(VAR26 + VAR20, FUN20(VAR26 + VAR20) + FUN20(VAR26 + VAR20 - VAR23));
                    VAR26 += VAR22;
                }
            }
            else if (VAR8->VAR2->VAR67 == VAR74 || VAR8->VAR2->VAR67 == VAR75 || VAR8->VAR2->VAR67 == VAR76 || VAR8->VAR2->VAR67 == VAR77 || VAR8->VAR2->VAR67 == VAR78 || VAR8->VAR2->VAR67 == VAR79)
            {
                for (VAR19 = 0; VAR19 < VAR8->VAR58; VAR19++)
                {
                    for (VAR20 = VAR23; VAR20 < VAR24; VAR20 += 2)
                        FUN21(VAR26 + VAR20, FUN22(VAR26 + VAR20) + FUN22(VAR26 + VAR20 - VAR23));
                    VAR26 += VAR22;
                }
            }
            else
            {
                for (VAR19 = 0; VAR19 < VAR8->VAR58; VAR19++)
                {
                    for (VAR20 = VAR23; VAR20 < VAR24; VAR20++)
                        VAR26[VAR20] += VAR26[VAR20 - VAR23];
                    VAR26 += VAR22;
                }
            }
        }
        if (VAR8->VAR36 == VAR80)
        {
            VAR26 = VAR11->VAR3[VAR17];
            for (VAR19 = 0; VAR19 < VAR8->VAR58; VAR19++)
            {
                for (VAR20 = 0; VAR20 < VAR22; VAR20++)
                    VAR26[VAR20] = (VAR8->VAR2->VAR67 == VAR81 ? (1 << VAR8->VAR35) - 1 : 255) - VAR26[VAR20];
                VAR26 += VAR22;
            }
        }
    }
    if (VAR8->VAR56 && VAR8->VAR34 > 2)
    {
        FUN23(VAR25 *, VAR11->VAR3[0], VAR11->VAR3[2]);
        FUN23(int, VAR11->VAR57[0], VAR11->VAR57[2]);
        FUN23(VAR25 *, VAR11->VAR3[0], VAR11->VAR3[1]);
        FUN23(int, VAR11->VAR57[0], VAR11->VAR57[1]);
    }
    *VAR4 = 1;
    return VAR6->VAR30;
}