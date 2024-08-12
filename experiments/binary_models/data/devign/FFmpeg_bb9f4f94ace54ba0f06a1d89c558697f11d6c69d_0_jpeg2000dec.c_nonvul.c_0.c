static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    uint16_t VAR6;
    uint32_t VAR7;
    unsigned VAR8;
    if (FUN2(&VAR2->VAR9) < 8)
        return VAR10;
    VAR2->VAR11 = 0;
    VAR6 = FUN3(&VAR2->VAR9);
    if (VAR6 >= VAR2->VAR12 * VAR2->VAR13)
        return VAR10;
    VAR2->VAR11 = VAR6;
    VAR7 = FUN4(&VAR2->VAR9);
    VAR8 = FUN5(&VAR2->VAR9);
    FUN5(&VAR2->VAR9);
    if (!VAR7)
        VAR7 = FUN2(&VAR2->VAR9) + VAR3 + 2;
    if (VAR7 > FUN2(&VAR2->VAR9) + VAR3 + 2)
    {
        FUN6(VAR2->VAR14, VAR15, "" VAR16 "", VAR7);
        return VAR10;
    }
    FUN7(VAR8 < FUN8(VAR2->VAR17[VAR6].VAR18));
    VAR2->VAR17[VAR6].VAR19 = VAR8;
    VAR5 = VAR2->VAR17[VAR6].VAR18 + VAR8;
    VAR5->VAR20 = VAR6;
    VAR5->VAR21 = VAR2->VAR9.VAR22 + VAR7 - VAR3 - 2;
    if (!VAR8)
    {
        VAR23 *VAR17 = VAR2->VAR17 + VAR2->VAR11;
        memcpy(VAR17->VAR24, VAR2->VAR24, VAR2->VAR25 * sizeof(VAR26));
        memcpy(VAR17->VAR27, VAR2->VAR27, VAR2->VAR25 * sizeof(VAR28));
    }
    return 0;
}