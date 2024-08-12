static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int16_t VAR5[64], int VAR6, int VAR7, int VAR8)
{
    const VAR9 *VAR10;
    int VAR11, VAR12 = 1;
    memset(VAR5, 0, 64 * sizeof(*VAR5));
    if (!VAR8)
    {
        VAR5[0] = FUN2(VAR4, 9) << 6;
        VAR10 = VAR13[VAR6][VAR7][FUN3(VAR4, 2)];
    }
    else
    {
        VAR10 = VAR13[VAR6][VAR7][FUN3(VAR4, 2)];
        VAR5[0] = FUN2(VAR4, 9) << 6;
    }
    for (;;)
    {
        VAR11 = FUN4(VAR4, VAR2->VAR14.VAR15, 9, 2);
        if (VAR11 < 0)
            return VAR16;
        VAR12 += VAR17[VAR11];
        if (VAR12 >= 64)
            break;
        VAR5[VAR18[VAR12]] = (VAR19[VAR11] * VAR10[VAR12]) >> 12;
        VAR12++;
    }
    return 0;
}