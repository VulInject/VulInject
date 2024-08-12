int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, VAR3 *VAR6, int VAR7, int VAR8, enum TiffCompr VAR9, int VAR10)
{
    int VAR11;
    GetBitContext VAR12;
    int *VAR13, *VAR14 = NULL, *VAR15;
    int VAR16;
    int VAR17 = VAR2->VAR18 + 2;
    int VAR19 = 0;
    VAR13 = FUN2(VAR17 * sizeof(VAR13[0]));
    VAR14 = FUN2(VAR17 * sizeof(VAR14[0]));
    if (!VAR13 || !VAR14)
    {
        VAR19 = FUN3(VAR20);
        goto VAR21;
    }
    VAR14[0] = VAR2->VAR18;
    VAR14[1] = 0;
    VAR14[2] = 0;
    FUN4(&VAR12, VAR4, VAR5 * 8);
    for (VAR11 = 0; VAR11 < VAR7; VAR11++)
    {
        VAR15 = VAR13 + VAR17;
        if (VAR9 == VAR22)
        {
            VAR16 = FUN5(VAR2, &VAR12, VAR2->VAR18, VAR13, VAR15, VAR14);
            if (VAR16 < 0)
            {
                VAR19 = -1;
                goto VAR21;
            }
        }
        else
        {
            int VAR23 = (VAR9 == VAR24) && !(VAR10 & 1);
            if (VAR9 != VAR25 && FUN6(&VAR12, VAR5 * 8) < 0)
                break;
            if (VAR9 == VAR25 || VAR23 || FUN7(&VAR12))
                VAR16 = FUN8(VAR2, &VAR12, VAR2->VAR18, VAR13, VAR15);
            else
                VAR16 = FUN5(VAR2, &VAR12, VAR2->VAR18, VAR13, VAR15, VAR14);
            if (VAR9 == VAR25)
                FUN9(&VAR12);
        }
        if (VAR16 < 0)
        {
            FUN10(VAR6, VAR8, VAR2->VAR18, VAR14);
        }
        else
        {
            FUN10(VAR6, VAR8, VAR2->VAR18, VAR13);
            FUN11(int *, VAR13, VAR14);
        }
        VAR6 += VAR8;
    }
VAR21:
    FUN12(VAR13);
    FUN12(VAR14);
    return VAR19;
}