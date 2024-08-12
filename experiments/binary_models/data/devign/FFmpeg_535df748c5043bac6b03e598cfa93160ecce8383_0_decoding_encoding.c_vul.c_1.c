static void FUN1(const char *VAR1, int VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6 = NULL;
    int VAR7, VAR8, VAR9, VAR10, VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    AVPacket VAR16;
    uint8_t VAR17[] = {0, 0, 1, 0xb7};
    FUN2("", VAR1);
    VAR4 = FUN3(VAR2);
    if (!VAR4)
    {
        fprintf(VAR18, "");
        FUN4(1);
    }
    VAR6 = FUN5(VAR4);
    VAR15 = FUN6();
    VAR6->VAR19 = 400000;
    VAR6->VAR20 = 352;
    VAR6->VAR21 = 288;
    VAR6->VAR22 = (VAR23){1, 25};
    VAR6->VAR24 = 10;
    VAR6->VAR25 = 1;
    VAR6->VAR26 = VAR27;
    if (VAR2 == VAR28)
        FUN7(VAR6->VAR29, "", "", 0);
    if (FUN8(VAR6, VAR4, NULL) < 0)
    {
        fprintf(VAR18, "");
        FUN4(1);
    }
    VAR13 = fopen(VAR1, "");
    if (!VAR13)
    {
        fprintf(VAR18, "", VAR1);
        FUN4(1);
    }
    VAR8 = FUN9(VAR15->VAR30, VAR15->VAR31, VAR6->VAR20, VAR6->VAR21, VAR6->VAR26, 32);
    if (VAR8 < 0)
    {
        fprintf(VAR18, "");
        FUN4(1);
    }
    VAR15->VAR32 = VAR6->VAR26;
    VAR15->VAR20 = VAR6->VAR20;
    VAR15->VAR21 = VAR6->VAR21;
    for (VAR7 = 0; VAR7 < 25; VAR7++)
    {
        FUN10(&VAR16);
        VAR16.VAR30 = NULL;
        VAR16.VAR33 = 0;
        FUN11(VAR34);
        for (VAR10 = 0; VAR10 < VAR6->VAR21; VAR10++)
        {
            for (VAR9 = 0; VAR9 < VAR6->VAR20; VAR9++)
            {
                VAR15->VAR30[0][VAR10 * VAR15->VAR31[0] + VAR9] = VAR9 + VAR10 + VAR7 * 3;
            }
        }
        for (VAR10 = 0; VAR10 < VAR6->VAR21 / 2; VAR10++)
        {
            for (VAR9 = 0; VAR9 < VAR6->VAR20 / 2; VAR9++)
            {
                VAR15->VAR30[1][VAR10 * VAR15->VAR31[1] + VAR9] = 128 + VAR10 + VAR7 * 2;
                VAR15->VAR30[2][VAR10 * VAR15->VAR31[2] + VAR9] = 64 + VAR9 + VAR7 * 5;
            }
        }
        VAR15->VAR35 = VAR7;
        VAR8 = FUN12(VAR6, &VAR16, VAR15, &VAR11);
        if (VAR8 < 0)
        {
            fprintf(VAR18, "");
            FUN4(1);
        }
        if (VAR11)
        {
            FUN2("", VAR7, VAR16.VAR33);
            fwrite(VAR16.VAR30, 1, VAR16.VAR33, VAR13);
            FUN13(&VAR16);
        }
    }
    for (VAR11 = 1; VAR11; VAR7++)
    {
        FUN11(VAR34);
        VAR8 = FUN12(VAR6, &VAR16, NULL, &VAR11);
        if (VAR8 < 0)
        {
            fprintf(VAR18, "");
            FUN4(1);
        }
        if (VAR11)
        {
            FUN2("", VAR7, VAR16.VAR33);
            fwrite(VAR16.VAR30, 1, VAR16.VAR33, VAR13);
            FUN13(&VAR16);
        }
    }
    fwrite(VAR17, 1, sizeof(VAR17), VAR13);
    fclose(VAR13);
    FUN14(VAR6);
    FUN15(VAR6);
    FUN16(&VAR15->VAR30[0]);
    FUN15(VAR15);
    FUN2("");
}