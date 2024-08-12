int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    float VAR9, VAR10, VAR11, VAR12;
    int VAR13 = 0;
    int av_unused VAR14;
    VAR2->VAR3 = VAR3;
    VAR8 = 1 << VAR3;
    VAR2->VAR15 = FUN2((VAR8 / 2) * sizeof(VAR16));
    if (!VAR2->VAR15)
        goto VAR17;
    VAR2->VAR18 = FUN2(VAR8 * sizeof(VAR19));
    if (!VAR2->VAR18)
        goto VAR17;
    VAR2->VAR4 = VAR4;
    VAR12 = VAR4 ? 1.0 : -1.0;
    for (VAR5 = 0; VAR5 < (VAR8 / 2); VAR5++)
    {
        VAR9 = 2 * VAR20 * (float)VAR5 / (float)VAR8;
        VAR10 = FUN3(VAR9);
        VAR11 = FUN4(VAR9) * VAR12;
        VAR2->VAR15[VAR5].VAR21 = VAR10;
        VAR2->VAR15[VAR5].VAR22 = VAR11;
    }
    VAR2->VAR23 = VAR24;
    VAR2->VAR25 = VAR26;
    VAR2->VAR27 = VAR28;
    VAR2->VAR29 = NULL;
    VAR14 = FUN5();
    VAR13 = 1;
    if (VAR14 & VAR30)
    {
        VAR2->VAR25 = VAR31;
        VAR2->VAR23 = VAR32;
    }
    else if (VAR14 & VAR33)
    {
        VAR2->VAR23 = VAR34;
    }
    else if (VAR14 & VAR35)
    {
        VAR2->VAR25 = VAR36;
        VAR2->VAR27 = VAR37;
        VAR2->VAR23 = VAR38;
    }
    else
    {
        VAR13 = 0;
    }
    VAR14 = FUN5();
    if (VAR14 & VAR39)
    {
        VAR2->VAR23 = VAR40;
        VAR13 = 1;
    }
    if (VAR13)
    {
        int VAR41, VAR42, VAR43, VAR44;
        VAR16 *VAR45;
        VAR41 = 1 << VAR3;
        VAR42 = VAR41 >> 3;
        VAR43 = VAR41 >> 1;
        VAR2->VAR29 = FUN2(VAR41 * 2 * sizeof(VAR16));
        if (!VAR2->VAR29)
            goto VAR17;
        VAR45 = VAR2->VAR29;
        do
        {
            for (VAR44 = 0; VAR44 < VAR43; VAR44 += 2 * VAR42)
            {
                *VAR45++ = VAR2->VAR15[VAR44];
                *VAR45++ = VAR2->VAR15[VAR44 + VAR42];
                VAR45->VAR21 = -VAR2->VAR15[VAR44].VAR22;
                VAR45->VAR22 = VAR2->VAR15[VAR44].VAR21;
                VAR45++;
                VAR45->VAR21 = -VAR2->VAR15[VAR44 + VAR42].VAR22;
                VAR45->VAR22 = VAR2->VAR15[VAR44 + VAR42].VAR21;
                VAR45++;
            }
            VAR42 = VAR42 >> 1;
        } while (VAR42 != 0);
        FUN6(&VAR2->VAR15);
    }
    for (VAR5 = 0; VAR5 < VAR8; VAR5++)
    {
        VAR7 = 0;
        for (VAR6 = 0; VAR6 < VAR3; VAR6++)
        {
            VAR7 |= ((VAR5 >> VAR6) & 1) << (VAR3 - VAR6 - 1);
        }
        VAR2->VAR18[VAR5] = VAR7;
    }
    return 0;
VAR17:
    FUN6(&VAR2->VAR18);
    FUN6(&VAR2->VAR15);
    FUN6(&VAR2->VAR29);
    return -1;