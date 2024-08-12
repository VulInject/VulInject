static int FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    int VAR4;
    FUN2(VAR2->VAR5, VAR2->VAR6, (VAR2->VAR7 + 64) * 2 * 21 * 2, VAR8);
    VAR2->VAR9 = VAR2->VAR6 + (VAR2->VAR7 + 64) * 2 * 21;
    FUN2(VAR2->VAR5, VAR2->VAR10.VAR11, (VAR2->VAR7 + 64) * 4 * 16 * 2 * sizeof(VAR12), VAR8)
    VAR2->VAR10.VAR13 = VAR2->VAR10.VAR11;
    VAR2->VAR14 = VAR2->VAR10.VAR11;
    VAR2->VAR15 = VAR2->VAR10.VAR11;
    VAR2->VAR16 = VAR2->VAR10.VAR11 + 16;
    if (VAR2->VAR17)
    {
        FUN2(VAR2->VAR5, VAR2->VAR10.VAR18, VAR19 * sizeof(VAR20), VAR8)
        FUN2(VAR2->VAR5, VAR2->VAR10.VAR21, VAR19 * sizeof(VAR20), VAR8) if (VAR2->VAR5->VAR22) { FUN2(VAR2->VAR5, VAR2->VAR23, 2 * 64 * sizeof(int), VAR8) }
    }
    FUN2(VAR2->VAR5, VAR2->VAR24, 64 * 12 * 2 * sizeof(VAR25), VAR8)
    VAR2->VAR26 = VAR2->VAR24[0];
    for (VAR4 = 0; VAR4 < 12; VAR4++)
    {
        VAR2->VAR27[VAR4] = &VAR2->VAR26[VAR4];
    }
    return 0;
VAR8:
    return -1;
}