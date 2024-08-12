static int FUN1(VAR1 *VAR2[4], int VAR3[4], int VAR4, int VAR5, VAR6 *VAR7, enum AVPixelFormat VAR8, enum AVPixelFormat VAR9)
{
    char VAR10[256];
    while (fgets(VAR10, sizeof(VAR10), VAR7))
    {
        struct Results VAR11;
        enum AVPixelFormat VAR12;
        char VAR13[12];
        int VAR14, VAR15;
        enum AVPixelFormat VAR16;
        char VAR17[12];
        int VAR18, VAR19;
        int VAR20;
        int VAR21;
        VAR21 = sscanf(VAR10, ""
                          "" VAR22 "" VAR22 "" VAR22 "" VAR22 "",
                     VAR13, &VAR14, &VAR15, VAR17, &VAR18, &VAR19, &VAR20, &VAR11.VAR23, &VAR11.VAR24, &VAR11.VAR25, &VAR11.VAR26, &VAR11.VAR27);
        if (VAR21 != 12)
        {
            VAR13[0] = VAR17[0] = 0;
            VAR21 = sscanf(VAR10, "", VAR13, VAR17);
        }
        VAR12 = FUN2(VAR13);
        VAR16 = FUN2(VAR17);
        if (VAR12 == VAR28 || VAR16 == VAR28 || VAR14 > 1024U || VAR15 > 1024U || VAR18 > 1024U || VAR19 > 1024U)
        {
            fprintf(VAR29, "");
            return -1;
        }
        if ((VAR8 != VAR28 && VAR8 != VAR12) || (VAR9 != VAR28 && VAR9 != VAR16))
            continue;
        if (VAR21 != 12)
        {
            FUN3("", VAR10);
            continue;
        }
        FUN4(VAR2, VAR3, VAR4, VAR5, VAR12, VAR16, VAR14, VAR15, VAR18, VAR19, VAR20, &VAR11);
    }
    return 0;
}