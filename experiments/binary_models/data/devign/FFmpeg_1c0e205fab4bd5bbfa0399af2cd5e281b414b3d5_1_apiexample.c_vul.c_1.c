void FUN1(const char *VAR1)
{
    VAR2 *VAR3;
    VAR4 *VAR5 = NULL;
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17, *VAR18;
    FUN2("");
    VAR3 = FUN3(VAR19);
    if (!VAR3)
    {
        fprintf(VAR20, "");
        FUN4(1);
    }
    VAR5 = FUN5();
    VAR15 = FUN6();
    VAR5->VAR21 = 400000;
    VAR5->VAR22 = 352;
    VAR5->VAR23 = 288;
    VAR5->VAR24 = 25;
    VAR5->VAR25 = 1;
    VAR5->VAR26 = 10;
    VAR5->VAR27 = 1;
    if (FUN7(VAR5, VAR3) < 0)
    {
        fprintf(VAR20, "");
        FUN4(1);
    }
    VAR13 = fopen(VAR1, "");
    if (!VAR13)
    {
        fprintf(VAR20, "", VAR1);
        FUN4(1);
    }
    VAR11 = 100000;
    VAR17 = malloc(VAR11);
    VAR8 = VAR5->VAR22 * VAR5->VAR23;
    VAR18 = malloc((VAR8 * 3) / 2);
    VAR15->VAR28[0] = VAR18;
    VAR15->VAR28[1] = VAR15->VAR28[0] + VAR8;
    VAR15->VAR28[2] = VAR15->VAR28[1] + VAR8 / 4;
    VAR15->VAR29[0] = VAR5->VAR22;
    VAR15->VAR29[1] = VAR5->VAR22 / 2;
    VAR15->VAR29[2] = VAR5->VAR22 / 2;
    for (VAR6 = 0; VAR6 < 25; VAR6++)
    {
        FUN8(VAR30);
        for (VAR10 = 0; VAR10 < VAR5->VAR23; VAR10++)
        {
            for (VAR9 = 0; VAR9 < VAR5->VAR22; VAR9++)
            {
                VAR15->VAR28[0][VAR10 * VAR15->VAR29[0] + VAR9] = VAR9 + VAR10 + VAR6 * 3;
            }
        }
        for (VAR10 = 0; VAR10 < VAR5->VAR23 / 2; VAR10++)
        {
            for (VAR9 = 0; VAR9 < VAR5->VAR22 / 2; VAR9++)
            {
                VAR15->VAR28[1][VAR10 * VAR15->VAR29[1] + VAR9] = 128 + VAR10 + VAR6 * 2;
                VAR15->VAR28[2][VAR10 * VAR15->VAR29[2] + VAR9] = 64 + VAR9 + VAR6 * 5;
            }
        }
        VAR7 = FUN9(VAR5, VAR17, VAR11, VAR15);
        FUN2("", VAR6, VAR7);
        fwrite(VAR17, 1, VAR7, VAR13);
    }
    for (; VAR7; VAR6++)
    {
        FUN8(VAR30);
        VAR7 = FUN9(VAR5, VAR17, VAR11, NULL);
        FUN2("", VAR6, VAR7);
        fwrite(VAR17, 1, VAR7, VAR13);
    }
    VAR17[0] = 0x00;
    VAR17[1] = 0x00;
    VAR17[2] = 0x01;
    VAR17[3] = 0xb7;
    fwrite(VAR17, 1, 4, VAR13);
    fclose(VAR13);
    free(VAR18);
    free(VAR17);
    FUN10(VAR5);
    free(VAR5);
    free(VAR15);
    FUN2("");
}