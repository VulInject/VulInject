static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    int VAR5, VAR6;
    if (VAR2 < 0)
    {
        FUN2(VAR4, VAR2);
        goto VAR7;
    }
    if (VAR4->VAR8 > 0)
    {
        if (VAR4->VAR9 != -1)
        {
            if (VAR4->VAR10 == 2352)
            {
                VAR6 = 1;
                FUN3(VAR4->VAR11, VAR4->VAR9);
            }
            else
            {
                VAR6 = VAR4->VAR8 >> 11;
            }
            VAR4->VAR9 += VAR6;
        }
        VAR4->VAR12 -= VAR4->VAR8;
        if (VAR4->VAR13->VAR14->VAR15->FUN4(VAR4->VAR13->VAR14, 1) == 0)
            goto VAR7;
    }
    if (VAR4->VAR12 <= 0)
    {
        VAR4->VAR16 = VAR17 | VAR18;
        VAR4->VAR19 = (VAR4->VAR19 & ~7) | VAR20 | VAR21;
        FUN5(VAR4->VAR13);
        goto VAR7;
    }
    VAR4->VAR22 = 0;
    if (VAR4->VAR10 == 2352)
    {
        VAR6 = 1;
        VAR4->VAR8 = VAR4->VAR10;
        VAR5 = 16;
    }
    else
    {
        VAR6 = VAR4->VAR12 >> 11;
        if (VAR6 > (VAR23 / 4))
            VAR6 = (VAR23 / 4);
        VAR4->VAR8 = VAR6 * 2048;
        VAR5 = 0;
    }
    FUN6("", VAR4->VAR9, VAR6);
    VAR4->VAR13->VAR14->VAR24.VAR25 = (void *)(VAR4->VAR11 + VAR5);
    VAR4->VAR13->VAR14->VAR24.VAR26 = VAR6 * 4 * 512;
    FUN7(&VAR4->VAR13->VAR14->VAR27, &VAR4->VAR13->VAR14->VAR24, 1);
    VAR4->VAR13->VAR14->VAR28 = FUN8(VAR4->VAR29, (VAR30)VAR4->VAR9 << 2, &VAR4->VAR13->VAR14->VAR27, VAR6 * 4, VAR31, VAR4);
    return;
VAR7:
    FUN9(FUN10(VAR4->VAR29), &VAR4->VAR32);
    FUN11(VAR4, false);
}