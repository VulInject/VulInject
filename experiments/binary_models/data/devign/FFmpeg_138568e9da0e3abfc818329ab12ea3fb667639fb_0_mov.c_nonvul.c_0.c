static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOV_atom_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8->VAR9[VAR2->VAR8->VAR10 - 1];
    VAR11 *VAR12 = VAR7->VAR13;
    unsigned int VAR14, VAR15;
    FUN2(VAR4);
    FUN3(VAR4);
    VAR15 = FUN4(VAR4);
    if (VAR15 >= VAR16 / sizeof(VAR17))
        return -1;
    VAR12->VAR18 = VAR15;
    VAR12->VAR19 = FUN5(VAR15 * sizeof(VAR17));
    if (!VAR12->VAR19)
        return -1;
    FUN6(VAR2->VAR8, "", VAR2->VAR8->VAR10 - 1, VAR15);
    for (VAR14 = 0; VAR14 < VAR15; VAR14++)
    {
        int VAR20 = FUN4(VAR4);
        int VAR21 = FUN4(VAR4);
        if (VAR21 < 0)
        {
            FUN7(VAR2->VAR8, VAR22, "");
            VAR12->VAR18 = 0;
            FUN8(VAR4, 8 * (VAR15 - VAR14 - 1));
            break;
        }
        VAR12->VAR19[VAR14].VAR20 = VAR20;
        VAR12->VAR19[VAR14].VAR21 = VAR21;
        VAR12->VAR23 = FUN9(VAR12->VAR23, VAR21);
    }
    return 0;
}