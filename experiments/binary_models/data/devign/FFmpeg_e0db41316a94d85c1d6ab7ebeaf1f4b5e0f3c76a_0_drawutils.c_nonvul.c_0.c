int FUN1(VAR1 *VAR2, enum AVPixelFormat VAR3, unsigned VAR4)
{
    const VAR5 *VAR6 = FUN2(VAR3);
    const VAR7 *VAR8;
    unsigned VAR9, VAR10 = 0;
    int VAR11[VAR12] = {0};
    if (!VAR6 || !VAR6->VAR13)
        return FUN3(VAR14);
    if (VAR6->VAR4 & ~(VAR15 | VAR16 | VAR17 | VAR18))
        return FUN3(VAR19);
    for (VAR9 = 0; VAR9 < VAR6->VAR20; VAR9++)
    {
        VAR8 = &VAR6->VAR21[VAR9];
        if (VAR8->VAR22 != 8 - 1)
            return FUN3(VAR19);
        if (VAR8->VAR23 >= VAR12)
            return FUN3(VAR19);
        if (VAR11[VAR8->VAR23] != 0 && VAR11[VAR8->VAR23] != VAR8->VAR24 + 1)
            return FUN3(VAR19);
        VAR11[VAR8->VAR23] = VAR8->VAR24 + 1;
        if (VAR11[VAR8->VAR23] >= 8)
            return FUN3(VAR19);
        VAR10 = FUN4(VAR10, VAR8->VAR23 + 1);
    }
    if ((VAR6->VAR25 || VAR6->VAR26) && VAR10 < 3)
        return FUN3(VAR19);
    memset(VAR2, 0, sizeof(*VAR2));
    VAR2->VAR6 = VAR6;
    VAR2->VAR3 = VAR3;
    VAR2->VAR10 = VAR10;
    memcpy(VAR2->VAR11, VAR11, sizeof(VAR2->VAR11));
    VAR2->VAR27[1] = VAR2->VAR27[2] = VAR2->VAR28 = VAR6->VAR25;
    VAR2->VAR29[1] = VAR2->VAR29[2] = VAR2->VAR30 = VAR6->VAR26;
    for (VAR9 = 0; VAR9 < ((VAR6->VAR20 - 1) | 1); VAR9++)
        VAR2->VAR31[VAR6->VAR21[VAR9].VAR23] |= 1 << (VAR6->VAR21[VAR9].VAR32 - 1);
    return 0;
}