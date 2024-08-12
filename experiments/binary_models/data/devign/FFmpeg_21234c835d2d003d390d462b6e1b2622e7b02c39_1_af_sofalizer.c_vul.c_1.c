static int FUN1(VAR1 *VAR2, char *VAR3, int *VAR4)
{
    struct VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    char VAR14[VAR15];
    float *VAR16, *VAR17, *VAR18, *VAR19;
    char *VAR20;
    char VAR21[VAR15];
    VAR22 *VAR23;
    char *VAR24;
    unsigned int VAR25;
    int VAR26[2];
    int VAR27;
    int VAR28;
    int VAR29;
    int VAR30 = -1;
    int VAR31 = -1;
    int VAR32;
    size_t VAR33;
    int VAR34;
    int *VAR35;
    int VAR36;
    int VAR37, VAR38;
    VAR6->VAR39.VAR8 = 0;
    VAR13 = FUN2(VAR3, VAR40, &VAR8);
    if (VAR13 != VAR41)
    {
        FUN3(VAR2, VAR42, "", VAR3);
        return FUN4(VAR43);
    }
    FUN5(VAR8, &VAR9, &VAR10, &VAR11, &VAR12);
    VAR23 = FUN6(VAR9, sizeof(*VAR23));
    if (!VAR23)
    {
        FUN7(VAR8);
        return FUN4(VAR44);
    }
    for (VAR37 = 0; VAR37 < VAR9; VAR37++)
    {
        FUN8(VAR8, VAR37, (char *)&VAR21, &VAR23[VAR37]);
        if (!FUN9("", (const char *)&VAR21, 1))
            VAR30 = VAR37;
        if (!FUN9("", (const char *)&VAR21, 1))
            VAR31 = VAR37;
    }
    if ((VAR30 == -1) || (VAR31 == -1))
    {
        FUN3(VAR2, VAR42, "");
        FUN10(&VAR23);
        FUN7(VAR8);
        return FUN4(VAR43);
    }
    VAR29 = VAR23[VAR31];
    VAR34 = VAR23[VAR30];
    FUN10(&VAR23);
    VAR13 = FUN11(VAR8, VAR45, "", &VAR33);
    if (VAR13 != VAR41)
    {
        FUN3(VAR2, VAR42, ""VAR46\"");
        FUN7(VAR8);
        return VAR47;
    }
    VAR24 = FUN12(VAR33 + 1);
    if (!VAR24)
    {
        FUN7(VAR8);
        return FUN4(VAR44);
    }
    FUN13(VAR8, VAR45, "", VAR24);
    *(VAR24 + VAR33) = 0;
    if (FUN9("", VAR24, 4))
    {
        FUN3(VAR2, VAR42, "");
        FUN10(&VAR24);
        FUN7(VAR8);
        return FUN4(VAR43);
    }
    FUN10(&VAR24);
    VAR13 = FUN11(VAR8, VAR45, "", &VAR33);
    if (VAR13 == VAR41)
    {
        VAR24 = FUN12(VAR33 + 1);
        if (VAR24)
        {
            FUN13(VAR8, VAR45, "", VAR24);
            *(VAR24 + VAR33) = 0;
            FUN3(VAR2, VAR48, "", VAR24);
            FUN10(&VAR24);
        }
    }
    VAR13 = FUN11(VAR8, VAR45, "", &VAR33);
    if (VAR13 == VAR41)
    {
        VAR24 = FUN12(VAR33 + 1);
        if (VAR24)
        {
            FUN13(VAR8, VAR45, "", VAR24);
            *(VAR24 + VAR33) = 0;
            FUN3(VAR2, VAR48, "", VAR24);
            FUN10(&VAR24);
        }
    }
    VAR13 = FUN11(VAR8, VAR45, "", &VAR33);
    if (VAR13 == VAR41)
    {
        VAR24 = FUN12(VAR33 + 1);
        if (VAR24)
        {
            FUN13(VAR8, VAR45, "", VAR24);
            *(VAR24 + VAR33) = 0;
            FUN3(VAR2, VAR48, "", VAR24);
            FUN10(&VAR24);
        }
    }
    VAR13 = FUN11(VAR8, VAR45, "", &VAR33);
    if (VAR13 != VAR41)
    {
        FUN3(VAR2, VAR42, ""VAR49\"");
        FUN7(VAR8);
        return VAR47;
    }
    VAR20 = FUN12(VAR33 + 1);
    if (!VAR20)
    {
        FUN7(VAR8);
        return FUN4(VAR44);
    }
    FUN13(VAR8, VAR45, "", VAR20);
    *(VAR20 + VAR33) = 0;
    if (FUN9("", VAR20, VAR33))
    {
        FUN3(VAR2, VAR42, "");
        FUN10(&VAR20);
        FUN7(VAR8);
        return FUN4(VAR43);
    }
    FUN10(&VAR20);
    VAR13 = FUN14(VAR8, "", &VAR27);
    VAR13 += FUN15(VAR8, VAR27, &VAR25);
    if (VAR13 != VAR41)
    {
        FUN3(VAR2, VAR42, "");
        FUN7(VAR8);
        return FUN4(VAR43);
    }
    *VAR4 = VAR25;
    VAR16 = VAR6->VAR39.VAR16 = FUN6(VAR34, sizeof(float));
    VAR17 = VAR6->VAR39.VAR17 = FUN6(VAR34, sizeof(float));
    VAR18 = VAR6->VAR39.VAR18 = FUN6(VAR34, sizeof(float));
    VAR35 = VAR6->VAR39.VAR35 = FUN16(VAR34, 2 * sizeof(int));
    VAR19 = VAR6->VAR39.VAR19 = FUN6(VAR34 * VAR29, sizeof(float) * 2);
    if (!VAR35 || !VAR16 || !VAR17 || !VAR18 || !VAR19)
    {
        FUN17(&VAR6->VAR39);
        return FUN4(VAR44);
    }
    VAR13 = FUN14(VAR8, "", &VAR32);
    VAR13 += FUN18(VAR8, VAR32, VAR19);
    if (VAR13 != VAR41)
    {
        FUN3(VAR2, VAR42, "");
        VAR38 = FUN4(VAR43);
        goto VAR50;
    }
    VAR13 = FUN14(VAR8, "", &VAR36);
    VAR13 += FUN19(VAR8, VAR36, (VAR22[2]){0, 0}, (VAR22[2]){VAR34, 1}, VAR16);
    VAR13 += FUN19(VAR8, VAR36, (VAR22[2]){0, 1}, (VAR22[2]){VAR34, 1}, VAR17);
    VAR13 += FUN19(VAR8, VAR36, (VAR22[2]){0, 2}, (VAR22[2]){VAR34, 1}, VAR18);
    if (VAR13 != VAR41)
    {
        FUN3(VAR2, VAR42, "");
        VAR38 = FUN4(VAR43);
        goto VAR50;
    }
    VAR13 = FUN14(VAR8, "", &VAR28);
    VAR13 += FUN20(VAR8, VAR28, &VAR26[0]);
    VAR13 += FUN21(VAR8, VAR26[0], VAR14);
    if (VAR13 != VAR41)
    {
        FUN3(VAR2, VAR42, "");
        VAR38 = FUN4(VAR43);
        goto VAR50;
    }
    if (!FUN9(VAR14, "", 2))
    {
        int VAR51[2];
        FUN3(VAR2, VAR52, "");
        VAR13 = FUN22(VAR8, VAR28, &VAR51[0]);
        if (VAR13 != VAR41)
        {
            FUN3(VAR2, VAR42, "");
            VAR38 = FUN4(VAR43);
            goto VAR50;
        }
        int *VAR53 = VAR35 + VAR34;
        for (VAR37 = 0; VAR37 < VAR34; VAR37++)
        {
            VAR35[VAR37] = VAR51[0];
            VAR53[VAR37] = VAR51[1];
        }
    }
    else if (!FUN9(VAR14, "", 2))
    {
        FUN3(VAR2, VAR42, "");
        VAR13 = FUN22(VAR8, VAR28, VAR35);
        if (VAR13 != VAR41)
        {
            FUN3(VAR2, VAR42, "");
            VAR38 = FUN4(VAR43);
            goto VAR50;
        }
    }
    else
    {
        FUN3(VAR2, VAR42, "");
        VAR38 = FUN4(VAR43);
        goto VAR50;
    }
    VAR6->VAR39.VAR34 = VAR34;
    VAR6->VAR39.VAR29 = VAR29;
    VAR6->VAR39.VAR8 = VAR8;
    FUN7(VAR8);
    return 0;
VAR50:
    FUN17(&VAR6->VAR39);
    return VAR38;
}