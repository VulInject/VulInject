static void FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned int VAR5, VAR3 *VAR6, unsigned int *VAR7, unsigned int VAR8)
{
    unsigned int VAR9;
    uint16_t VAR10;
    struct VAR11 *VAR12;
    FUN2(8);
    if (VAR4[6])
    {
        FUN3(2, VAR2->VAR13.VAR14);
    }
    VAR9 = 0;
    if (FUN4(&VAR2->VAR13, VAR4[4] | (VAR4[5] << 8), &VAR9, &VAR10))
    {
        VAR6[2] = VAR15;
        return;
    }
    VAR12 = (struct VAR11 *)&VAR2->VAR13.VAR13[VAR9];
    if (VAR4[6] > FUN5(VAR12))
    {
        VAR6[2] = VAR16;
        return;
    }
    FUN6(VAR10 & 0xff);
    FUN6((VAR10 >> 8) & 0xff);
    if (VAR4[7] == 0xff)
    {
        VAR4[7] = FUN5(VAR12) - VAR4[6];
    }
    if ((VAR4[7] + *VAR7) > VAR8)
    {
        VAR6[2] = VAR17;
        return;
    }
    memcpy(VAR6 + *VAR7, VAR2->VAR13.VAR13 + VAR9 + VAR4[6], VAR4[7]);
    *VAR7 += VAR4[7];
}