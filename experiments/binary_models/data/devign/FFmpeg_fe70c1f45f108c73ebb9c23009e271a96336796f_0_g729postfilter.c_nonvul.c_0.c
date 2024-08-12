void FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, const VAR3 *VAR6, int VAR7, VAR3 *VAR8, VAR3 *VAR9, VAR3 *VAR10, VAR3 *VAR11, int VAR12)
{
    int16_t VAR13[VAR14 + 11];
    int16_t VAR15[33];
    int16_t VAR16[11];
    int VAR17;
    int VAR18;
    memset(VAR15, 0, 33 * sizeof(VAR3));
    for (VAR18 = 0; VAR18 < 10; VAR18++)
        VAR15[VAR18 + 11] = (VAR6[VAR18 + 1] * VAR19[VAR18] + 0x4000) >> 15;
    for (VAR18 = 0; VAR18 < 10; VAR18++)
        VAR16[VAR18 + 1] = (VAR6[VAR18 + 1] * VAR20[VAR18] + 0x4000) >> 15;
    memcpy(VAR11 - 10, VAR9, 10 * sizeof(VAR3));
    FUN2(VAR8 + VAR21, VAR15 + 11, VAR11, VAR12);
    memcpy(VAR9, VAR11 + VAR12 - 10, 10 * sizeof(VAR3));
    *VAR5 = FUN3(*VAR5, FUN4(VAR2, VAR7, VAR8, VAR13 + 10, VAR12));
    memmove(VAR8, VAR8 + VAR12, VAR21 * sizeof(VAR3));
    VAR17 = FUN5(VAR2, VAR15, VAR16, VAR13 + 10, VAR12);
    FUN6(VAR10 + 10, VAR16 + 1, VAR13 + 10, VAR12, 10, 0, 0, 0x800);
    memcpy(VAR10, VAR10 + VAR12, 10 * sizeof(VAR3));
    *VAR4 = FUN7(VAR11, VAR10 + 10, VAR17, VAR12, *VAR4);
}