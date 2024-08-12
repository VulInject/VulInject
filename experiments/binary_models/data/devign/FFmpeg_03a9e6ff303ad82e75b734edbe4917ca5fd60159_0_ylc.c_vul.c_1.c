static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int VAR9, uint32_t VAR10, int VAR11, int *VAR12)
{
    int VAR13;
    VAR13 = VAR8[VAR9].VAR14;
    if (VAR13 != -1)
    {
        VAR2[*VAR12] = (~VAR10) & ((1U << FUN2(VAR11, 1)) - 1);
        VAR4[*VAR12] = FUN2(VAR11, 1);
        VAR6[*VAR12] = VAR13 + (VAR11 == 0);
        (*VAR12)++;
    }
    else
    {
        VAR10 <<= 1;
        VAR11++;
        FUN1(VAR2, VAR4, VAR6, VAR8, VAR8[VAR9].VAR15, VAR10, VAR11, VAR12);
        VAR10 |= 1;
        FUN1(VAR2, VAR4, VAR6, VAR8, VAR8[VAR9].VAR16, VAR10, VAR11, VAR12);
    }
}