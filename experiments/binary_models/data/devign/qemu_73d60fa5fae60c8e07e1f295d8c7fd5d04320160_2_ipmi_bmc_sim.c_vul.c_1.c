static void FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned int VAR5, VAR3 *VAR6, unsigned int *VAR7, unsigned int VAR8)
{
    VAR9 *VAR10;
    FUN2(4);
    if ((VAR4[2] > VAR11) || !FUN3(VAR2->VAR12 + VAR4[2]))
    {
        VAR6[2] = VAR13;
        return;
    }
    VAR10 = VAR2->VAR12 + VAR4[2];
    switch ((VAR4[3] >> 4) & 0x3)
    {
    case 0:
        break;
    case 1:
        if (VAR5 > 4)
        {
            VAR10->VAR14 |= VAR4[4];
        }
        if (VAR5 > 5)
        {
            VAR10->VAR14 |= VAR4[5] << 8;
        }
        if (VAR5 > 6)
        {
            VAR10->VAR15 |= VAR4[6];
        }
        if (VAR5 > 7)
        {
            VAR10->VAR15 |= VAR4[7] << 8;
        }
        break;
    case 2:
        if (VAR5 > 4)
        {
            VAR10->VAR14 &= ~VAR4[4];
        }
        if (VAR5 > 5)
        {
            VAR10->VAR14 &= ~(VAR4[5] << 8);
        }
        if (VAR5 > 6)
        {
            VAR10->VAR15 &= ~VAR4[6];
        }
        if (VAR5 > 7)
        {
            VAR10->VAR15 &= ~(VAR4[7] << 8);
        }
        break;
    case 3:
        VAR6[2] = VAR16;
        return;
    }
    FUN4(VAR10, VAR4[3]);
}