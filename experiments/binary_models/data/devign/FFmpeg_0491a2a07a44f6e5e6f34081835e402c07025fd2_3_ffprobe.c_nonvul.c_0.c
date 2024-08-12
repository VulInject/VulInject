static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    char VAR8[128];
    VAR9 *VAR10 = VAR4->VAR11[VAR6->VAR12];
    struct print_buf VAR13 = {.VAR14 = NULL};
    const char *VAR14;
    FUN2("");
    VAR14 = FUN3(VAR10->VAR15->VAR16);
    if (VAR14)
        FUN4("", VAR14);
    else
        FUN5("", "");
    FUN6("", VAR6->VAR12);
    FUN7("", VAR6->VAR17);
    FUN8("", VAR6->VAR17, &VAR10->VAR18);
    FUN7("", VAR6->VAR19);
    FUN8("", VAR6->VAR19, &VAR10->VAR18);
    FUN7("", VAR6->VAR20);
    FUN8("", VAR6->VAR20, &VAR10->VAR18);
    FUN9("", VAR6->VAR21, VAR22);
    if (VAR6->VAR23 != -1)
        FUN10("", "" VAR24, VAR6->VAR23);
    else
        FUN5("", "");
    FUN10("", "", VAR6->VAR25 & VAR26 ? '' : '');
    FUN11("");
    FUN12(VAR13.VAR14);
    FUN13(VAR27);
}