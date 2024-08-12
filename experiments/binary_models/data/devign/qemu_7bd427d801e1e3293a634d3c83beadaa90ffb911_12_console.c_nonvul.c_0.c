static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    static int VAR7;
    VAR6 = VAR2->VAR8;
    VAR2->VAR9 = VAR10;
    VAR2->VAR11 = VAR12;
    VAR6->VAR13.VAR14 = VAR6->VAR15;
    VAR6->VAR13.VAR16 = sizeof(VAR6->VAR15);
    VAR6->VAR17 = FUN2(VAR18, VAR19, VAR6);
    VAR6->VAR4 = VAR4;
    if (!VAR7)
    {
        VAR7 = 1;
        FUN3(VAR6->VAR4);
    }
    VAR6->VAR20 = 0;
    VAR6->VAR21 = 0;
    VAR6->VAR22 = VAR23;
    VAR6->VAR24 = 0;
    VAR6->VAR25 = 0;
    if (VAR6->VAR26 == VAR27)
    {
        VAR6->VAR28 = FUN4(VAR6->VAR4);
        VAR6->VAR29 = FUN5(VAR6->VAR4);
    }
    VAR6->VAR30 = VAR31;
    VAR6->VAR32 = VAR33;
    VAR6->VAR34 = VAR6;
    VAR6->VAR35.VAR36 = 0;
    VAR6->VAR35.VAR37 = 0;
    VAR6->VAR35.VAR38 = 0;
    VAR6->VAR35.VAR39 = 0;
    VAR6->VAR35.VAR40 = 0;
    VAR6->VAR35.VAR41 = VAR42;
    VAR6->VAR35.VAR43 = VAR44;
    VAR6->VAR45 = VAR6->VAR35;
    FUN6(VAR6);
    if (VAR2->VAR46)
    {
        char VAR47[128];
        int VAR48;
        VAR6->VAR45.VAR43 = VAR49;
        VAR48 = snprintf(VAR47, sizeof(VAR47), "", VAR2->VAR46);
        FUN7(VAR2, (VAR50 *)VAR47, VAR48);
        VAR6->VAR45 = VAR6->VAR35;
    }
    FUN8(VAR2);
    if (VAR2->VAR51)
        VAR2->FUN9(VAR2);
}