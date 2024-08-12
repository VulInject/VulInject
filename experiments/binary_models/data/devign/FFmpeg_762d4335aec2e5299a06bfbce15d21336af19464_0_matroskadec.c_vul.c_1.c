static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    int VAR7, VAR8;
    VAR8 = FUN2(VAR2, VAR9, &VAR2->VAR10);
    if (VAR8 == 1)
    {
        if (VAR2->VAR11)
            FUN3(VAR2);
        FUN4(VAR12, &VAR2->VAR10);
        memset(&VAR2->VAR10, 0, sizeof(VAR13));
        VAR2->VAR14 = 0;
        VAR2->VAR11 = FUN5(VAR2->VAR15->VAR16);
        VAR2->VAR17 = NULL;
        if (VAR2->VAR18)
            VAR2->VAR11 -= 4;
        VAR8 = FUN2(VAR2, VAR19, &VAR2->VAR10);
        if (VAR8 == 1)
            VAR8 = FUN2(VAR2, VAR9, &VAR2->VAR10);
    }
    if (!VAR8 && VAR2->VAR14 < VAR2->VAR10.VAR6.VAR20)
    {
        VAR4 = &VAR2->VAR10.VAR6;
        VAR6 = VAR4->VAR21;
        VAR2->VAR14 = VAR4->VAR20;
        VAR7 = VAR4->VAR20 - 1;
        if (VAR6[VAR7].VAR22.VAR23 > 0 && VAR6[VAR7].VAR22.VAR24)
        {
            int VAR25 = VAR6[VAR7].VAR26 ? !VAR6[VAR7].VAR27 : -1;
            VAR28 *VAR29 = VAR6[VAR7].VAR29.VAR23 > 0 ? VAR6[VAR7].VAR29.VAR24 : NULL;
            if (!VAR6[VAR7].VAR26)
                VAR6[VAR7].VAR30 = 0;
            VAR8 = FUN6(VAR2, VAR6[VAR7].VAR22.VAR24, VAR6[VAR7].VAR22.VAR23, VAR6[VAR7].VAR22.VAR31, VAR2->VAR10.VAR32, VAR6[VAR7].VAR30, VAR25, VAR29, VAR6[VAR7].VAR33, VAR6[VAR7].VAR29.VAR23, VAR2->VAR11);
        }
    }
    if (VAR8 < 0)
        VAR2->VAR34 = 1;
    return VAR8;
}