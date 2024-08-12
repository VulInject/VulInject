static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR3 *VAR6, int VAR7, int *VAR8)
{
    int VAR9, VAR10 = -1;
    int av_unused VAR11 = FUN2();
    int VAR12 = 0;
    if (VAR2->VAR13)
        VAR5 = FUN3(VAR5, VAR2->VAR13);
    for (VAR9 = 0; VAR9 < VAR4->VAR14; VAR9++)
    {
        if (VAR2->VAR15 == VAR16 && (VAR11 & VAR17))
            VAR10 = FUN4(VAR2, (VAR18 *)VAR4->VAR19[VAR9], (const VAR18 *)VAR6->VAR19[VAR9], VAR8, VAR7, VAR5, VAR9 + 1 == VAR4->VAR14);
        else if (VAR2->VAR15 == VAR16 && (VAR11 & VAR20))
        {
            VAR10 = FUN5(VAR2, (VAR18 *)VAR4->VAR19[VAR9], (const VAR18 *)VAR6->VAR19[VAR9], VAR8, VAR7, VAR5, VAR9 + 1 == VAR4->VAR14);
            VAR12 = 1;
        }
        else if (VAR2->VAR15 == VAR16)
            VAR10 = FUN6(VAR2, (VAR18 *)VAR4->VAR19[VAR9], (const VAR18 *)VAR6->VAR19[VAR9], VAR8, VAR7, VAR5, VAR9 + 1 == VAR4->VAR14);
        else if (VAR2->VAR15 == VAR21)
            VAR10 = FUN7(VAR2, (VAR22 *)VAR4->VAR19[VAR9], (const VAR22 *)VAR6->VAR19[VAR9], VAR8, VAR7, VAR5, VAR9 + 1 == VAR4->VAR14);
        else if (VAR2->VAR15 == VAR23 && (VAR11 & VAR24))
            VAR10 = FUN8(VAR2, (float *)VAR4->VAR19[VAR9], (const float *)VAR6->VAR19[VAR9], VAR8, VAR7, VAR5, VAR9 + 1 == VAR4->VAR14);
        else if (VAR2->VAR15 == VAR23 && (VAR11 & VAR25))
            VAR10 = FUN9(VAR2, (float *)VAR4->VAR19[VAR9], (const float *)VAR6->VAR19[VAR9], VAR8, VAR7, VAR5, VAR9 + 1 == VAR4->VAR14);
        else if (VAR2->VAR15 == VAR23)
            VAR10 = FUN10(VAR2, (float *)VAR4->VAR19[VAR9], (const float *)VAR6->VAR19[VAR9], VAR8, VAR7, VAR5, VAR9 + 1 == VAR4->VAR14);
        else if (VAR2->VAR15 == VAR26 && (VAR11 & VAR17))
            VAR10 = FUN11(VAR2, (double *)VAR4->VAR19[VAR9], (const double *)VAR6->VAR19[VAR9], VAR8, VAR7, VAR5, VAR9 + 1 == VAR4->VAR14);
        else if (VAR2->VAR15 == VAR26)
            VAR10 = FUN12(VAR2, (double *)VAR4->VAR19[VAR9], (const double *)VAR6->VAR19[VAR9], VAR8, VAR7, VAR5, VAR9 + 1 == VAR4->VAR14);
        if (VAR12)
            FUN13();
        return VAR10