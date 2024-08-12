int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = &VAR9->VAR12;
    VAR13 *VAR14 = VAR3;
    SliceInfo VAR15;
    int VAR16;
    int VAR17;
    VAR5 *VAR18 = NULL;
    int VAR19 = 0;
    if (VAR7 == 0)
    {
        if (VAR12->VAR20 == 0 && VAR12->VAR21)
        {
            *VAR14 = *(VAR13 *)VAR12->VAR21;
            VAR12->VAR21 = NULL;
            *VAR4 = sizeof(VAR13);
        }
        return 0;
    }
    if (!VAR2->VAR17)
    {
        VAR17 = (*VAR6++) + 1;
        VAR18 = VAR6 + 4;
        VAR6 += 8 * VAR17;
    }
    else
        VAR17 = VAR2->VAR17;
    for (VAR16 = 0; VAR16 < VAR17; VAR16++)
    {
        int VAR22 = FUN2(VAR2, VAR18, VAR16);
        int VAR23;
        if (VAR16 + 1 == VAR17)
            VAR23 = VAR7 - VAR22;
        else
            VAR23 = FUN2(VAR2, VAR18, VAR16 + 1) - VAR22;
        VAR9->VAR15.VAR24 = VAR12->VAR25 * VAR12->VAR26;
        if (VAR16 + 1 < VAR17)
        {
            FUN3(&VAR12->VAR27, VAR6 + FUN2(VAR2, VAR18, VAR16 + 1), (VAR7 - FUN2(VAR2, VAR18, VAR16 + 1)) * 8);
            if (VAR9->FUN4(VAR9, &VAR9->VAR12.VAR27, &VAR15) < 0)
            {
                if (VAR16 + 2 < VAR17)
                    VAR23 = FUN2(VAR2, VAR18, VAR16 + 2) - VAR22;
                else
                    VAR23 = VAR7 - VAR22;
            }
            else
                VAR9->VAR15.VAR24 = VAR15.VAR28;
        }
        VAR19 = FUN5(VAR9, VAR9->VAR15.VAR24, VAR6 + VAR22, VAR23);
        VAR12->VAR29 = VAR9->VAR12.VAR30 + VAR9->VAR12.VAR31 * VAR9->VAR12.VAR25 - VAR9->VAR15.VAR28;
        if (VAR19)
            break;
    }
    if (VAR19)
    {
        if (VAR9->VAR32)
            VAR9->FUN6(VAR9, VAR12->VAR26 - 1);
        FUN7(VAR12);
        FUN8(VAR12);
        if (VAR12->VAR33 == VAR34 || VAR12->VAR20)
        {
            *VAR14 = *(VAR13 *)VAR12->VAR35;
        }
        else if (VAR12->VAR36 != NULL)
        {
            *VAR14 = *(VAR13 *)VAR12->VAR36;
        }
        if (VAR12->VAR36 || VAR12->VAR20)
        {
            *VAR4 = sizeof(VAR13);
            FUN9(VAR12, VAR14);
        }
        VAR12->VAR35 = NULL;
    }
    return VAR7;
}