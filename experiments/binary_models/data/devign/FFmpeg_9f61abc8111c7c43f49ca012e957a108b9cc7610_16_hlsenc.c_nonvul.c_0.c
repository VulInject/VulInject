static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8;
    int64_t VAR9 = 0;
    int VAR10 = 0;
    VAR11 *VAR12 = NULL;
    char VAR13[1024];
    int64_t VAR14 = FUN2(VAR5->VAR15, VAR5->VAR14 - VAR5->VAR16);
    snprintf(VAR13, sizeof(VAR13), "", VAR2->VAR17);
    if ((VAR10 = VAR2->FUN3(VAR2, &VAR12, VAR13, VAR18, NULL)) < 0)
        goto VAR19;
    for (VAR8 = VAR5->VAR20; VAR8; VAR8 = VAR8->VAR21)
    {
        if (VAR9 < VAR8->VAR22)
            VAR9 = VAR8->VAR22;
    }
    FUN4(VAR12, "");
    FUN4(VAR12, "", VAR5->VAR23);
    if (VAR5->VAR24 == 0 || VAR5->VAR24 == 1)
    {
        FUN4(VAR12, "", VAR5->VAR24 == 0 ? "" : "");
    }
    FUN4(VAR12, "" VAR25 "", FUN5(VAR9, 1, VAR26, VAR27));
    FUN4(VAR12, "" VAR25 "", VAR14);
    FUN6(VAR2, VAR28, "" VAR25 "", VAR14);
    for (VAR8 = VAR5->VAR20; VAR8; VAR8 = VAR8->VAR21)
    {
        if (VAR5->VAR23 > 2)
            FUN4(VAR12, "", (double)VAR8->VAR22 / VAR26);
        else
            FUN4(VAR12, "" VAR25 "", FUN7(VAR8->VAR22, 1, VAR26));
        if (VAR5->VAR29)
            FUN4(VAR12, "", VAR5->VAR29);
        FUN4(VAR12, "", VAR8->VAR30);
    }
    if (VAR3)
        FUN4(VAR12, "");
VAR19:
    FUN8(VAR2, &VAR12);
    if (VAR10 >= 0)
        FUN9(VAR13, VAR2->VAR17);
    return VAR10;
}