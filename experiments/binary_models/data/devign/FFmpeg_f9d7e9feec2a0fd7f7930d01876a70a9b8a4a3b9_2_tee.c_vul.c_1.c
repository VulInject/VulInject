static int FUN1(VAR1 *VAR2, char *VAR3, VAR4 *VAR5)
{
    int VAR6, VAR7;
    VAR8 *VAR9 = NULL;
    VAR10 *VAR11;
    char *VAR12;
    char *VAR13 = NULL, *VAR14 = NULL;
    VAR1 *VAR15 = NULL;
    VAR16 *VAR17, *VAR18;
    int VAR19;
    int VAR20;
    char *VAR21 = NULL, *VAR22 = NULL, *VAR23 = NULL, *VAR24 = NULL;
    if ((VAR7 = FUN2(VAR2, VAR3, &VAR9, &VAR12)) < 0)
        return VAR7;
    if ((VAR11 = FUN3(VAR9, VAR25, NULL, 0)))
    {
        VAR26 = VAR11->VAR27;
        VAR11->VAR27 = NULL;
        FUN4(&VAR9, VAR25, NULL, 0);
    }
}
while (0)
    FUN5("", VAR13);
FUN5("", VAR14);
VAR7 = FUN6(&VAR15, NULL, VAR13, VAR12);
if (VAR7 < 0)
    goto VAR28;
FUN7(&VAR15->VAR29, VAR2->VAR29, 0);
VAR15->VAR30 = VAR2->VAR30;
VAR15->VAR31 = VAR2->VAR31;
VAR15->VAR32 = VAR2->VAR32;
VAR5->VAR33 = FUN8(VAR2->VAR34, sizeof(*VAR5->VAR33));
if (!VAR5->VAR33)
{
    VAR7 = FUN9(VAR35);
    goto VAR28;
}
VAR19 = 0;
for (VAR6 = 0; VAR6 < VAR2->VAR34; VAR6++)
{
    VAR17 = VAR2->VAR36[VAR6];
    if (VAR14)
    {
        VAR24 = FUN10(VAR14);
        if (!VAR24)
        {
            VAR7 = FUN9(VAR35);
            goto VAR28;
        }
        VAR20 = 0;
        VAR23 = VAR24;
        VAR22 = NULL;
        while (VAR21 = FUN11(VAR23, VAR37, &VAR22))
        {
            VAR23 = NULL;
            VAR7 = FUN12(VAR2, VAR2->VAR36[VAR6], VAR21);
            if (VAR7 < 0)
            {
                FUN13(VAR2, VAR38, "", VAR21, VAR3);
                goto VAR28;
            }
            if (VAR7 != 0)
            {
                VAR20 = 1;
                break;
            }
        }
        FUN14(&VAR24);
        if (VAR20 == 0)
        {
            VAR5->VAR33[VAR6] = -1;
            continue;
        }
    }
    VAR5->VAR33[VAR6] = VAR19++;
    if (!(VAR18 = FUN15(VAR15, NULL)))
    {
        VAR7 = FUN9(VAR35);
        goto VAR28;
    }
    VAR18->VAR39 = VAR17->VAR39;
    VAR18->VAR40 = VAR17->VAR40;
    VAR18->VAR41 = VAR17->VAR41;
    VAR18->VAR42 = VAR17->VAR42;
    VAR18->VAR43 = VAR17->VAR43;
    VAR18->VAR44 = VAR17->VAR44;
    VAR18->VAR45 = VAR17->VAR45;
    VAR18->VAR46 = VAR17->VAR46;
    VAR18->VAR47 = VAR17->VAR47;
    FUN7(&VAR18->VAR29, VAR17->VAR29, 0);
    if ((VAR7 = FUN16(VAR18->VAR48, VAR17->VAR48)) < 0)
        goto VAR28;
}
if (!(VAR15->VAR49->VAR50 & VAR51))
{
    if ((VAR7 = VAR15->FUN17(VAR15, &VAR15->VAR52, VAR12, VAR53, NULL)) < 0)
    {
        FUN13(VAR2, VAR38, "", VAR3, FUN18(VAR7));
        goto VAR28;
    }
}
if ((VAR7 = FUN19(VAR15, &VAR9)) < 0)
{
    FUN13(VAR2, VAR38, "", VAR3, FUN18(VAR7));
    goto VAR28;
}
VAR5->VAR2 = VAR15;
VAR5->VAR54 = FUN8(VAR15->VAR34, sizeof(VAR4));
if (!VAR5->VAR54)
{
    VAR7 = FUN9(VAR35);
    goto VAR28;
}
VAR11 = NULL;
while (VAR11 = FUN3(VAR9, "", NULL, VAR55))
{
    const char *VAR56 = VAR11->VAR57 + strlen("");
    if (*VAR56)
    {
        if (strspn(VAR56, VAR58) != 1)
        {
            FUN13(VAR2, VAR38, ""
                                      "",
                   VAR11->VAR57, *VAR56, VAR58);
            return FUN9(VAR59);
        }
        VAR56++;
    }
    for (VAR6 = 0; VAR6 < VAR15->VAR34; VAR6++)
    {
        VAR7 = FUN12(VAR15, VAR15->VAR36[VAR6], VAR56);
        if (VAR7 < 0)
        {
            FUN13(VAR2, VAR38, ""
                                      "",
                   VAR56, VAR11->VAR57, VAR12);
            goto VAR28;
        }
        if (VAR7 > 0)
        {
            FUN13(VAR2, VAR60, ""
                                      "",
                   VAR56, VAR11->VAR27, VAR6, VAR12);
            if (VAR5->VAR54[VAR6])
            {
                FUN13(VAR2, VAR61, ""
                                            "",
                       VAR6, VAR12);
                continue;
            }
            VAR7 = FUN20(VAR2, VAR11->VAR27, &VAR5->VAR54[VAR6]);
            if (VAR7 < 0)
            {
                FUN13(VAR2, VAR38, ""
                                          "",
                       VAR11->VAR27, VAR6, VAR12);
                goto VAR28;
            }
        }
    }
    FUN4(&VAR9, VAR11->VAR57, NULL, 0);
}
if (VAR9)
{
    VAR11 = NULL;
    while ((VAR11 = FUN3(VAR9, "", VAR11, VAR55)))
        FUN13(VAR15, VAR38, "", VAR11->VAR57);
    VAR7 = VAR62;
    goto VAR28;
}
VAR28 : FUN21(VAR13);
FUN21(VAR14);
FUN22(&VAR9);
FUN14(&VAR24);
return VAR7;
}