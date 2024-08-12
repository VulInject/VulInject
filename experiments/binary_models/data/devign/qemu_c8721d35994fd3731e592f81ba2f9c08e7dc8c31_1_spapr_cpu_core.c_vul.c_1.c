void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(FUN3(VAR2));
    VAR9 *VAR10 = FUN4(FUN3(VAR2));
    VAR11 *VAR12 = FUN5(FUN3(VAR2));
    int VAR13 = VAR14 / VAR15;
    int VAR16;
    VAR5 *VAR17 = NULL;
    VAR18 *VAR19 = FUN6(VAR4);
    char *VAR20 = FUN7(VAR8->VAR21);
    const char *VAR22 = FUN8(FUN3(VAR4));
    if (strcmp(VAR20, VAR22))
    {
        FUN9(&VAR17, "", VAR20);
        goto VAR23;
    }
    if (!VAR10->VAR24 && VAR4->VAR25)
    {
        FUN9(&VAR17, "");
        goto VAR23;
    }
    if (VAR19->VAR26 != VAR15)
    {
        FUN9(&VAR17, "", VAR15);
        goto VAR23;
    }
    if (VAR19->VAR27 % VAR15)
    {
        FUN9(&VAR17, "", VAR19->VAR27);
        goto VAR23;
    }
    VAR16 = VAR19->VAR27 / VAR15;
    if (VAR16 < 0 || VAR16 >= VAR13)
    {
        FUN9(&VAR17, "", VAR19->VAR27);
        goto VAR23;
    }
    if (VAR12->VAR28[VAR16])
    {
        FUN9(&VAR17, "", VAR19->VAR27);
        goto VAR23;
    }
VAR23:
    FUN10(VAR20);
    FUN11(VAR6, VAR17);
}