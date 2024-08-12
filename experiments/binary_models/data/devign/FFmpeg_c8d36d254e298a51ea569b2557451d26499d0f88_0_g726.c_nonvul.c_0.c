static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    GetBitContext VAR16;
    int VAR17, VAR18;
    VAR17 = VAR9 * 8 / VAR12->VAR19;
    VAR18 = VAR17 * FUN2(VAR2->VAR20);
    if (*VAR4 < VAR18)
    {
        FUN3(VAR2, VAR21, "");
        return FUN4(VAR22);
    }
    FUN5(&VAR16, VAR8, VAR9 * 8);
    while (VAR17--)
        *VAR15++ = FUN6(VAR12, FUN7(&VAR16, VAR12->VAR19));
    if (FUN8(&VAR16) > 0)
        FUN3(VAR2, VAR21, "");
    *VAR4 = VAR18;
    return VAR9;
}