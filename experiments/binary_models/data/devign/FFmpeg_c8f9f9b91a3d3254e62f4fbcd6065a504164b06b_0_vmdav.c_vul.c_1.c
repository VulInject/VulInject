static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = (VAR8 *)VAR2->VAR10;
    unsigned int VAR11;
    unsigned char *VAR12 = (unsigned char *)VAR3;
    unsigned char *VAR13 = VAR6 + 16;
    unsigned char *VAR14 = VAR6 + VAR7;
    if (VAR7 < 16)
        return VAR7;
    if (VAR6[6] == 1)
    {
        *VAR4 = FUN2(VAR9, VAR12, VAR13, 0);
    }
    else if (VAR6[6] == 2)
    {
        VAR11 = FUN3(VAR13);
        VAR13 += 4;
        while (VAR13 < VAR14)
        {
            if (VAR11 & 0x01)
                *VAR4 += FUN2(VAR9, VAR12, VAR13, 1);
            else
            {
                *VAR4 += FUN2(VAR9, VAR12, VAR13, 0);
                VAR13 += VAR9->VAR15;
            }
            VAR12 += (VAR9->VAR15 * VAR9->VAR16 / 8);
            VAR11 >>= 1;
        }
    }
    else if (VAR6[6] == 3)
    {
        *VAR4 = FUN2(VAR9, VAR12, VAR13, 1);
    }
    return VAR7;
}