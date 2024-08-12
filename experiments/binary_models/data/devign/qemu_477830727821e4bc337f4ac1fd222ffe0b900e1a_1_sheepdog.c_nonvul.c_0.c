static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    int VAR5, VAR6;
    uint32_t VAR7 = 0;
    VAR8 *VAR9 = VAR2->VAR10;
    char VAR11[VAR12], VAR13[VAR14];
    uint32_t VAR15;
    char *VAR16 = NULL;
    FUN2(VAR3, "", (const char **)&VAR3);
    FUN3(&VAR9->VAR17);
    FUN3(&VAR9->VAR18);
    VAR9->VAR6 = -1;
    memset(VAR11, 0, sizeof(VAR11));
    memset(VAR13, 0, sizeof(VAR13));
    if (FUN4(VAR9, VAR3, VAR11, &VAR15, VAR13) < 0)
    {
        VAR5 = -VAR19;
        goto VAR20;
    }
    VAR9->VAR6 = FUN5(VAR9);
    if (VAR9->VAR6 < 0)
    {
        VAR5 = VAR9->VAR6;
        goto VAR20;
    }
    VAR5 = FUN6(VAR9, VAR11, VAR15, VAR13, &VAR7, 0);
    if (VAR5)
    {
        goto VAR20;
    }
    VAR9->VAR21 = VAR22;
    if (VAR4 & VAR23)
    {
        VAR9->VAR21 = VAR24;
    }
    if (VAR15 || VAR13[0] != '')
    {
        FUN7("" VAR25 "", VAR7);
        VAR9->VAR26 = true;
    }
    VAR6 = FUN8(VAR9->VAR27, VAR9->VAR28);
    if (VAR6 < 0)
    {
        FUN9("");
        VAR5 = VAR6;
        goto VAR20;
    }
    VAR16 = FUN10(VAR29);
    VAR5 = FUN11(VAR6, VAR16, FUN12(VAR7), 0, VAR29, 0, VAR9->VAR21);
    FUN13(VAR6);
    if (VAR5)
    {
        goto VAR20;
    }
    memcpy(&VAR9->VAR30, VAR16, sizeof(VAR9->VAR30));
    VAR9->VAR31 = VAR32;
    VAR9->VAR33 = 0;
    VAR2->VAR34 = VAR9->VAR30.VAR35 / VAR36;
    FUN14(VAR9->VAR37, sizeof(VAR9->VAR37), VAR11);
    FUN15(&VAR9->VAR38);
    FUN16(VAR16);
    return 0;
VAR20:
    FUN17(VAR9->VAR6, NULL, NULL, NULL, NULL);
    if (VAR9->VAR6 >= 0)
    {
        FUN13(VAR9->VAR6);
    }
    FUN16(VAR16);
    return VAR5;
}