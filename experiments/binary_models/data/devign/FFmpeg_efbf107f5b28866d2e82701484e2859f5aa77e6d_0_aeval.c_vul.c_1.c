static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    char *VAR7 = FUN2(VAR5->VAR8);
    char *VAR9, *VAR10, *VAR11;
    double (*const *VAR12)(void *, double) = NULL;
    const char *const *VAR13 = NULL;
    int VAR14, VAR15 = 0;
    if (!VAR7)
        return FUN3(VAR16);
    if (!VAR5->VAR8)
    {
        FUN4(VAR2, VAR17, "");
        return FUN3(VAR18);
    }
    if (!strcmp(VAR2->VAR19->VAR20, ""))
    {
        VAR12 = VAR21;
        VAR13 = VAR22;
    }
    if (!FUN5((void **)&VAR5->VAR9, &VAR5->VAR23, sizeof(*VAR5->VAR9), NULL))
    {
        VAR15 = FUN3(VAR16);
        goto VAR24;
    }
    VAR5->VAR9[VAR5->VAR23 - 1] = NULL;
    VAR15 = FUN6(&VAR5->VAR9[VAR5->VAR23 - 1], VAR25, VAR26, VAR13, VAR12, NULL, NULL, 0, VAR2);
    if (VAR15 < 0)
        goto VAR24;
}
while (0)
    for (VAR14 = 0; VAR14 < VAR5->VAR23; VAR14++)
    {
        FUN7(VAR5->VAR9[VAR14]);
        VAR5->VAR9[VAR14] = NULL;
    }
FUN8(&VAR5->VAR9);
VAR5->VAR23 = 0;
VAR11 = VAR7;
while (VAR9 = FUN9(VAR11, "", &VAR11))
{
    FUN10(VAR9);
    VAR10 = VAR9;
}
if (VAR3 > VAR5->VAR23)
    for (VAR14 = VAR5->VAR23; VAR14 < VAR3; VAR14++)
        FUN10(VAR10);
if (VAR3 > 0 && VAR5->VAR23 != VAR3)
{
    FUN4(VAR2, VAR17, ""
                              "",
           VAR5->VAR23, VAR3);
    VAR15 = FUN3(VAR18);
    goto VAR24;
}
VAR24 : FUN11(VAR7);
return VAR15;
}