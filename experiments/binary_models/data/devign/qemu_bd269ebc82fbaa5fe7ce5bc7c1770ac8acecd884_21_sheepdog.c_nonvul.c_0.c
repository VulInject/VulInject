static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    VAR5 *VAR6 = VAR2->VAR7;
    SheepdogVdiReq VAR8;
    VAR9 *VAR10 = (VAR9 *)&VAR8;
    unsigned int VAR11, VAR12 = 0;
    int VAR13, VAR14;
    FUN2("", VAR6->VAR15);
    VAR13 = FUN3(VAR6, &VAR4);
    if (VAR13 < 0)
    {
        FUN4(VAR4);
        return;
    }
    memset(&VAR8, 0, sizeof(VAR8));
    VAR8.VAR16 = VAR17;
    VAR8.VAR18 = VAR19;
    VAR8.VAR20 = VAR6->VAR21.VAR22;
    VAR11 = strlen(VAR6->VAR15) + 1;
    VAR8.VAR23 = VAR11;
    VAR8.VAR24 = VAR25;
    VAR14 = FUN5(VAR13, VAR6->VAR2, (VAR26 *)&VAR8, VAR6->VAR15, &VAR11, &VAR12);
    FUN6(VAR13);
    if (!VAR14 && VAR10->VAR27 != VAR28 && VAR10->VAR27 != VAR29)
    {
        FUN7("", FUN8(VAR10->VAR27), VAR6->VAR15);
    }
    FUN9(FUN10(VAR2), VAR6->VAR13, false, NULL, NULL, NULL, NULL);
    FUN6(VAR6->VAR13);
    FUN11(VAR6->VAR30);
}