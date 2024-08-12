static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5, VAR6 = 0;
    VAR2->VAR7 = 132 + 493 * VAR2->VAR8;
    if (VAR2->VAR9)
        VAR2->VAR7 += 72;
    for (VAR4 = 0; VAR4 < VAR2->VAR8; VAR4++)
    {
        for (VAR5 = 0; VAR5 < 32; VAR5++)
        {
            int VAR10 = VAR2->VAR11[VAR4][VAR5] - VAR2->VAR12[VAR5] - VAR3;
            if (VAR10 >= 1312)
            {
                VAR2->VAR13[VAR4][VAR5] = 26;
                VAR6 |= VAR14;
            }
            else if (VAR10 >= 222)
            {
                VAR2->VAR13[VAR4][VAR5] = 8 + FUN2(VAR10 - 222, 69000000);
                VAR6 |= VAR15;
            }
            else if (VAR10 >= 0)
            {
                VAR2->VAR13[VAR4][VAR5] = 2 + FUN2(VAR10, 106000000);
                VAR6 |= VAR15;
            }
            else
            {
                VAR2->VAR13[VAR4][VAR5] = 1;
                VAR6 |= VAR16;
            }
        }
    }
    for (VAR4 = 0; VAR4 < VAR2->VAR8; VAR4++)
        for (VAR5 = 0; VAR5 < 32; VAR5++)
        {
            VAR2->VAR7 += VAR17[VAR2->VAR13[VAR4][VAR5]];
        }
    return VAR6;
}