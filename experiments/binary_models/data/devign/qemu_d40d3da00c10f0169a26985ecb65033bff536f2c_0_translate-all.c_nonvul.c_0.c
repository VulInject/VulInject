void FUN1(VAR1 *VAR2, fprintf_function VAR3)
{
    int VAR4, VAR5, VAR6;
    int VAR7, VAR8, VAR9;
    VAR10 *VAR11;
    struct qht_stats VAR12;
    FUN2();
    VAR5 = 0;
    VAR6 = 0;
    VAR9 = 0;
    VAR7 = 0;
    VAR8 = 0;
    for (VAR4 = 0; VAR4 < VAR13.VAR14.VAR15; VAR4++)
    {
        VAR11 = VAR13.VAR14.VAR16[VAR4];
        VAR5 += VAR11->VAR17;
        if (VAR11->VAR17 > VAR6)
        {
            VAR6 = VAR11->VAR17;
        }
        if (VAR11->VAR18[1] != -1)
        {
            VAR9++;
        }
        if (VAR11->VAR19[0] != VAR20)
        {
            VAR7++;
            if (VAR11->VAR19[1] != VAR20)
            {
                VAR8++;
            }
        }
    }
    FUN3(VAR2, "");
    FUN3(VAR2, "", VAR13.VAR21 - VAR13.VAR22, VAR13.VAR23 - VAR13.VAR22);
    FUN3(VAR2, "", VAR13.VAR14.VAR15);
    FUN3(VAR2, "", VAR13.VAR14.VAR15 ? VAR5 / VAR13.VAR14.VAR15 : 0, VAR6);
    FUN3(VAR2, "", VAR13.VAR14.VAR15 ? (VAR13.VAR21 - VAR13.VAR22) / VAR13.VAR14.VAR15 : 0, VAR5 ? (double)(VAR13.VAR21 - VAR13.VAR22) / VAR5 : 0);
    FUN3(VAR2, "", VAR9, VAR13.VAR14.VAR15 ? (VAR9 * 100) / VAR13.VAR14.VAR15 : 0);
    FUN3(VAR2, "", VAR7, VAR13.VAR14.VAR15 ? (VAR7 * 100) / VAR13.VAR14.VAR15 : 0, VAR8, VAR13.VAR14.VAR15 ? (VAR8 * 100) / VAR13.VAR14.VAR15 : 0);
    FUN4(&VAR13.VAR14.VAR24, &VAR12);
    FUN5(VAR2, VAR3, VAR12);
    FUN6(&VAR12);
    FUN3(VAR2, "");
    FUN3(VAR2, "", FUN7(&VAR13.VAR14.VAR25));
    FUN3(VAR2, "", VAR13.VAR14.VAR26);
    FUN3(VAR2, "", VAR27);
    FUN8(VAR2, VAR3);
    FUN9();
}