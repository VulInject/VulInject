static void FUN1(const char *VAR1, int VAR2)
{
    const char *VAR3 = NULL;
    assert(!VAR4);
    switch (VAR2)
    {
    case VAR5:
        VAR3 = "";
        break;
    case VAR6:
        VAR3 = "";
        break;
    default:
        fprintf(VAR7, "");
        FUN2(1);
    }
    FUN3(VAR8);
    FUN4();
    VAR4 = fopen(VAR1, VAR3);
    if (VAR4 == NULL)
    {
        fprintf(VAR7, "", VAR1, strerror(VAR9));
        FUN2(1);
    }
    VAR10 = FUN5(VAR1);
    VAR11 = VAR2;
    VAR12.VAR13 = -1;
    VAR12.VAR14 = 0;
    VAR12.VAR15 = 0;
    VAR12.VAR16 = 0;
    if (VAR11 == VAR5)
    {
        FUN6(VAR4, VAR17, VAR18);
    }
    else if (VAR11 == VAR6)
    {
        unsigned int VAR19 = FUN7();
        if (VAR19 != VAR20)
        {
            fprintf(VAR7, "");
            FUN2(1);
        }
        FUN6(VAR4, VAR17, VAR18);
        FUN8();
    }
    FUN9();
}