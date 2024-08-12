static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4[2], VAR5[2];
    for (VAR3 = 0; VAR3 <= VAR2->VAR6; VAR3++)
    {
        if (VAR2->VAR7[VAR3].VAR8 > VAR9 - VAR2->VAR7[VAR3].VAR10)
            return VAR11;
        VAR2->VAR7[VAR3].VAR8 += VAR2->VAR7[VAR3].VAR10;
        VAR4[VAR3] = VAR2->VAR7[VAR3].VAR8 >> 16;
        VAR5[VAR3] = FUN2(VAR2->VAR7[VAR3].VAR12);
    }
    if (VAR2->VAR6 && VAR2->VAR13)
    {
        int VAR14 = (VAR5[1] - VAR5[0] + VAR4[1] + 1) >> 1;
        if (VAR14 > VAR4[0])
        {
            VAR4[1] = VAR4[0] << 1;
            VAR4[0] = 0;
        }
        else if (-VAR14 > VAR4[0])
        {
            VAR4[0] <<= 1;
            VAR4[1] = 0;
        }
        else
        {
            VAR4[1] = VAR4[0] + VAR14;
            VAR4[0] = VAR4[0] - VAR14;
        }
    }
    for (VAR3 = 0; VAR3 <= VAR2->VAR6; VAR3++)
    {
        if (VAR2->VAR13)
        {
            if (VAR5[VAR3] - VAR4[VAR3] > -0x100)
                VAR2->VAR7[VAR3].VAR15 = FUN3(VAR5[VAR3] - VAR4[VAR3] + 0x100);
            else
                VAR2->VAR7[VAR3].VAR15 = 0;
        }
        else
        {
            VAR2->VAR7[VAR3].VAR15 = FUN3(VAR4[VAR3]);
        }
    }
    return 0;
}