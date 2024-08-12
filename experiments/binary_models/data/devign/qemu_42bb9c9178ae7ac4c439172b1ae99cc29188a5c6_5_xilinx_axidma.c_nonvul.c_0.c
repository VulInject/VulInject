static VAR1 FUN1(struct VAR2 *VAR3, unsigned char *VAR4, size_t VAR5)
{
    uint32_t VAR6;
    unsigned int VAR7;
    size_t VAR8 = 0;
    int VAR9 = 1;
    if (!FUN2(VAR3) || FUN3(VAR3))
    {
        return 0;
    }
    while (VAR5)
    {
        FUN4(VAR3, VAR3->VAR10[VAR11]);
        if (VAR3->VAR12.VAR13 & VAR14)
        {
            VAR3->VAR10[VAR15] |= VAR16;
            break;
        }
        VAR7 = VAR3->VAR12.VAR17 & VAR18;
        if (VAR7 > VAR5)
        {
            VAR7 = VAR5;
        }
        FUN5(VAR3->VAR12.VAR19, VAR4 + VAR8, VAR7);
        VAR5 -= VAR7;
        VAR8 += VAR7;
        if (!VAR5)
        {
            FUN6(VAR3);
            memcpy(VAR3->VAR12.VAR20, VAR3->VAR20, sizeof(VAR3->VAR12.VAR20));
            VAR3->VAR12.VAR13 |= VAR21;
        }
        VAR3->VAR12.VAR13 |= VAR9 << VAR22;
        VAR3->VAR12.VAR13 |= VAR14;
        FUN7(VAR3, VAR3->VAR10[VAR11]);
        VAR9 = 0;
        VAR6 = VAR3->VAR10[VAR11];
        VAR3->VAR10[VAR11] = VAR3->VAR12.VAR23;
        if (VAR6 == VAR3->VAR10[VAR24])
        {
            VAR3->VAR10[VAR15] |= VAR25;
            break;
        }
    }
    return VAR8;
}