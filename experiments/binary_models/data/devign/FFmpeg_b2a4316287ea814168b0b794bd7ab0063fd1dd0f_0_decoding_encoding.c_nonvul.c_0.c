static void FUN1(const char *VAR1)
{
    VAR2 *VAR3;
    VAR4 *VAR5 = NULL;
    VAR6 *VAR7;
    AVPacket VAR8;
    int VAR9, VAR10, VAR11, VAR12, VAR13;
    int VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18;
    float VAR19, VAR20;
    FUN2("", VAR1);
    VAR3 = FUN3(VAR21);
    if (!VAR3)
    {
        fprintf(VAR22, "");
        FUN4(1);
    }
    VAR5 = FUN5(VAR3);
    if (!VAR5)
    {
        fprintf(VAR22, "");
        FUN4(1);
    }
    VAR5->VAR23 = 64000;
    VAR5->VAR24 = VAR25;
    if (!FUN6(VAR3, VAR5->VAR24))
    {
        fprintf(VAR22, "", FUN7(VAR5->VAR24));
        FUN4(1);
    }
    VAR5->VAR26 = FUN8(VAR3);
    VAR5->VAR27 = FUN9(VAR3);
    VAR5->VAR28 = FUN10(VAR5->VAR27);
    if (FUN11(VAR5, VAR3, NULL) < 0)
    {
        fprintf(VAR22, "");
        FUN4(1);
    }
    VAR16 = fopen(VAR1, "");
    if (!VAR16)
    {
        fprintf(VAR22, "", VAR1);
        FUN4(1);
    }
    VAR7 = FUN12();
    if (!VAR7)
    {
        fprintf(VAR22, "");
        FUN4(1);
    }
    VAR7->VAR29 = VAR5->VAR30;
    VAR7->VAR31 = VAR5->VAR24;
    VAR7->VAR27 = VAR5->VAR27;
    VAR14 = FUN13(NULL, VAR5->VAR28, VAR5->VAR30, VAR5->VAR24, 0);
    if (VAR14 < 0)
    {
        fprintf(VAR22, "");
        FUN4(1);
    }
    VAR18 = FUN14(VAR14);
    if (!VAR18)
    {
        fprintf(VAR22, "", VAR14);
        FUN4(1);
    }
    VAR12 = FUN15(VAR7, VAR5->VAR28, VAR5->VAR24, (const VAR32 *)VAR18, VAR14, 0);
    if (VAR12 < 0)
    {
        fprintf(VAR22, "");
        FUN4(1);
    }
    VAR19 = 0;
    VAR20 = 2 * VAR33 * 440.0 / VAR5->VAR26;
    for (VAR9 = 0; VAR9 < 200; VAR9++)
    {
        FUN16(&VAR8);
        VAR8.VAR34 = NULL;
        VAR8.VAR35 = 0;
        for (VAR10 = 0; VAR10 < VAR5->VAR30; VAR10++)
        {
            VAR18[2 * VAR10] = (int)(FUN17(VAR19) * 10000);
            for (VAR11 = 1; VAR11 < VAR5->VAR28; VAR11++)
                VAR18[2 * VAR10 + VAR11] = VAR18[2 * VAR10];
            VAR19 += VAR20;
        }
        VAR12 = FUN18(VAR5, &VAR8, VAR7, &VAR13);
        if (VAR12 < 0)
        {
            fprintf(VAR22, "");
            FUN4(1);
        }
        if (VAR13)
        {
            fwrite(VAR8.VAR34, 1, VAR8.VAR35, VAR16);
            FUN19(&VAR8);
        }
    }
    for (VAR13 = 1; VAR13; VAR9++)
    {
        VAR12 = FUN18(VAR5, &VAR8, NULL, &VAR13);
        if (VAR12 < 0)
        {
            fprintf(VAR22, "");
            FUN4(1);
        }
        if (VAR13)
        {
            fwrite(VAR8.VAR34, 1, VAR8.VAR35, VAR16);
            FUN19(&VAR8);
        }
    }
    fclose(VAR16);
    FUN20(&VAR18);
    FUN21(&VAR7);
    FUN22(VAR5);
    FUN23(VAR5);
}