static void FUN1(int VAR1, struct VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7, VAR8 *VAR9)
{
    struct VAR10 *VAR11;
    abi_ulong VAR12, VAR13;
    VAR12 = FUN2(VAR3, VAR9);
    if (!FUN3(VAR14, VAR11, VAR12, 0))
    {
        goto VAR15;
    }
    FUN4(0, &VAR11->VAR16.VAR17);
    FUN4(0, &VAR11->VAR16.VAR18);
    FUN4(VAR19.VAR20, &VAR11->VAR16.VAR21.VAR20);
    FUN4(FUN5(VAR9->VAR22[31]), &VAR11->VAR16.VAR21.VAR23);
    FUN4(VAR19.VAR24, &VAR11->VAR16.VAR21.VAR24);
    FUN6(VAR11, VAR9, VAR7);
    if (VAR3->VAR25 & VAR26)
    {
        VAR13 = VAR3->VAR27;
    }
    else
    {
        FUN4(0xd2801168, &VAR11->VAR28[0]);
        FUN4(0xd4000001, &VAR11->VAR28[1]);
        VAR13 = VAR12 + FUN7(struct VAR10, VAR28);
    }
    VAR9->VAR22[0] = VAR1;
    VAR9->VAR22[31] = VAR12;
    VAR9->VAR22[29] = VAR9->VAR22[31] + FUN7(struct VAR10, VAR29);
    VAR9->VAR30 = VAR3->VAR31;
    VAR9->VAR22[30] = VAR13;
    if (VAR5)
    {
        FUN8(&VAR11->VAR5, VAR5);
        VAR9->VAR22[1] = VAR12 + FUN7(struct VAR10, VAR5);
        VAR9->VAR22[2] = VAR12 + FUN7(struct VAR10, VAR16);
    }
    FUN9(VAR11, VAR12, 1);
    return;
VAR15:
    FUN9(VAR11, VAR12, 1);
    FUN10(VAR32);
}