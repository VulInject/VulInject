void FUN1(VAR1 *VAR2, int VAR3, void *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8;
    VAR9 *VAR10 = VAR2->VAR10;
    int VAR11;
    float VAR12;
    memset(VAR2->VAR13, 0, sizeof(VAR2->VAR13));
    VAR11 = 0;
    for (VAR6 = 0; VAR6 <= VAR3; VAR6++, VAR11 += VAR14)
    {
        for (VAR8 = 0; VAR8 < 2; VAR8++)
        {
            if (VAR10[VAR6].VAR15[VAR8])
            {
                VAR7 = 0;
                VAR12 = (VAR16 + 1)[VAR10[VAR6].VAR15[VAR8]] * VAR17[VAR10[VAR6].VAR18[VAR8][0] & 0xFF];
                for (; VAR7 < 12; VAR7++)
                    VAR2->VAR13[VAR8][VAR7][VAR6] = VAR12 * VAR2->VAR19[VAR8][VAR7 + VAR11];
                VAR12 = (VAR16 + 1)[VAR10[VAR6].VAR15[VAR8]] * VAR17[VAR10[VAR6].VAR18[VAR8][1] & 0xFF];
                for (; VAR7 < 24; VAR7++)
                    VAR2->VAR13[VAR8][VAR7][VAR6] = VAR12 * VAR2->VAR19[VAR8][VAR7 + VAR11];
                VAR12 = (VAR16 + 1)[VAR10[VAR6].VAR15[VAR8]] * VAR17[VAR10[VAR6].VAR18[VAR8][2] & 0xFF];
                for (; VAR7 < 36; VAR7++)
                    VAR2->VAR13[VAR8][VAR7][VAR6] = VAR12 * VAR2->VAR19[VAR8][VAR7 + VAR11];
            }
        }
        if (VAR10[VAR6].VAR20)
        {
            int VAR21, VAR22;
            for (VAR7 = 0; VAR7 < VAR14; VAR7++)
            {
                VAR21 = VAR2->VAR13[0][VAR7][VAR6];
                VAR22 = VAR2->VAR13[1][VAR7][VAR6];
                VAR2->VAR13[0][VAR7][VAR6] = VAR21 + VAR22;
                VAR2->VAR13[1][VAR7][VAR6] = VAR21 - VAR22;
            }
        }
    }
    FUN2(VAR2, VAR4, VAR5);
}