static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5;
    int64_t VAR6 = FUN2() >> VAR7;
    VAR8 = FUN3(VAR6);
    FUN4(VAR8, 1, VAR6);
    VAR9 = VAR6;
    VAR10 = 0;
    FUN5();
    if (FUN6())
    {
        VAR11.VAR12 = FUN7(FUN8() / VAR13, VAR13);
        if (!VAR11.VAR12)
        {
            FUN9("");
            return -1;
        }
        VAR11.VAR14 = FUN10(VAR13);
        VAR11.VAR15 = FUN11(VAR13);
        FUN12();
    }
    FUN13();
    FUN14();
    FUN15(VAR2, FUN16() | VAR16);
    FUN17(VAR5, &VAR17.VAR18, VAR19)
    {
        FUN18(VAR2, strlen(VAR5->VAR20));
        FUN19(VAR2, (VAR21 *)VAR5->VAR20, strlen(VAR5->VAR20));
        FUN15(VAR2, VAR5->VAR22);
    }
    FUN15(VAR2, VAR23);
    return 0;
}