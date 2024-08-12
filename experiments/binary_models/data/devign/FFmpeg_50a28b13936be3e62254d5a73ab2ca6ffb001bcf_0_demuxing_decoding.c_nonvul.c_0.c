int main(int argc, char **argv)
{
    int VAR1 = 0, VAR2;
    if (argc != 4 && argc != 5)
    {
        fprintf(VAR3, ""
                        ""
                        ""
                        ""
                        ""
                        ""
                        ""
                        ""
                        ""
                        ""
                        "",
                argv[0]);
        FUN1(1);
    }
    if (argc == 5)
    {
        const char *VAR4 = argv[1] + strlen("");
        if (!strcmp(VAR4, ""))
            VAR5 = VAR6;
        else if (!strcmp(VAR4, ""))
            VAR5 = VAR7;
        else if (!strcmp(VAR4, ""))
            VAR5 = VAR8;
        else
        {
            fprintf(VAR3, "", VAR4);
            FUN1(1);
        }
        argv++;
    }
    VAR9 = argv[1];
    VAR10 = argv[2];
    VAR11 = argv[3];
    FUN2();
    if (FUN3(&VAR12, VAR9, NULL, NULL) < 0)
    {
        fprintf(VAR3, "", VAR9);
        FUN1(1);
    }
    if (FUN4(VAR12, NULL) < 0)
    {
        fprintf(VAR3, "");
        FUN1(1);
    }
    if (FUN5(&VAR13, VAR12, VAR14) >= 0)
    {
        VAR15 = VAR12->VAR16[VAR13];
        VAR17 = VAR15->VAR18;
        VAR19 = fopen(VAR10, "");
        if (!VAR19)
        {
            fprintf(VAR3, "", VAR10);
            VAR1 = 1;
            goto VAR20;
        }
        VAR1 = FUN6(VAR21, VAR22, VAR17->VAR23, VAR17->VAR24, VAR17->VAR25, 1);
        if (VAR1 < 0)
        {
            fprintf(VAR3, "");
            goto VAR20;
        }
        VAR26 = VAR1;
    }
    if (FUN5(&VAR27, VAR12, VAR28) >= 0)
    {
        VAR29 = VAR12->VAR16[VAR27];
        VAR30 = VAR29->VAR18;
        VAR31 = fopen(VAR11, "");
        if (!VAR31)
        {
            fprintf(VAR3, "", VAR10);
            VAR1 = 1;
            goto VAR20;
        }
    }
    FUN7(VAR12, 0, VAR9, 0);
    if (!VAR29 && !VAR15)
    {
        fprintf(VAR3, "");
        VAR1 = 1;
        goto VAR20;
    }
    if (VAR5 == VAR6)
        VAR32 = FUN8();
    else
        VAR32 = FUN9();
    if (!VAR32)
    {
        fprintf(VAR3, "");
        VAR1 = FUN10(VAR33);
        goto VAR20;
    }
    FUN11(&VAR34);
    VAR34.VAR35 = NULL;
    VAR34.VAR36 = 0;
    if (VAR15)
        FUN12("", VAR9, VAR10);
    if (VAR29)
        FUN12("", VAR9, VAR11);
    while (FUN13(VAR12, &VAR34) >= 0)
    {
        AVPacket VAR37 = VAR34;
        do
        {
            VAR1 = FUN14(&VAR2, 0);
            if (VAR1 < 0)
                break;
            VAR34.VAR35 += VAR1;
            VAR34.VAR36 -= VAR1;
        } while (VAR34.VAR36 > 0);
        FUN15(&VAR37);
    }
    VAR34.VAR35 = NULL;
    VAR34.VAR36 = 0;
    do
    {
        FUN14(&VAR2, 1);
    } while (VAR2);
    FUN12("");
    if (VAR15)
    {
        FUN12(""
               "",
               FUN16(VAR17->VAR25), VAR17->VAR23, VAR17->VAR24, VAR10);
    }
    if (VAR29)
    {
        enum AVSampleFormat VAR38 = VAR30->VAR39;
        int VAR40 = VAR30->VAR41;
        const char *VAR42;
        if (FUN17(VAR38))
        {
            const char *VAR43 = FUN18(VAR38);
            FUN12(""
                   "",
                   VAR43 ? VAR43 : "");
            VAR38 = FUN19(VAR38);
            VAR40 = 1;
        }
        if ((VAR1 = FUN20(&VAR42, VAR38)) < 0)
            goto VAR20;
        FUN12(""
               "",
               VAR42, VAR40, VAR30->VAR44, VAR11);
    }
VAR20:
    FUN21(VAR17);
    FUN21(VAR30);
    FUN22(&VAR12);
    if (VAR19)
        fclose(VAR19);
    if (VAR31)
        fclose(VAR31);
    if (VAR5 == VAR6)
        FUN23(&VAR32);
    else
        FUN24(&VAR32);
    FUN25(VAR21[0]);
    return VAR1 < 0;
}