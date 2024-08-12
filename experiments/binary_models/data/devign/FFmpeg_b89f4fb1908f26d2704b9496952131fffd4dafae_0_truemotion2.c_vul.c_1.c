static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *const VAR12 = VAR2->VAR13;
    VAR14 *const VAR15 = (VAR14 *)&VAR12->VAR16;
    int VAR17, VAR18, VAR19;
    VAR7 *VAR20;
    VAR20 = FUN2(VAR9 + VAR21);
    if (!VAR20)
    {
        FUN3(VAR2, VAR22, "");
        return -1;
    }
    VAR15->VAR23 = 1;
    VAR15->VAR24 = VAR25 | VAR26 | VAR27;
    if (VAR2->FUN4(VAR2, VAR15) < 0)
    {
        FUN3(VAR2, VAR22, "");
        FUN5(VAR20);
        return -1;
    }
    VAR12->VAR28.FUN6((VAR29 *)VAR20, (const VAR29 *)VAR8, VAR9 >> 2);
    VAR18 = FUN7(VAR12, VAR20);
    if (VAR18 == -1)
    {
        FUN5(VAR20);
        return -1;
    }
    for (VAR17 = 0; VAR17 < VAR30; VAR17++)
    {
        VAR19 = FUN8(VAR12, VAR20 + VAR18, VAR31[VAR17]);
        if (VAR19 == -1)
        {
            FUN5(VAR20);
            return -1;
        }
        VAR18 += VAR19;
    }
    VAR15->VAR32 = FUN9(VAR12, VAR15);
    if (VAR15->VAR32)
        VAR15->VAR33 = VAR34;
    else
        VAR15->VAR33 = VAR35;
    VAR12->VAR36 = !VAR12->VAR36;
    *VAR4 = sizeof(VAR14);
    *(VAR14 *)VAR3 = VAR12->VAR16;
    FUN5(VAR20);
    return VAR9;
}