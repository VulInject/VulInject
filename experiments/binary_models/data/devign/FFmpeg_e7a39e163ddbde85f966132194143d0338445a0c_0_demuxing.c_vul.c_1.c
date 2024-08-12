int main(int argc, char **argv)
{
    int VAR1 = 0, VAR2;
    if (argc != 4)
    {
        fprintf(VAR3, ""
                        ""
                        ""
                        ""
                        ""
                        "",
                argv[0]);
        FUN1(1);
    }
    VAR4 = argv[1];
    VAR5 = argv[2];
    VAR6 = argv[3];
    FUN2();
    if (FUN3(&VAR7, VAR4, NULL, NULL) < 0)
    {
        fprintf(VAR3, "", VAR4);
        FUN1(1);
    }
    if (FUN4(VAR7, NULL) < 0)
    {
        fprintf(VAR3, "");
        FUN1(1);
    }
    if (FUN5(&VAR8, VAR7, VAR9) >= 0)
    {
        VAR10 = VAR7->VAR11[VAR8];
        VAR12 = VAR10->VAR13;
        VAR14 = fopen(VAR5, "");
        if (!VAR14)
        {
            fprintf(VAR3, "", VAR5);
            VAR1 = 1;
            goto VAR15;
        }
        VAR1 = FUN6(VAR16, VAR17, VAR12->VAR18, VAR12->VAR19, VAR12->VAR20, 1);
        if (VAR1 < 0)
        {
            fprintf(VAR3, "");
            goto VAR15;
        }
        VAR21 = VAR1;
    }
    if (FUN5(&VAR22, VAR7, VAR23) >= 0)
    {
        int VAR24;
        VAR25 = VAR7->VAR11[VAR22];
        VAR26 = VAR25->VAR13;
        VAR27 = fopen(VAR6, "");
        if (!VAR27)
        {
            fprintf(VAR3, "", VAR5);
            VAR1 = 1;
            goto VAR15;
        }
        VAR24 = FUN7(VAR26->VAR28) ? VAR26->VAR29 : 1;
        VAR30 = FUN8(sizeof(VAR31 *) * VAR24);
        if (!VAR30)
        {
            fprintf(VAR3, "");
            VAR1 = FUN9(VAR32);
            goto VAR15;
        }
    }
    FUN10(VAR7, 0, VAR4, 0);
    if (!VAR25 && !VAR10)
    {
        fprintf(VAR3, "");
        VAR1 = 1;
        goto VAR15;
    }
    VAR33 = FUN11();
    if (!VAR33)
    {
        fprintf(VAR3, "");
        VAR1 = FUN9(VAR32);
        goto VAR15;
    }
    FUN12(&VAR34);
    VAR34.VAR35 = NULL;
    VAR34.VAR36 = 0;
    if (VAR10)
        FUN13("", VAR4, VAR5);
    if (VAR25)
        FUN13("", VAR4, VAR6);
    while (FUN14(VAR7, &VAR34) >= 0)
        FUN15(&VAR2, 0);
    VAR34.VAR35 = NULL;
    VAR34.VAR36 = 0;
    do
    {
        FUN15(&VAR2, 1);
    } while (VAR2);
    FUN13("");
    if (VAR10)
    {
        FUN13(""
               "",
               FUN16(VAR12->VAR20), VAR12->VAR18, VAR12->VAR19, VAR5);
    }
    if (VAR25)
    {
        const char *VAR37;
        if ((VAR1 = FUN17(&VAR37, VAR26->VAR28)) < 0)
            goto VAR15;
        FUN13(""
               "",
               VAR37, VAR26->VAR29, VAR26->VAR38, VAR6);
    }
VAR15:
    if (VAR12)
        FUN18(VAR12);
    if (VAR26)
        FUN18(VAR26);
    FUN19(&VAR7);
    if (VAR14)
        fclose(VAR14);
    if (VAR27)
        fclose(VAR27);
    FUN20(VAR33);
    FUN20(VAR16[0]);
    FUN20(VAR30);
    return VAR1 < 0;
}