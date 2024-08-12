static inline int FUN1(VAR1 *VAR2, int *VAR3, int VAR4, VAR5 *VAR6, VAR5 *VAR7, int VAR8, int VAR9, int VAR10, VAR11 *VAR12, int VAR13, int VAR14, int VAR15, int VAR16, int VAR17, int VAR18, VAR19 *VAR20, VAR21 *VAR22, int VAR23, op_pixels_abs_func VAR24)
{
    int VAR25 = 0;
    int VAR26 = 1;
    static int VAR27[8] = {1, 1, 0, -1, -1, -1, 0, 1};
    static int VAR28[8] = {0, 1, 1, 1, 0, -1, -1, -1};
    int VAR29 = 0;
    int VAR30[2] = {VAR4, VAR4};
    for (;;)
    {
        int VAR31 = VAR3[0];
        int VAR32 = VAR3[1];
        int VAR33;
        VAR31 += VAR27[VAR25];
        VAR32 += VAR28[VAR25];
        if (VAR31 >= VAR14 && VAR31 <= VAR16 && VAR32 >= VAR15 && VAR32 <= VAR17)
        {
            const int VAR34 = ((VAR32) << VAR35) + (VAR31) + VAR23;
            const int VAR36 = (((VAR32) << VAR37) + (VAR31)) & (VAR38 - 1);
            if (VAR20[VAR36] != VAR34)
            {
                VAR33 = FUN2(VAR6, VAR7 + (VAR31) + (VAR32)*VAR8, VAR8);
                VAR33 += (VAR12[((VAR31) << VAR18) - VAR9] + VAR12[((VAR32) << VAR18) - VAR10]) * VAR13;
                VAR20[VAR36] = VAR34;
                VAR22[VAR36] = VAR33;
            }
            else
                VAR33 = VAR4 + 1;
        }
        else
        {
            VAR33 = VAR4 + 10000;
        }
        if (VAR33 < VAR4)
        {
            VAR3[0] = VAR31;
            VAR3[1] = VAR32;
            VAR4 = VAR33;
            if (VAR30[1] - VAR30[0] > VAR30[0] - VAR33)
                VAR26 = -VAR26;
            VAR25 += VAR26;
            VAR29 = 0;
            VAR30[1] = VAR30[0];
            VAR30[0] = VAR33;
        }
        else
        {
            if (VAR29)
            {
                if (VAR29 >= VAR39 + 1)
                    return VAR4;
            }
            else
            {
                if (VAR25 & 1)
                    VAR25 -= VAR26 * 3;
                else
                    VAR26 = -VAR26;
            }
            VAR25 += VAR26 * VAR40;
            VAR29++;
        }
        VAR25 &= 7;
    }
}