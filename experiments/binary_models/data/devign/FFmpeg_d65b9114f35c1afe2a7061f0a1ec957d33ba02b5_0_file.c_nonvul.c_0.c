static int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    struct VAR8 *VAR9;
    char *VAR10 = NULL;
    *VAR4 = FUN2();
    if (!*VAR4)
        return FUN3(VAR11);
    do
    {
        VAR12 = 0;
        VAR9 = FUN4(VAR6->VAR9);
        if (!VAR9)
        {
            FUN5(VAR4);
            return FUN3(VAR12);
        }
    } while (!strcmp(VAR9->VAR13, "") || !strcmp(VAR9->VAR13, ""));
    VAR10 = FUN6(VAR2->VAR14, VAR9->VAR13);
    if (VAR10)
    {
        struct stat VAR15;
        if (!FUN7(VAR10, &VAR15))
        {
            if (FUN8(VAR15.VAR16))
                (*VAR4)->VAR17 = VAR18;
            else if (FUN9(VAR15.VAR16))
                (*VAR4)->VAR17 = VAR19;
            else if (FUN10(VAR15.VAR16))
                (*VAR4)->VAR17 = VAR20;
            else if (FUN11(VAR15.VAR16))
                (*VAR4)->VAR17 = VAR21;
            else if (FUN12(VAR15.VAR16))
                (*VAR4)->VAR17 = VAR22;
            else if (FUN13(VAR15.VAR16))
                (*VAR4)->VAR17 = VAR23;
            else if (FUN14(VAR15.VAR16))
                (*VAR4)->VAR17 = VAR24;
            else
                (*VAR4)->VAR17 = VAR25;
            (*VAR4)->VAR26 = VAR15.VAR27;
            (*VAR4)->VAR28 = VAR15.VAR29;
            (*VAR4)->VAR30 = VAR15.VAR31;
            (*VAR4)->VAR32 = VAR15.VAR16 & 0777;
            (*VAR4)->VAR33 = FUN15(1000000) * VAR15.VAR34;
            (*VAR4)->VAR35 = FUN15(1000000) * VAR15.VAR36;
            (*VAR4)->VAR37 = FUN15(1000000) * VAR15.VAR38;
        }
        FUN16(VAR10);
    }
    (*VAR4)->VAR39 = FUN17(VAR9->VAR13);
    return 0;
    return FUN3(VAR40);
}