int FUN1(VAR1 *VAR2, enum PixelFormat VAR3, unsigned VAR4)
{
    const VAR5 *VAR6 = &VAR7[VAR3];
    const VAR8 *VAR9;
    unsigned VAR10, VAR11 = 0;
    int VAR12[VAR13] = {0};
    if (!VAR6->VAR14)
        return FUN2(VAR15);
    if (VAR6->VAR4 & ~(VAR16 | VAR17))
        return FUN2(VAR18);
    for (VAR10 = 0; VAR10 < VAR6->VAR19; VAR10++)
    {
        VAR9 = &VAR6->VAR20[VAR10];
        if (VAR9->VAR21 != 8 - 1)
            return FUN2(VAR18);
        if (VAR9->VAR22 >= VAR13)
            return FUN2(VAR18);
        if (VAR12[VAR9->VAR22] != 0 && VAR12[VAR9->VAR22] != VAR9->VAR23 + 1)
            return FUN2(VAR18);
        VAR12[VAR9->VAR22] = VAR9->VAR23 + 1;
        if (VAR12[VAR9->VAR22] >= 8)
            return FUN2(VAR18);
        VAR11 = FUN3(VAR11, VAR9->VAR22 + 1);
    }
    if ((VAR6->VAR24 || VAR6->VAR25) && VAR11 < 3)
        return FUN2(VAR18);
    memset(VAR2, 0, sizeof(*VAR2));
    VAR2->VAR6 = VAR6;
    VAR2->VAR3 = VAR3;
    VAR2->VAR11 = VAR11;
    memcpy(VAR2->VAR12, VAR12, sizeof(VAR2->VAR12));
    if (VAR11 >= 3 && !(VAR6->VAR4 & VAR17))
    {
        VAR2->VAR26[1] = VAR2->VAR26[2] = VAR2->VAR27 = VAR6->VAR24;
        VAR2->VAR28[1] = VAR2->VAR28[2] = VAR2->VAR29 = VAR6->VAR25;
    }
    for (VAR10 = 0; VAR10 < ((VAR6->VAR19 - 1) | 1); VAR10++)
        VAR2->VAR30[VAR6->VAR20[VAR10].VAR22] |= 1 << (VAR6->VAR20[VAR10].VAR31 - 1);
    return 0;
}