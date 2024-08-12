static int FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned VAR5, const VAR3 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    uint64_t VAR10;
    uint32_t VAR11, VAR12;
    struct AVDES VAR13;
    if (!VAR4 || !VAR6 || VAR5 < VAR14 + VAR8->VAR15 + 4)
        return -1;
    VAR10 = VAR14 + VAR8->VAR15;
    if (!memcmp(&VAR4[VAR10], "", 4))
        VAR10 += 32;
    if (VAR5 < VAR10 + 44)
        return -1;
    if (FUN2(&VAR4[VAR10]) != VAR8->VAR16)
        FUN3(VAR2, VAR17, "");
    VAR11 = FUN2(&VAR4[VAR10 + 32]);
    VAR12 = FUN2(&VAR4[VAR10 + 36]) >> 4;
    VAR10 += 44L + VAR11;
    if (VAR10 + (((VAR18)VAR12) << 4) > VAR5)
        return -1;
    FUN4(&VAR13, VAR6, 192, 1);
    while (VAR12-- > 0)
    {
        FUN5(&VAR13, VAR8->VAR19, &VAR4[VAR10], 2, NULL, 1);
        FUN6(VAR2, VAR8->VAR19, NULL, 16);
        if (!FUN7(VAR2, VAR4, VAR5, VAR8->VAR19))
            return 0;
        VAR10 += 16;
    }
    return -1;
}