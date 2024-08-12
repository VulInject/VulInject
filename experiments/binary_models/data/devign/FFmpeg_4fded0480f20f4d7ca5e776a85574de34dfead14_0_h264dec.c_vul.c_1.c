static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    VAR4->VAR2 = VAR2;
    VAR4->VAR6 = VAR7;
    VAR4->VAR8 = VAR2->VAR8;
    VAR4->VAR9 = VAR2->VAR9;
    VAR4->VAR10.VAR11 = 1 << 16;
    VAR4->VAR12 = -1;
    VAR4->VAR13 = 0;
    VAR4->VAR14 = VAR15;
    for (VAR5 = 0; VAR5 < VAR16; VAR5++)
        VAR4->VAR17[VAR5] = VAR15;
    FUN2(&VAR4->VAR18);
    VAR2->VAR19 = VAR20;
    VAR4->VAR21 = (VAR2->VAR22 & VAR23) ? VAR2->VAR24 : 1;
    VAR4->VAR25 = FUN3(VAR4->VAR21, sizeof(*VAR4->VAR25));
    if (!VAR4->VAR25)
    {
        VAR4->VAR21 = 0;
        return FUN4(VAR26);
    }
    for (VAR5 = 0; VAR5 < VAR27; VAR5++)
    {
        VAR4->VAR28[VAR5].VAR29 = FUN5();
        if (!VAR4->VAR28[VAR5].VAR29)
            return FUN4(VAR26);
    }
    VAR4->VAR30.VAR29 = FUN5();
    if (!VAR4->VAR30.VAR29)
        return FUN4(VAR26);
    VAR4->VAR31 = FUN5();
    if (!VAR4->VAR31)
        return FUN4(VAR26);
    for (VAR5 = 0; VAR5 < VAR4->VAR21; VAR5++)
        VAR4->VAR25[VAR5].VAR32 = VAR4;
    return 0;