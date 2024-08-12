static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    VAR4->VAR2 = VAR2;
    VAR4->VAR6 = VAR7;
    VAR4->VAR8 = 1;
    VAR4->VAR9 = VAR2->VAR9;
    VAR4->VAR10 = VAR2->VAR10;
    VAR4->VAR11.VAR12 = 1 << 16;
    VAR4->VAR13 = -1;
    VAR4->VAR14 = -1;
    VAR4->VAR15 = 0;
    VAR4->VAR16 = VAR17;
    for (VAR5 = 0; VAR5 < VAR18; VAR5++)
        VAR4->VAR19[VAR5] = VAR17;
    FUN2(VAR4);
    VAR2->VAR20 = VAR21;
    VAR4->VAR22 = (VAR2->VAR23 & VAR24) ? VAR25 : 1;
    VAR4->VAR26 = FUN3(VAR4->VAR22, sizeof(*VAR4->VAR26));
    if (!VAR4->VAR26)
    {
        VAR4->VAR22 = 0;
        return FUN4(VAR27);
    }
    for (VAR5 = 0; VAR5 < VAR28; VAR5++)
    {
        VAR4->VAR29[VAR5].VAR30 = FUN5();
        if (!VAR4->VAR29[VAR5].VAR30)
            return FUN4(VAR27);
    }
    VAR4->VAR31.VAR30 = FUN5();
    if (!VAR4->VAR31.VAR30)
        return FUN4(VAR27);
    for (VAR5 = 0; VAR5 < VAR4->VAR22; VAR5++)
        VAR4->VAR26[VAR5].VAR32 = VAR4;
    return 0;
}