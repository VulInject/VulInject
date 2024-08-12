static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOV_atom_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8->VAR9[VAR2->VAR8->VAR10 - 1];
    VAR11 *VAR12 = (VAR11 *)VAR7->VAR13;
    int VAR14, VAR15;
    FUN2("", VAR5);
    FUN3(VAR4);
    FUN3(VAR4);
    FUN3(VAR4);
    FUN3(VAR4);
    VAR14 = FUN4(VAR4);
    FUN5(NULL, VAR16, "", VAR2->VAR8->VAR10 - 1, VAR14);
    VAR12->VAR17 = VAR14;
    VAR12->VAR18 = (VAR19 *)FUN6(VAR14 * sizeof(VAR19));
    if (!VAR12->VAR18)
        return -1;
    for (VAR15 = 0; VAR15 < VAR14; VAR15++)
    {
        VAR12->VAR18[VAR15].VAR20 = FUN4(VAR4);
        VAR12->VAR18[VAR15].VAR21 = FUN4(VAR4);
        VAR12->VAR18[VAR15].VAR22 = FUN4(VAR4);
    }
    return 0;
}