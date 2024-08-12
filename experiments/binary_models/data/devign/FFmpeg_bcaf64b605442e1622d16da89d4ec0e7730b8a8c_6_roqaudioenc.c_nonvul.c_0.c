static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    int VAR8, VAR9, VAR10, VAR11;
    const VAR12 *VAR13 = VAR6 ? (const VAR12 *)VAR6->VAR14[0] : NULL;
    VAR15 *VAR16;
    VAR17 *VAR18 = VAR2->VAR19;
    VAR9 = (VAR2->VAR20 == 2);
    if (!VAR13 && VAR18->VAR21 >= 8)
        return 0;
    if (VAR13 && VAR18->VAR21 < 8)
    {
        memcpy(&VAR18->VAR22[VAR18->VAR23 * VAR2->VAR20], VAR13, VAR2->VAR24 * VAR2->VAR20 * sizeof(*VAR13));
        VAR18->VAR23 += VAR2->VAR24;
        if (VAR18->VAR21 == 0)
            VAR18->VAR25 = VAR6->VAR26;
        if (VAR18->VAR21 < 7)
        {
            VAR18->VAR21++;
            return 0;
        }
    }
    if (VAR18->VAR21 < 8)
    {
        VAR13 = VAR18->VAR22;
    }
    if (VAR9)
    {
        VAR18->VAR27[0] &= 0xFF00;
        VAR18->VAR27[1] &= 0xFF00;
    }
    if (VAR18->VAR21 == 7)
        VAR10 = VAR2->VAR20 * VAR18->VAR23;
    else
        VAR10 = VAR2->VAR20 * VAR2->VAR24;
    if ((VAR11 = FUN2(VAR2, VAR4, VAR28 + VAR10)) < 0)
        return VAR11;
    VAR16 = VAR4->VAR14;
    FUN3(&VAR16, VAR9 ? 0x21 : 0x20);
    FUN3(&VAR16, 0x10);
    FUN4(&VAR16, VAR10);
    if (VAR9)
    {
        FUN3(&VAR16, (VAR18->VAR27[1]) >> 8);
        FUN3(&VAR16, (VAR18->VAR27[0]) >> 8);
    }
    else
        FUN5(&VAR16, VAR18->VAR27[0]);
    for (VAR8 = 0; VAR8 < VAR10; VAR8++)
        *VAR16++ = FUN6(&VAR18->VAR27[VAR8 & 1], *VAR13++);
    VAR4->VAR26 = VAR18->VAR21 <= 7 ? VAR18->VAR25 : VAR6->VAR26;
    VAR4->VAR29 = VAR10 / VAR2->VAR20;
    VAR18->VAR21++;
    if (!VAR13)
        VAR18->VAR21 = FUN7(VAR18->VAR21, 8);
    *VAR7 = 1;
    return 0;
}