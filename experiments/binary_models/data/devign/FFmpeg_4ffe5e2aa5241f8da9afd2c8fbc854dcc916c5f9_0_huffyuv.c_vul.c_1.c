static int FUN1(VAR1 *VAR2)
{
    GetBitContext VAR3;
    int VAR4;
    FUN2(&VAR3, VAR5, sizeof(VAR5) * 8);
    if (FUN3(VAR2->VAR6[0], &VAR3) < 0)
        return -1;
    FUN2(&VAR3, VAR7, sizeof(VAR7) * 8);
    if (FUN3(VAR2->VAR6[1], &VAR3) < 0)
        return -1;
    for (VAR4 = 0; VAR4 < 256; VAR4++)
        VAR2->VAR8[0][VAR4] = VAR9[VAR4];
    for (VAR4 = 0; VAR4 < 256; VAR4++)
        VAR2->VAR8[1][VAR4] = VAR10[VAR4];
    if (VAR2->VAR11 >= 24)
    {
        memcpy(VAR2->VAR8[1], VAR2->VAR8[0], 256 * sizeof(VAR12));
        memcpy(VAR2->VAR6[1], VAR2->VAR6[0], 256 * sizeof(VAR13));
    }
    memcpy(VAR2->VAR8[2], VAR2->VAR8[1], 256 * sizeof(VAR12));
    memcpy(VAR2->VAR6[2], VAR2->VAR6[1], 256 * sizeof(VAR13));
    for (VAR4 = 0; VAR4 < 3; VAR4++)
    {
        FUN4(&VAR2->VAR14[VAR4]);
        FUN5(&VAR2->VAR14[VAR4], VAR15, 256, VAR2->VAR6[VAR4], 1, 1, VAR2->VAR8[VAR4], 4, 4, 0);
    }
    FUN6(VAR2);
    return 0;
    FUN7(VAR2->VAR16, VAR17, "");
    return -1;
}