static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const struct VAR5 *VAR6, int VAR7, int VAR8, VAR9 *VAR10, int VAR11)
{
    int VAR12, VAR13, VAR14, VAR15;
    unsigned int VAR16, VAR17;
    DCTELEM VAR18[65];
    uint8_t VAR19[65];
    VAR20 *VAR21 = VAR2->VAR21;
    for (VAR12 = 0; VAR12 < 65; VAR12++)
    {
        VAR16 = FUN2(VAR4, VAR6->VAR22);
        if (VAR16 >= VAR23)
        {
            VAR17 = ((VAR16 - VAR23) >> 1) + 1;
            VAR13 = FUN2(VAR4, VAR7);
            VAR14 = VAR13 + (VAR17 > VAR6->VAR24 ? 1 : VAR6->VAR25[VAR17]);
            while (VAR14 > VAR6->VAR26)
                VAR6++;
            VAR15 = -(VAR16 & 1);
            VAR14 = (VAR14 ^ VAR15) - VAR15;
        }
        else
        {
            VAR14 = VAR6->VAR27[VAR16][0];
            if (!VAR14)
                break;
            VAR17 = VAR6->VAR27[VAR16][1];
            VAR6 += VAR6->VAR27[VAR16][2];
        }
        VAR18[VAR12] = VAR14;
        VAR19[VAR12] = VAR17;
    }
    if (FUN3(VAR2, VAR18, VAR19, VAR21, VAR28[VAR8], VAR29[VAR8], VAR12))
        return -1;
    VAR2->VAR30.FUN4(VAR10, VAR21, VAR11);
    VAR2->VAR31.VAR32.FUN5(VAR21);
    return 0;
}