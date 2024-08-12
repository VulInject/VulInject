static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8, VAR9;
    const VAR10 *VAR11;
    if (VAR2->VAR12)
        VAR9 = 64;
    else
        VAR9 = VAR2->VAR13[VAR5] + 1;
    if (VAR2->VAR14)
    {
        if (VAR5 < 4)
            VAR4[0] = VAR4[0] * VAR2->VAR15;
        else
            VAR4[0] = VAR4[0] * VAR2->VAR16;
        VAR11 = VAR2->VAR17;
        for (VAR7 = 1; VAR7 < VAR9; VAR7++)
        {
            int VAR18 = VAR19[VAR7];
            VAR8 = VAR4[VAR18];
            if (VAR8)
            {
                if (VAR8 < 0)
                {
                    VAR8 = -VAR8;
                    VAR8 = (int)(VAR8 * VAR6 * VAR11[VAR18]) >> 3;
                    VAR8 = (VAR8 - 1) | 1;
                    VAR8 = -VAR8;
                }
                else
                {
                    VAR8 = (int)(VAR8 * VAR6 * VAR11[VAR18]) >> 3;
                    VAR8 = (VAR8 - 1) | 1;
                }
                if (VAR8 < -2048 || VAR8 > 2047)
                    fprintf(VAR20, "", VAR7, VAR8);
                VAR4[VAR18] = VAR8;
            }
        }
    }
    else
    {
        VAR7 = 0;
        VAR11 = VAR2->VAR21;
        for (; VAR7 < VAR9; VAR7++)
        {
            int VAR18 = VAR19[VAR7];
            VAR8 = VAR4[VAR18];
            if (VAR8)
            {
                if (VAR8 < 0)
                {
                    VAR8 = -VAR8;
                    VAR8 = (((VAR8 << 1) + 1) * VAR6 * ((int)(VAR11[VAR18]))) >> 4;
                    VAR8 = (VAR8 - 1) | 1;
                    VAR8 = -VAR8;
                }
                else
                {
                    VAR8 = (((VAR8 << 1) + 1) * VAR6 * ((int)(VAR11[VAR18]))) >> 4;
                    VAR8 = (VAR8 - 1) | 1;
                }
                if (VAR8 < -2048 || VAR8 > 2047)
                    fprintf(VAR20, "", VAR7, VAR8);
                VAR4[VAR18] = VAR8;
            }
        }
    }
}