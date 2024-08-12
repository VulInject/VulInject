static void FUN1(VAR1 *VAR2, bool VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7 = NULL;
    VAR8 *VAR9 = NULL;
    gint VAR10;
    ssize_t VAR11;
    int VAR12;
    for (VAR12 = 0; VAR12 < VAR2->VAR13->VAR14; ++VAR12)
    {
        const char *VAR15 = VAR2->VAR16 ? VAR2->VAR16 : "";
        VAR5 = &FUN2(VAR2->VAR13, VAR4, VAR12);
        FUN3(VAR5->VAR17);
        if (VAR3)
        {
            uint32_t VAR18 = FUN4(VAR5->VAR19.VAR18);
            VAR9 = FUN5("", VAR20, VAR2->VAR21, (VAR8 *)&VAR18, VAR15);
            VAR10 = FUN6(VAR9, VAR22 | VAR23 | VAR24, VAR25 | VAR26 | VAR27 | VAR28 | VAR29);
        }
        else
        {
            VAR10 = FUN7("", &VAR5->VAR9, &VAR7);
            FUN8(VAR7);
        }
        FUN3(VAR10 >= 0);
        VAR11 = FUN9(VAR10, VAR5, sizeof(VAR30));
        FUN3(VAR11 == sizeof(VAR30));
        VAR11 = FUN9(VAR10, VAR5->VAR17, VAR5->VAR31);
        FUN3(VAR11 == VAR5->VAR31);
        close(VAR10);
        FUN10(VAR9);
    }
}