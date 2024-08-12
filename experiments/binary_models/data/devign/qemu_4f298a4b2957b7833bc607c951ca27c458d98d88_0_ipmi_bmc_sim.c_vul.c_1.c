static void FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned int VAR5, VAR3 *VAR6, unsigned int *VAR7, unsigned int VAR8)
{
    unsigned int VAR9;
    FUN2(8);
    if (VAR4[6])
    {
        FUN3(2, VAR2->VAR10.VAR11);
    }
    if (VAR2->VAR10.VAR12 == 0)
    {
        VAR6[2] = VAR13;
        return;
    }
    if (VAR4[6] > 15)
    {
        VAR6[2] = VAR14;
        return;
    }
    if (VAR4[7] == 0xff)
    {
        VAR4[7] = 16;
    }
    else if ((VAR4[7] + VAR4[6]) > 16)
    {
        VAR6[2] = VAR14;
        return;
    }
    else
    {
        VAR4[7] += VAR4[6];
    }
    VAR9 = VAR4[4] | (VAR4[5] << 8);
    if (VAR9 == 0xffff)
    {
        VAR9 = VAR2->VAR10.VAR12 - 1;
    }
    else if (VAR9 >= VAR2->VAR10.VAR12)
    {
        VAR6[2] = VAR13;
        return;
    }
    if ((VAR9 + 1) == VAR2->VAR10.VAR12)
    {
        FUN4(0xff);
        FUN4(0xff);
    }
    else
    {
        FUN4((VAR9 + 1) & 0xff);
        FUN4(((VAR9 + 1) >> 8) & 0xff);
    }
    for (; VAR4[6] < VAR4[7]; VAR4[6]++)
    {
        FUN4(VAR2->VAR10.VAR10[VAR9][VAR4[6]]);
    }
}