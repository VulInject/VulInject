static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8, VAR9, VAR10, VAR11;
    const int *VAR12;
    int VAR13, VAR14;
    if (VAR2->VAR15 != NULL && VAR2->VAR15->VAR16->VAR17 == VAR18)
    {
        VAR13 = -2048;
        VAR14 = 2047;
    }
    else if (VAR2->VAR19 == VAR20)
    {
        VAR13 = -255;
        VAR14 = 255;
    }
    else if (VAR2->VAR19 == VAR21)
    {
        VAR13 = -1023;
        VAR14 = 1023;
    }
    else
    {
        VAR13 = -128;
        VAR14 = 127;
    }
    FUN2(VAR4);
    FUN3(VAR4);
    if (VAR2->VAR22)
    {
        if (VAR5 < 4)
            VAR11 = VAR2->VAR23;
        else
            VAR11 = VAR2->VAR24;
        VAR11 = VAR11 << 3;
        VAR4[0] = (VAR4[0] + (VAR11 >> 1)) / VAR11;
        VAR7 = 1;
        VAR10 = 0;
        if (VAR2->VAR19 == VAR25)
        {
            VAR12 = VAR2->VAR26;
        }
        else
        {
            VAR12 = VAR2->VAR27;
        }
    }
    else
    {
        VAR7 = 0;
        VAR10 = -1;
        VAR12 = VAR2->VAR26;
    }
    for (; VAR7 < 64; VAR7++)
    {
        VAR8 = VAR28[VAR7];
        VAR9 = VAR4[VAR8];
        VAR9 = VAR9 * VAR12[VAR8];
        {
            static int VAR29 = 0;
            int VAR30, VAR31, VAR32;
            double VAR33;
            if (VAR12 == VAR2->VAR26)
            {
                VAR32 = VAR34[VAR8] * VAR2->VAR6;
            }
            else
            {
                VAR32 = VAR35[VAR8] * VAR2->VAR6;
            }
            if (VAR36 != VAR37)
                VAR33 = ((double)VAR4[VAR8] * 8.0) / (double)VAR32;
            else
                VAR33 = ((double)VAR4[VAR8] * 8.0 * 2048.0) / ((double)VAR32 * VAR38[VAR8]);
            VAR30 = (int)VAR33;
            VAR31 = VAR9 / (1 << (VAR39 - 3));
            if (VAR30 != VAR31)
            {
                fprintf(VAR40, "", VAR29, VAR31, VAR30, VAR4[VAR8], VAR32, VAR12[VAR8], VAR33);
                VAR29++;
            }
        }
        if (((VAR9 << (31 - (VAR39 - 3))) >> (31 - (VAR39 - 3))) != VAR9)
        {
            VAR9 = VAR9 / (1 << (VAR39 - 3));
            if (VAR9 > VAR14)
                VAR9 = VAR14;
            else if (VAR9 < VAR13)
                VAR9 = VAR13;
            VAR4[VAR8] = VAR9;
            VAR10 = VAR7;
        }
        else
        {
            VAR4[VAR8] = 0;
        }
    }
    return VAR10;
}