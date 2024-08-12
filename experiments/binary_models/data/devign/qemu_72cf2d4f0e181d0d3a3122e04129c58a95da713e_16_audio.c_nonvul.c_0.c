static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR5;
    VAR6 *VAR7;
    FUN2(VAR2);
    for (VAR7 = VAR4->VAR8.VAR9; VAR7; VAR7 = VAR7->VAR10.VAR11)
    {
        VAR12 *VAR13;
        VAR14 *VAR15;
        VAR1 *VAR16 = &VAR7->VAR2;
        VAR13 = FUN3(VAR17, 1, sizeof(*VAR13));
        if (!VAR13)
        {
            FUN4("", sizeof(*VAR13));
            return -1;
        }
        VAR13->VAR7 = VAR7;
        VAR15 = &VAR13->VAR15;
        VAR15->VAR2 = VAR16;
        VAR15->VAR18 = VAR2->VAR18;
        VAR15->VAR19 = 1;
        VAR15->VAR20 = VAR2->VAR21;
        VAR15->VAR22 = VAR23;
        VAR15->VAR24 = ((VAR25)VAR16->VAR18.VAR26 << 32) / VAR15->VAR18.VAR26;
        VAR15->VAR27 = FUN5(VAR15->VAR18.VAR26, VAR16->VAR18.VAR26);
        if (!VAR15->VAR27)
        {
            FUN4("", FUN6(VAR15));
            FUN7(VAR15);
            return -1;
        }
        FUN8(&VAR16->VAR28, VAR15, VAR10);
        FUN8(&VAR2->VAR8, VAR13, VAR10);
        asprintf(&VAR15->VAR29, "", VAR2, VAR15->VAR18.VAR26, VAR15->VAR18.VAR30, VAR15->VAR18.VAR31);
        FUN4("", VAR15->VAR29, VAR15->VAR20);
        if (VAR15->VAR20)
        {
            FUN9(VAR7, 1);
        }
    }
    return 0;
}