static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5;
    int64_t VAR6 = FUN2() >> VAR7;
    VAR8 = FUN3(VAR6);
    FUN4(VAR8, 0, VAR6);
    VAR9 = VAR6;
    VAR10 = false;
    VAR11 = 0;
    if (FUN5())
    {
        FUN6();
        VAR12.VAR13 = FUN7(FUN8() / VAR14, VAR14);
        if (!VAR12.VAR13)
        {
            FUN9();
            FUN10("");
            return -1;
        }
        FUN11(&VAR12.VAR15);
        FUN9();
        VAR12.VAR16 = FUN12(VAR14);
        if (!VAR12.VAR16)
        {
            FUN10("");
            return -1;
        }
        VAR12.VAR17 = FUN13(VAR14);
        if (!VAR12.VAR17)
        {
            FUN10("");
            FUN14(VAR12.VAR16);
            VAR12.VAR16 = NULL;
            return -1;
        }
        FUN15();
    }
    FUN6();
    FUN16();
    VAR18 = 0;
    FUN17();
    FUN18();
    FUN19();
    FUN9();
    FUN20(VAR2, FUN21() | VAR19);
    FUN22(VAR5, &VAR20.VAR21, VAR22)
    {
        FUN23(VAR2, strlen(VAR5->VAR23));
        FUN24(VAR2, (VAR24 *)VAR5->VAR23, strlen(VAR5->VAR23));
        FUN20(VAR2, VAR5->VAR25);
    }
    FUN25();
    FUN26(VAR2, VAR26);
    FUN27(VAR2, VAR26);
    FUN20(VAR2, VAR27);
    return 0;
}