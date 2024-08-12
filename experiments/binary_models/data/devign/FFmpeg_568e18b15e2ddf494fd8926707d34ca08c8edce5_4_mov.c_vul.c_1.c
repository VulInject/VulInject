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
    VAR12->VAR16 = VAR14;
    FUN5(NULL, VAR17, "", VAR12->VAR16);
    VAR12->VAR18 = (long *)FUN6(VAR14 * sizeof(long));
    if (!VAR12->VAR18)
        return -1;
    for (VAR15 = 0; VAR15 < VAR14; VAR15++)
    {
        VAR12->VAR18[VAR15] = FUN4(VAR4);
    }
    return 0;
}