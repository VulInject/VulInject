static inline int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, VAR6 **VAR7, int *VAR8)
{
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    VAR6 *VAR15;
    static const uint16_t VAR16[32] = {-1, 1024, 512, 341, 256, 205, 171, 146, 128, 114, 102, 93, 85, 79, 73, 68, 64, 60, 57, 54, 51, 49, 47, 45, 43, 41, 39, 38, 37, 35, 34, 33};
    if (VAR5 < 4)
        VAR14 = VAR2->VAR17;
    else
        VAR14 = VAR2->VAR18;
    VAR12 = VAR2->VAR19[VAR5];
    VAR15 = VAR2->VAR15[0] + VAR2->VAR20[VAR5];
    VAR11 = VAR15[-1];
    VAR10 = VAR15[-1 - VAR12];
    VAR9 = VAR15[-VAR12];
    if (VAR4 < 9 || !VAR3)
    {
        if (VAR2->VAR21 && (VAR5 != 2 && VAR5 != 3))
            VAR10 = VAR9 = VAR16[VAR14];
        if (VAR2->VAR22 == 0 && (VAR5 != 1 && VAR5 != 3))
            VAR10 = VAR11 = VAR16[VAR14];
    }
    else
    {
        if (VAR2->VAR21 && (VAR5 != 2 && VAR5 != 3))
            VAR10 = VAR9 = 0;
        if (VAR2->VAR22 == 0 && (VAR5 != 1 && VAR5 != 3))
            VAR10 = VAR11 = 0;
    }
    if (FUN2(VAR9 - VAR10) <= FUN2(VAR10 - VAR11))
    {
        VAR13 = VAR11;
        *VAR8 = 1;
    }
    else
    {
        VAR13 = VAR9;
        *VAR8 = 0;
    }
    *VAR7 = &VAR15[0];
    return VAR13;
}