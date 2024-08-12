static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    const VAR12 *VAR13, *VAR14 = VAR6->VAR3;
    int VAR15, VAR16, VAR17, VAR18, VAR19;
    int64_t VAR20;
    VAR21 *VAR22;
    VAR2->VAR23 = VAR24;
    VAR13 = VAR6->VAR3 + VAR6->VAR20;
    while (memcmp(VAR14, "", 10) && VAR14 < VAR13 - 10)
        VAR14++;
    if (VAR14 >= VAR13)
    {
        FUN2(VAR2, VAR25, "");
        return VAR26;
    }
    VAR14 += FUN3(VAR14, """);
    if (sscanf(VAR14, ""%VAR27 %VAR27 %VAR27 %VAR27\"", &VAR2->VAR28, &VAR2->VAR29, &VAR15, &VAR16) != 4)
    {
        FUN2(VAR2, VAR25, "");
        return VAR26;
    }
    if ((VAR17 = FUN4(VAR2, VAR2->VAR28, VAR2->VAR29)) < 0)
        return VAR17;
    if ((VAR17 = FUN5(VAR2, VAR11, 0)) < 0)
        return VAR17;
    if (VAR16 <= 0 || VAR16 >= 5)
    {
        FUN2(VAR2, VAR25, "", VAR16);
        return VAR26;
    }
    VAR20 = 1;
    for (VAR18 = 0; VAR18 < VAR16; VAR18++)
        VAR20 *= 94;
    if (VAR15 <= 0 || VAR15 > VAR20)
    {
        FUN2(VAR2, VAR25, "", VAR15);
        return VAR26;
    }
    VAR20 *= 4;
    FUN6(&VAR8->VAR30, &VAR8->VAR31, VAR20);
    if (!VAR8->VAR30)
        return FUN7(VAR32);
    VAR14 += FUN3(VAR14, "") + 1;
    for (VAR18 = 0; VAR18 < VAR15; VAR18++)
    {
        const VAR12 *VAR33;
        int VAR34;
        VAR14 += FUN3(VAR14, """) + 1;
        if (VAR14 + VAR16 > VAR13)
            return VAR26;
        VAR33 = VAR14;
        VAR14 += VAR16;
        VAR14 = strstr(VAR14, "");
        if (VAR14)
        {
            VAR14 += 2;
        }
        else
        {
            return VAR26;
        }
        VAR34 = strcspn(VAR14, "" ");
        if ((VAR17 = FUN8(VAR33, VAR16)) < 0)
            return VAR17;
        VAR8->VAR30[VAR17] = FUN9(VAR14, VAR34);
        VAR14 += FUN3(VAR14, "") + 1;
    }
    for (VAR18 = 0; VAR18 < VAR2->VAR29; VAR18++)
    {
        VAR22 = (VAR21 *)(VAR11->VAR3[0] + VAR18 * VAR11->VAR35[0]);
        VAR14 += FUN3(VAR14, """) + 1;
        for (VAR19 = 0; VAR19 < VAR2->VAR28; VAR19++)
        {
            if (VAR14 + VAR16 > VAR13)
                return VAR26;
            if ((VAR17 = FUN8(VAR14, VAR16)) < 0)
                return VAR17;
            *VAR22++ = VAR8->VAR30[VAR17];
            VAR14 += VAR16;
        }
        VAR14 += FUN3(VAR14, "") + 1;
    }
    VAR11->VAR36 = 1;
    VAR11->VAR37 = VAR38;
    *VAR4 = 1;
    return VAR6->VAR20;
}