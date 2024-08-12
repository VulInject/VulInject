static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, int VAR6, VAR4 *VAR7, unsigned VAR8, int *VAR9, int VAR10)
{
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = &VAR12->VAR15;
    FUN2(16, VAR16, VAR17)
    [VAR18 << 8], *VAR19;
    int VAR20, VAR21;
    PutBitContext VAR22;
    VAR19 = VAR17;
    for (VAR20 = 0; VAR20 < VAR3; VAR20++)
    {
        FUN3(VAR15, VAR5, VAR6, VAR19 + (0 << 6));
        FUN3(VAR15, VAR5 + 8 * VAR6, VAR6, VAR19 + ((2 - VAR10) << 6));
        if (!VAR10)
        {
            FUN3(VAR15, VAR5 + 16, VAR6, VAR19 + (1 << 6));
            FUN3(VAR15, VAR5 + 16 + 8 * VAR6, VAR6, VAR19 + (3 << 6));
        }
        VAR19 += (256 >> VAR10);
        VAR5 += (32 >> VAR10);
    }
    VAR21 = VAR3 << (2 - VAR10);
    FUN4(&VAR22, VAR7, VAR8 << 3);
    FUN5(&VAR22, VAR17, VAR21, VAR9);
    FUN6(VAR2, &VAR22, VAR17, VAR21, VAR9);
    FUN7(&VAR22);
    return FUN8(&VAR22) - VAR22.VAR7;
}