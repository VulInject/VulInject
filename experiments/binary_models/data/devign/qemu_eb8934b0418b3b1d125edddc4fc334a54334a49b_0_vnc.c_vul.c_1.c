static int FUN1(VAR1 *VAR2)
{
    int VAR3 = FUN2(FUN3(VAR2->VAR4.VAR5), FUN3(VAR2->VAR6));
    int VAR7 = FUN2(FUN4(VAR2->VAR4.VAR5), FUN4(VAR2->VAR6));
    int VAR8, VAR9, VAR10, VAR11, VAR12 = 0;
    VAR13 *VAR14 = NULL, *VAR15;
    VAR16 *VAR17;
    int VAR18 = 0;
    VAR19 *VAR20 = NULL;
    struct timeval VAR21 = {0, 0};
    if (!VAR2->VAR22)
    {
        FUN5(&VAR21, NULL);
        VAR18 = FUN6(VAR2, &VAR21);
    }
    VAR15 = (VAR13 *)FUN7(VAR2->VAR6);
    VAR9 = VAR11 = FUN8(VAR2->VAR6);
    VAR8 = FUN2(VAR23 * VAR24, VAR9);
    if (VAR2->VAR4.VAR25 != VAR26)
    {
        int VAR3 = FUN3(VAR2->VAR6);
        VAR20 = FUN9(VAR26, VAR3);
    }
    else
    {
        VAR14 = (VAR13 *)FUN7(VAR2->VAR4.VAR5);
        VAR11 = FUN8(VAR2->VAR4.VAR5);
    }
    VAR10 = FUN2(VAR9, VAR11);
    for (;;)
    {
        int VAR27;
        VAR13 *VAR28, *VAR29;
        unsigned long VAR30 = FUN10((unsigned long *)&VAR2->VAR4.VAR31, VAR7 * FUN11(&VAR2->VAR4), VAR12 * FUN11(&VAR2->VAR4));
        if (VAR30 == VAR7 * FUN11(&VAR2->VAR4))
        {
            break;
        }
        VAR12 = VAR30 / FUN11(&VAR2->VAR4);
        VAR27 = VAR30 % FUN11(&VAR2->VAR4);
        VAR29 = VAR15 + VAR12 * VAR9 + VAR27 * VAR8;
        if (VAR2->VAR4.VAR25 != VAR26)
        {
            FUN12(VAR20, VAR2->VAR4.VAR5, VAR3, 0, VAR12);
            VAR28 = (VAR13 *)FUN7(VAR20);
        }
        else
        {
            VAR28 = VAR14 + VAR12 * VAR11;
        }
        VAR28 += VAR27 * VAR8;
        for (; VAR27 < FUN13(VAR3, VAR23); VAR27++, VAR28 += VAR8, VAR29 += VAR8)
        {
            int VAR32 = VAR8;
            if (!FUN14(VAR27, VAR2->VAR4.VAR31[VAR12]))
            {
                continue;
            }
            if ((VAR27 + 1) * VAR8 > VAR10)
            {
                VAR32 = VAR10 - VAR27 * VAR8;
            }
            if (memcmp(VAR29, VAR28, VAR32) == 0)
            {
                continue;
            }
            memcpy(VAR29, VAR28, VAR32);
            if (!VAR2->VAR22)
            {
                FUN15(VAR2, VAR27 * VAR23, VAR12, &VAR21);
            }
            FUN16(VAR17, &VAR2->VAR33, VAR34) { FUN17(VAR27, VAR17->VAR31[VAR12]); }
            VAR18++;
        }
        VAR12++;
    }
    FUN18(VAR20);
    return VAR18;
}