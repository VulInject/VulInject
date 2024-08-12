int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7;
    if (VAR5)
    {
        assert(VAR4->VAR8.VAR9[0]);
        VAR4->VAR5 = 1;
    }
    else
    {
        assert(!VAR4->VAR8.VAR10[0]);
        if (FUN2(VAR2, VAR4) < 0)
            return -1;
        VAR2->VAR11 = VAR4->VAR8.VAR11[0];
        VAR2->VAR12 = VAR4->VAR8.VAR11[1];
    }
    if (!VAR4->VAR13)
        VAR7 = FUN3(VAR2, VAR4);
    else
        VAR7 = FUN4(VAR4);
    if (VAR7 < 0)
        goto VAR14;
    if (VAR2->VAR15)
    {
        VAR4->VAR16 = (VAR17 *)VAR4->VAR18->VAR9;
        VAR4->VAR19 = (VAR17 *)VAR4->VAR20->VAR9;
        VAR4->VAR21 = VAR4->VAR22->VAR9;
    }
    VAR4->VAR23 = VAR4->VAR24->VAR9;
    VAR4->VAR25 = VAR4->VAR13->VAR9 + 2 * VAR2->VAR26 + 1;
    VAR4->VAR27 = (VAR28 *)VAR4->VAR29->VAR9 + 2 * VAR2->VAR26 + 1;
    if (VAR4->VAR30[0])
    {
        for (VAR6 = 0; VAR6 < 2; VAR6++)
        {
            VAR4->VAR31[VAR6] = (FUN5(*)[2])VAR4->VAR30[VAR6]->VAR9 + 4;
            VAR4->VAR32[VAR6] = VAR4->VAR33[VAR6]->VAR9;
        }
    }
    return 0;
VAR14:
    FUN6(VAR2->VAR34, VAR35, "");
    FUN7(VAR2, VAR4);
    FUN8(VAR4);
    return FUN9(VAR36);
}