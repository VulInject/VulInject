static inline int FUN1(VAR1 *VAR2, int *VAR3, int VAR4, VAR5 *VAR6, VAR5 *VAR7, int VAR8, int VAR9, int VAR10, VAR11 *VAR12, int VAR13, int VAR14, int VAR15, int VAR16, int VAR17, int VAR18, VAR19 *VAR20, VAR21 *VAR22, int VAR23, op_pixels_abs_func VAR24)
{
    int VAR25 = -1;
    for (;;)
    {
        int VAR26;
        const int VAR27 = VAR25;
        const int VAR28 = VAR3[0];
        const int VAR29 = VAR3[1];
        VAR25 = -1;
        if (VAR27 != 2 && VAR28 > VAR14)
            FUN2(VAR28 - 1, VAR29, 0)
            if (VAR27 != 3 && VAR29 > VAR15) FUN2(VAR28, VAR29 - 1, 1) if (VAR27 != 0 && VAR28 < VAR16) FUN2(VAR28 + 1, VAR29, 2) if (VAR27 != 1 && VAR29 < VAR17) FUN2(VAR28, VAR29 + 1, 3) if (VAR25 == -1) { return VAR4; }
    }
}