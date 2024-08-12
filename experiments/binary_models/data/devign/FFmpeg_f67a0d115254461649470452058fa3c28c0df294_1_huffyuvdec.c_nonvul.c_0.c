static int FUN1(VAR1 *VAR2)
{
    GetBitContext VAR3;
    int VAR4;
    int VAR5;
    FUN2(&VAR3, VAR6, VAR7 * 8);
    if (FUN3(VAR2->VAR8[0], &VAR3) < 0)
        return -1;
    FUN2(&VAR3, VAR9, VAR10 * 8);
    if (FUN3(VAR2->VAR8[1], &VAR3) < 0)
        return -1;
    for (VAR4 = 0; VAR4 < 256; VAR4++)
        VAR2->VAR11[0][VAR4] = VAR12[VAR4];
    for (VAR4 = 0; VAR4 < 256; VAR4++)
        VAR2->VAR11[1][VAR4] = VAR13[VAR4];
    if (VAR2->VAR14 >= 24)
    {
        memcpy(VAR2->VAR11[1], VAR2->VAR11[0], 256 * sizeof(VAR15));
        memcpy(VAR2->VAR8[1], VAR2->VAR8[0], 256 * sizeof(VAR16));
    }
    memcpy(VAR2->VAR11[2], VAR2->VAR11[1], 256 * sizeof(VAR15));
    memcpy(VAR2->VAR8[2], VAR2->VAR8[1], 256 * sizeof(VAR16));
    for (VAR4 = 0; VAR4 < 3; VAR4++)
    {
        FUN4(&VAR2->VAR17[VAR4]);
        if ((VAR5 = FUN5(&VAR2->VAR17[VAR4], VAR18, 256, VAR2->VAR8[VAR4], 1, 1, VAR2->VAR11[VAR4], 4, 4, 0)) < 0)
            return VAR5;
    }
    FUN6(VAR2);
    return 0;
}