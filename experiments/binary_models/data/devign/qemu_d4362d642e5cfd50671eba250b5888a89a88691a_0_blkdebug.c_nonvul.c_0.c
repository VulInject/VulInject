static int FUN1(VAR1 *VAR2, void *VAR3)
{
    struct VAR4 *VAR5 = VAR3;
    VAR6 *VAR7 = VAR5->VAR7;
    const char *VAR8;
    BlkDebugEvent VAR9;
    struct VAR10 *VAR11;
    VAR8 = FUN2(VAR2, "");
    if (!VAR8)
    {
        FUN3(VAR5->VAR12, "");
        return -1;
    }
    else if (FUN4(VAR8, &VAR9) < 0)
    {
        FUN3(VAR5->VAR12, ""%VAR7\"", VAR8);
        return -1;
    }
    VAR11 = FUN5(sizeof(*VAR11));
    *VAR11 = (struct VAR10){
        .VAR9 = VAR9,
        .VAR13 = VAR5->VAR13,
        .VAR14 = FUN6(VAR2, "", 0),
    };
    switch (VAR5->VAR13)
    {
    case VAR15:
        VAR11->VAR16.VAR17.VAR18 = FUN6(VAR2, "", VAR19);
        VAR11->VAR16.VAR17.VAR20 = FUN7(VAR2, "", 0);
        VAR11->VAR16.VAR17.VAR21 = FUN7(VAR2, "", 0);
        VAR11->VAR16.VAR17.VAR22 = FUN6(VAR2, "", -1);
        break;
    case VAR23:
        VAR11->VAR16.VAR24.VAR25 = FUN6(VAR2, "", 0);
        break;
    case VAR26:
        VAR11->VAR16.VAR27.VAR28 = FUN8(FUN2(VAR2, ""));
        break;
    };
    FUN9(&VAR7->VAR29[VAR9], VAR11, VAR30);
    return 0;
}