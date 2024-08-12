static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    GetBitContext VAR11;
    static int VAR12 = 0;
    *VAR4 = 0;
    FUN2(&VAR11, VAR6, VAR7 * 8);
    VAR9->VAR13 = FUN3(&VAR11, 1);
    VAR9->VAR13 ^= 1;
    FUN4(&VAR11, 1);
    VAR9->VAR14 = VAR9->VAR15;
    VAR9->VAR15 = FUN3(&VAR11, 6);
    if (VAR9->VAR15 != VAR9->VAR14)
        FUN5(VAR9);
    FUN6("", VAR12, VAR9->VAR15);
    VAR12++;
    if (VAR9->VAR13)
    {
        if ((VAR9->VAR16.VAR3[0]) && (VAR9->VAR17.VAR3[0] == VAR9->VAR16.VAR3[0]))
            VAR2->FUN7(VAR2, &VAR9->VAR16);
        else if (VAR9->VAR17.VAR3[0])
            VAR2->FUN7(VAR2, &VAR9->VAR17);
        VAR9->VAR16.VAR18 = 0;
        if (VAR2->FUN8(VAR2, &VAR9->VAR16) < 0)
        {
            FUN9("");
            return -1;
        }
        memcpy(&VAR9->VAR19, &VAR9->VAR16, sizeof(VAR20));
        if (!VAR9->VAR21)
            FUN10(VAR9);
    }
    else
    {
        VAR9->VAR19.VAR18 = 0;
        if (VAR2->FUN8(VAR2, &VAR9->VAR19) < 0)
        {
            FUN9("");
            return -1;
        }
    }
    if (VAR9->VAR13)
    {
        FUN6("");
        FUN4(&VAR11, 16);
    }
    else
        FUN6("");
    FUN11(VAR9, &VAR11);
    if (!VAR9->VAR13)
    {
        memcpy(VAR9->VAR19.VAR3[0], VAR9->VAR16.VAR3[0], VAR9->VAR19.VAR22[0] * VAR9->VAR23);
        memcpy(VAR9->VAR19.VAR3[1], VAR9->VAR16.VAR3[1], VAR9->VAR19.VAR22[1] * VAR9->VAR23 / 2);
        memcpy(VAR9->VAR19.VAR3[2], VAR9->VAR16.VAR3[2], VAR9->VAR19.VAR22[2] * VAR9->VAR23 / 2);
    }
    else
    {
        if (FUN12(VAR9, &VAR11) || FUN13(VAR9, &VAR11) || FUN14(VAR9, &VAR11) || FUN15(VAR9, &VAR11))
        {
            FUN9("");
            return -1;
        }
        FUN16(VAR9, 0, VAR9->VAR24, VAR9->VAR25);
        FUN16(VAR9, VAR9->VAR26, VAR9->VAR24 / 2, VAR9->VAR25 / 2);
        FUN16(VAR9, VAR9->VAR27, VAR9->VAR24 / 2, VAR9->VAR25 / 2);
        FUN17(VAR9, 0, VAR9->VAR28, VAR9->VAR23, 0);
        FUN17(VAR9, VAR9->VAR26, VAR9->VAR28 / 2, VAR9->VAR23 / 2, 1);
        FUN17(VAR9, VAR9->VAR27, VAR9->VAR28 / 2, VAR9->VAR23 / 2, 2);
    }
    *VAR4 = sizeof(VAR20);
    *(VAR20 *)VAR3 = VAR9->VAR19;
    if ((VAR9->VAR17.VAR3[0]) && (VAR9->VAR17.VAR3[0] != VAR9->VAR16.VAR3[0]))
        VAR2->FUN7(VAR2, &VAR9->VAR17);
    memcpy(&VAR9->VAR17, &VAR9->VAR19, sizeof(VAR20));
    return VAR7;
}