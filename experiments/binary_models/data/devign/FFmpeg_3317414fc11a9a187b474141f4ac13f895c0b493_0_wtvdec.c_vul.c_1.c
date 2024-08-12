static VAR1 *FUN1(int VAR2, uint64_t VAR3, int VAR4, VAR5 *VAR6)
{
    VAR1 *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    if (FUN2(VAR6->VAR7, (VAR12)VAR2 << VAR13, VAR14) < 0)
        return NULL;
    VAR9 = FUN3(sizeof(VAR8));
    if (!VAR9)
        return NULL;
    if (VAR4 == 0)
    {
        VAR9->VAR15 = FUN4(sizeof(VAR16));
        if (!VAR9->VAR15)
        {
            FUN5(VAR9);
            return NULL;
        }
        VAR9->VAR15[0] = VAR2;
        VAR9->VAR17 = 1;
    }
    else if (VAR4 == 1)
    {
        VAR9->VAR15 = FUN4(VAR18);
        if (!VAR9->VAR15)
        {
            FUN5(VAR9);
            return NULL;
        }
        VAR9->VAR17 = FUN6(VAR6->VAR7, VAR9->VAR15, VAR18 / 4);
    }
    else if (VAR4 == 2)
    {
        uint32_t VAR19[VAR18 / 4];
        int VAR20 = FUN6(VAR6->VAR7, VAR19, VAR18 / 4);
        int VAR21;
        VAR9->VAR15 = FUN4(VAR20 << VAR13);
        if (!VAR9->VAR15)
        {
            FUN5(VAR9);
            return NULL;
        }
        VAR9->VAR17 = 0;
        for (VAR21 = 0; VAR21 < VAR20; VAR21++)
        {
            if (FUN2(VAR6->VAR7, (VAR12)VAR19[VAR21] << VAR13, VAR14) < 0)
                break;
            VAR9->VAR17 += FUN6(VAR6->VAR7, VAR9->VAR15 + VAR21 * VAR18 / 4, VAR18 / 4);
        }
    }
    else
    {
        FUN7(VAR6, VAR22, "", VAR4);
        FUN5(VAR9);
        return NULL;
    }
    VAR9->VAR23 = VAR3 & (1ULL << 63) ? VAR13 : VAR24;
    if (!VAR9->VAR17)
    {
        FUN5(VAR9->VAR15);
        FUN5(VAR9);
        return NULL;
    }
    if (VAR9->VAR15[VAR9->VAR17 - 1] << VAR13 > FUN8(VAR6->VAR7))
        FUN7(VAR6, VAR25, "");
    VAR3 &= 0xFFFFFFFFFFFF;
    if (VAR3 > ((VAR12)VAR9->VAR17 << VAR9->VAR23))
    {
        FUN7(VAR6, VAR25, "" VAR26 "" VAR26 "", VAR3, (VAR12)VAR9->VAR17 << VAR9->VAR23);
        VAR3 = (VAR12)VAR9->VAR17 << VAR9->VAR23;
    }
    VAR9->VAR3 = VAR3;
    VAR9->VAR27 = 0;
    if (FUN2(VAR6->VAR7, (VAR12)VAR9->VAR15[0] << VAR13, VAR14) < 0)
    {
        FUN5(VAR9->VAR15);
        FUN5(VAR9);
        return NULL;
    }
    VAR9->VAR28 = VAR6->VAR7;
    VAR11 = FUN4(1 << VAR9->VAR23);
    if (!VAR11)
    {
        FUN5(VAR9->VAR15);
        FUN5(VAR9);
        return NULL;
    }
    VAR7 = FUN9(VAR11, 1 << VAR9->VAR23, 0, VAR9, VAR29, NULL, VAR30);
    if (!VAR7)
    {
        FUN5(VAR11);
        FUN5(VAR9->VAR15);
        FUN5(VAR9);
    }
    return VAR7;
}