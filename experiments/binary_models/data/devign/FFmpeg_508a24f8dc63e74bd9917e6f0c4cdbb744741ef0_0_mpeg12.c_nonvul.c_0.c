static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, const VAR6 *VAR7, int VAR8);
static int FUN2(VAR1 *VAR2, void *VAR9, int *VAR5, VAR10 *VAR11)
{
    const VAR6 *VAR7 = VAR11->VAR9;
    int VAR8 = VAR11->VAR12;
    VAR13 *VAR14 = VAR2->VAR15;
    VAR3 *VAR4 = VAR9;
    VAR16 *VAR17 = &VAR14->VAR18;
    FUN3(VAR2, "");
    if (VAR8 == 0 || (VAR8 == 4 && FUN4(VAR7) == VAR19))
    {
        if (VAR17->VAR20 == 0 && VAR17->VAR21)
        {
            *VAR4 = *(VAR3 *)VAR17->VAR21;
            VAR17->VAR21 = NULL;
            *VAR5 = sizeof(VAR3);
        }
        return VAR8;
    }
    if (VAR17->VAR22 & VAR23)
    {
        int VAR24 = FUN5(&VAR17->VAR25, VAR7, VAR8, NULL);
        if (FUN6(&VAR17->VAR25, VAR24, (const VAR6 **)&VAR7, &VAR8) < 0)
            return VAR8;
    }
    if (VAR14->VAR26 % 2 == 1)
    {
        VAR14->VAR26++;
        if (VAR2->VAR22 & VAR27)
        {
            *VAR5 = sizeof(VAR28);
            goto VAR29;
        }
    }
    if (VAR14->VAR30 == 0 && VAR2->VAR31 == FUN7(""))
        FUN8(VAR2);
    VAR14->VAR32 = 0;
    if (VAR2->VAR33 && !VAR2->VAR34)
        FUN1(VAR2, VAR4, VAR5, VAR2->VAR33, VAR2->VAR35);
    return FUN1(VAR2, VAR4, VAR5, VAR7, VAR8);
}