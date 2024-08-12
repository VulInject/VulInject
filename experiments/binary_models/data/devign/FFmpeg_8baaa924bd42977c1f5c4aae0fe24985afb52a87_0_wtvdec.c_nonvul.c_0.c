static VAR1 *FUN1(int VAR2, uint64_t VAR3, int VAR4, VAR5 *VAR6)
{
    VAR1 *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    if (FUN2(VAR6->VAR7, VAR2, 0) < 0)
        return NULL;
    VAR9 = FUN3(sizeof(VAR8));
    if (!VAR9)
        return NULL;
    if (VAR4 == 0)
    {
        VAR9->VAR12 = FUN4(sizeof(VAR13));
        if (!VAR9->VAR12)
        {
            FUN5(VAR9);
            return NULL;
        }
        VAR9->VAR12[0] = VAR2;
        VAR9->VAR14 = 1;
    }
    else if (VAR4 == 1)
    {
        VAR9->VAR12 = FUN4(VAR15);
        if (!VAR9->VAR12)
        {
            FUN5(VAR9);
            return NULL;
        }
        VAR9->VAR14 = FUN6(VAR6->VAR7, VAR9->VAR12, VAR15 / 4);
    }
    else if (VAR4 == 2)
    {
        uint32_t VAR16[VAR15 / 4];
        int VAR17 = FUN6(VAR6->VAR7, VAR16, VAR15 / 4);
        int VAR18;
        VAR9->VAR12 = FUN7(VAR17, 1 << VAR19);
        if (!VAR9->VAR12)
        {
            FUN5(VAR9);
            return NULL;
        }
        VAR9->VAR14 = 0;
        for (VAR18 = 0; VAR18 < VAR17; VAR18++)
        {
            if (FUN2(VAR6->VAR7, VAR16[VAR18], 0) < 0)
                break;
            VAR9->VAR14 += FUN6(VAR6->VAR7, VAR9->VAR12 + VAR18 * VAR15 / 4, VAR15 / 4);
        }
    }
    else
    {
        FUN8(VAR6, VAR20, "", VAR4);
        FUN5(VAR9);
        return NULL;
    }
    VAR9->VAR21 = VAR3 & (1ULL << 63) ? VAR19 : VAR22;
    if (!VAR9->VAR14)
    {
        FUN5(VAR9->VAR12);
        FUN5(VAR9);
        return NULL;
    }
    if ((VAR23)VAR9->VAR12[VAR9->VAR14 - 1] << VAR19 > FUN9(VAR6->VAR7))
        FUN8(VAR6, VAR24, "");
    VAR3 &= 0xFFFFFFFFFFFF;
    if (VAR3 > ((VAR23)VAR9->VAR14 << VAR9->VAR21))
    {
        FUN8(VAR6, VAR24, "" VAR25 "" VAR25 "", VAR3, (VAR23)VAR9->VAR14 << VAR9->VAR21);
        VAR3 = (VAR23)VAR9->VAR14 << VAR9->VAR21;
    }
    VAR9->VAR3 = VAR3;
    VAR9->VAR26 = 0;
    if (FUN2(VAR6->VAR7, VAR9->VAR12[0], 0) < 0)
    {
        FUN5(VAR9->VAR12);
        FUN5(VAR9);
        return NULL;
    }
    VAR9->VAR27 = VAR6->VAR7;
    VAR11 = FUN4(1 << VAR9->VAR21);
    if (!VAR11)
    {
        FUN5(VAR9->VAR12);
        FUN5(VAR9);
        return NULL;
    }
    VAR7 = FUN10(VAR11, 1 << VAR9->VAR21, 0, VAR9, VAR28, NULL, VAR29);
    if (!VAR7)
    {
        FUN5(VAR11);
        FUN5(VAR9->VAR12);
        FUN5(VAR9);
    }
    return VAR7;
}