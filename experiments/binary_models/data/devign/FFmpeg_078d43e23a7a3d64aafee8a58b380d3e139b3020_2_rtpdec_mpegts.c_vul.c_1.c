static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR9 *VAR10, const VAR11 *VAR12, int VAR13, uint16_t VAR14, int VAR15)
{
    int VAR16;
    *VAR10 = VAR17;
    if (!VAR4->VAR18)
        return FUN2(VAR19);
    if (!VAR12)
    {
        if (VAR4->VAR20 >= VAR4->VAR21)
            return FUN2(VAR22);
        VAR16 = FUN3(VAR4->VAR18, VAR8, VAR4->VAR12 + VAR4->VAR20, VAR4->VAR21 - VAR4->VAR20);
        if (VAR16 < 0)
            return FUN2(VAR22);
        VAR4->VAR20 += VAR16;
        if (VAR4->VAR20 < VAR4->VAR21)
            return 1;
        else
            return 0;
    }
    VAR16 = FUN3(VAR4->VAR18, VAR8, VAR12, VAR13);
    if (VAR16 < 0)
        return FUN2(VAR22);
    if (VAR16 < VAR13)
    {
        VAR4->VAR21 = FUN4(VAR13 - VAR16, sizeof(VAR4->VAR12));
        memcpy(VAR4->VAR12, VAR12 + VAR16, VAR4->VAR21);
        VAR4->VAR20 = 0;
        return 1;
    }
    return 0;
}