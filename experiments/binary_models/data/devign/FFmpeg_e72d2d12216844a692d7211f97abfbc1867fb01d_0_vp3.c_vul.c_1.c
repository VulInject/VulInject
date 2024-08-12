static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    GetBitContext VAR14;
    static int VAR15 = 0;
    int VAR16;
    FUN2(&VAR14, VAR8, VAR9 * 8);
    if (VAR12->VAR17 && FUN3(&VAR14))
    {
        FUN4(VAR2, VAR18, "");
        return -1;
    }
    VAR12->VAR19 = !FUN3(&VAR14);
    if (!VAR12->VAR17)
        FUN5(&VAR14, 1);
    for (VAR16 = 0; VAR16 < 3; VAR16++)
        VAR12->VAR20[VAR16] = VAR12->VAR21[VAR16];
    VAR12->VAR22 = 0;
    do
    {
        VAR12->VAR21[VAR12->VAR22++] = FUN6(&VAR14, 6);
    } while (VAR12->VAR17 >= 0x030200 && VAR12->VAR22 < 3 && FUN3(&VAR14));
    for (VAR16 = VAR12->VAR22; VAR16 < 3; VAR16++)
        VAR12->VAR21[VAR16] = -1;
    if (VAR12->VAR2->VAR23 & VAR24)
        FUN4(VAR12->VAR2, VAR25, "", VAR12->VAR19 ? "" : "", VAR15, VAR12->VAR21[0]);
    VAR15++;
    if (VAR12->VAR21[0] != VAR12->VAR20[0])
        FUN7(VAR12);
    for (VAR16 = 0; VAR16 < VAR12->VAR22; VAR16++)
        if (VAR12->VAR21[VAR16] != VAR12->VAR20[VAR16] || VAR12->VAR21[0] != VAR12->VAR20[0])
            FUN8(VAR12, VAR16);
    if (VAR2->VAR26 >= VAR27 && !VAR12->VAR19)
        return VAR9;
    VAR12->VAR28.VAR29 = 3;
    if (VAR2->FUN9(VAR2, &VAR12->VAR28) < 0)
    {
        FUN4(VAR12->VAR2, VAR18, "");
        return -1;
    }
    if (VAR12->VAR19)
    {
        if (!VAR12->VAR17)
        {
            FUN5(&VAR14, 4);
            FUN5(&VAR14, 4);
            if (VAR12->VAR30)
            {
                VAR12->VAR30 = FUN6(&VAR14, 5);
                if (VAR15 == 1)
                    FUN4(VAR12->VAR2, VAR31, "", VAR12->VAR30);
            }
        }
        if (VAR12->VAR30 || VAR12->VAR17)
        {
            if (FUN3(&VAR14))
                FUN4(VAR12->VAR2, VAR18, "");
            FUN5(&VAR14, 2);
        }
    }
    else
    {
        if (!VAR12->VAR32.VAR3[0])
        {
            FUN4(VAR12->VAR2, VAR18, "");
            VAR2->FUN10(VAR2, &VAR12->VAR28);
            return -1;
        }
    }
    VAR12->VAR28.VAR33 = VAR12->VAR33;
    VAR12->VAR28.VAR34 = 0;
    FUN11(VAR12, &VAR14);
    if (FUN12(VAR12, &VAR14))
    {
        FUN4(VAR12->VAR2, VAR18, "");
        return -1;
    }
    if (FUN13(VAR12, &VAR14))
    {
        FUN4(VAR12->VAR2, VAR18, "");
        return -1;
    }
    if (FUN14(VAR12, &VAR14))
    {
        FUN4(VAR12->VAR2, VAR18, "");
        return -1;
    }
    if (FUN15(VAR12, &VAR14))
    {
        FUN4(VAR12->VAR2, VAR18, "");
        return -1;
    }
    if (FUN16(VAR12, &VAR14))
    {
        FUN4(VAR12->VAR2, VAR18, "");
        return -1;
    }
    for (VAR16 = 0; VAR16 < 3; VAR16++)
    {
        if (VAR12->VAR35)
            VAR12->VAR36[VAR16] = 0;
        else
            VAR12->VAR36[VAR16] = ((VAR12->VAR37 >> !!VAR16) - 1) * VAR12->VAR28.VAR38[VAR16];
    }
    VAR12->VAR39 = 0;
    for (VAR16 = 0; VAR16 < VAR12->VAR40; VAR16++)
        FUN17(VAR12, VAR16);
    for (VAR16 = 0; VAR16 < 3; VAR16++)
    {
        int VAR41 = (VAR12->VAR37 >> (3 + !!VAR16)) - 1;
        FUN18(VAR12, VAR16, VAR41, VAR41 + 1);
    }
    FUN19(VAR12, VAR12->VAR37);
    *VAR4 = sizeof(VAR42);
    *(VAR42 *)VAR3 = VAR12->VAR28;
    if ((VAR12->VAR43.VAR3[0]) && (VAR12->VAR43.VAR3[0] != VAR12->VAR32.VAR3[0]))
        VAR2->FUN10(VAR2, &VAR12->VAR43);
    VAR12->VAR43 = VAR12->VAR28;
    if (VAR12->VAR19)
    {
        if (VAR12->VAR32.VAR3[0])
            VAR2->FUN10(VAR2, &VAR12->VAR32);
        VAR12->VAR32 = VAR12->VAR28;
    }
    VAR12->VAR28.VAR3[0] = NULL;
    return VAR9;
}