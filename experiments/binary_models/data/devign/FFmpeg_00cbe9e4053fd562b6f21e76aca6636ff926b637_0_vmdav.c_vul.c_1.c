static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14, VAR15;
    unsigned char *VAR16 = (unsigned char *)VAR3;
    if (VAR9 < 16)
    {
        FUN2(VAR2, VAR17, "");
        *VAR4 = 0;
        return VAR9;
    }
    VAR14 = VAR8[6];
    if (VAR14 < VAR18 || VAR14 > VAR19)
    {
        FUN2(VAR2, VAR20, "", VAR14);
        return FUN3(VAR21);
    }
    VAR8 += 16;
    VAR9 -= 16;
    VAR15 = 0;
    if (VAR14 == VAR22)
    {
        uint32_t VAR23 = FUN4(VAR8);
        VAR15 = FUN5(VAR23);
        VAR8 += 4;
        VAR9 -= 4;
    }
    else if (VAR14 == VAR19)
    {
        VAR15 = 1;
        VAR9 = 0;
    }
    if (*VAR4 < (VAR2->VAR24 * VAR15 + VAR9) * VAR12->VAR25)
        return -1;
    *VAR4 = FUN6(VAR12, VAR16, VAR8, VAR15, VAR9);
    return VAR6->VAR10;
}