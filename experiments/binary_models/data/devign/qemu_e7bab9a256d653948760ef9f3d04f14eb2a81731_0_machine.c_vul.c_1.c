static int FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = &VAR4->VAR6;
    int VAR7;
    target_ulong VAR8;
    if (VAR4->VAR9)
    {
        VAR10 *VAR11 = NULL;
        FUN2(VAR4, VAR4->VAR9, &VAR11);
        if (VAR11)
        {
            FUN3(VAR11);
            FUN4(VAR11);
            return -1;
        }
    }
    else
    {
        if (!FUN5(VAR4, VAR6->VAR12[VAR13]))
        {
            return -1;
        }
    }
    VAR6->VAR14 = VAR6->VAR12[VAR15];
    VAR6->VAR16 = VAR6->VAR12[VAR17];
    FUN6(VAR6, VAR6->VAR12[VAR18]);
    VAR6->VAR19 = VAR6->VAR12[VAR20];
    VAR6->VAR21 = VAR6->VAR12[VAR22];
    for (VAR7 = 0; (VAR7 < 4) && (VAR7 < VAR6->VAR23); VAR7++)
    {
        VAR6->VAR24[0][VAR7] = VAR6->VAR12[VAR25 + 2 * VAR7];
        VAR6->VAR24[1][VAR7] = VAR6->VAR12[VAR25 + 2 * VAR7 + 1];
        VAR6->VAR26[0][VAR7] = VAR6->VAR12[VAR27 + 2 * VAR7];
        VAR6->VAR26[1][VAR7] = VAR6->VAR12[VAR27 + 2 * VAR7 + 1];
    }
    for (VAR7 = 0; (VAR7 < 4) && ((VAR7 + 4) < VAR6->VAR23); VAR7++)
    {
        VAR6->VAR24[0][VAR7 + 4] = VAR6->VAR12[VAR28 + 2 * VAR7];
        VAR6->VAR24[1][VAR7 + 4] = VAR6->VAR12[VAR28 + 2 * VAR7 + 1];
        VAR6->VAR26[0][VAR7 + 4] = VAR6->VAR12[VAR29 + 2 * VAR7];
        VAR6->VAR26[1][VAR7 + 4] = VAR6->VAR12[VAR29 + 2 * VAR7 + 1];
    }
    if (!VAR4->VAR30)
    {
        FUN7(VAR6, VAR6->VAR12[VAR31]);
    }
    VAR8 = VAR6->VAR8;
    VAR6->VAR8 ^= ~((1ULL << VAR32) | VAR33);
    FUN8(VAR6, VAR8);
    FUN9(VAR6);
    return 0;
}