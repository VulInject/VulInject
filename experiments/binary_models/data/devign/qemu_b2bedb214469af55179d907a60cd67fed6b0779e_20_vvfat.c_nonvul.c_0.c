static int FUN1(VAR1 *VAR2, int VAR3, const char *VAR4)
{
    int VAR5 = 0;
    unsigned char *VAR6 = FUN2(VAR2->VAR7);
    VAR8 *VAR9 = (VAR8 *)VAR6;
    VAR10 *VAR11 = FUN3(VAR2, VAR3);
    long_file_name VAR12;
    int VAR13 = strlen(VAR4);
    char VAR14[VAR15];
    assert(VAR13 < VAR15);
    FUN4(VAR14, sizeof(VAR14), VAR4);
    VAR14[VAR13] = '';
    VAR14[VAR13 + 1] = '';
    if (VAR11)
    {
        const char *VAR16 = FUN5(VAR11->VAR4);
        const char *VAR17 = FUN5(VAR4);
        assert(VAR11->VAR18 & VAR19);
        assert(VAR11->VAR18 & VAR20);
        VAR11->VAR18 &= ~VAR20;
        if (strcmp(VAR16, VAR17))
            FUN6(VAR2, VAR3, FUN7(VAR4));
    }
    else
        FUN8(VAR2, VAR3, FUN7(VAR4));
    FUN9(&VAR12);
    do
    {
        int VAR21;
        int VAR22 = 0;
        VAR5++;
        if (VAR2->VAR23[VAR3] & VAR24)
        {
            fprintf(VAR25, "", (int)VAR3);
            return 0;
        }
        VAR2->VAR23[VAR3] = VAR26;
        FUN10(fprintf(VAR25, "", (int)VAR3, (int)FUN11(VAR2, VAR3)));
        VAR22 = FUN12(VAR2->VAR27, FUN11(VAR2, VAR3), VAR6, VAR2->VAR28);
        if (VAR22)
        {
            fprintf(VAR25, "");
        VAR29:
            free(VAR6);
            return 0;
        }
        for (VAR21 = 0; VAR21 < 0x10 * VAR2->VAR28; VAR21++)
        {
            int VAR30 = 0;
            FUN10(fprintf(VAR25, "", VAR21); FUN13(VAR9 + VAR21));
            if (FUN14(VAR9 + VAR21) || FUN15(VAR9 + VAR21) || FUN16(VAR9 + VAR21))
                continue;
            VAR22 = FUN17(&VAR12, VAR9 + VAR21);
            if (VAR22 < 0)
            {
                fprintf(VAR25, "");
                goto VAR29;
            }
            if (VAR22 == 0 || FUN16(VAR9 + VAR21))
                continue;
            if (FUN18(VAR9 + VAR21) != VAR12.VAR31)
            {
                VAR22 = FUN19(VAR2, &VAR12, VAR9 + VAR21);
                if (VAR22 < 0)
                {
                    fprintf(VAR25, "", VAR22);
                    goto VAR29;
                }
                if (VAR22 > 0 || !strcmp((char *)VAR12.VAR32, "") || !strcmp((char *)VAR12.VAR32, ""))
                    continue;
            }
            VAR12.VAR31 = 0x100;
            if (VAR13 + 1 + VAR12.VAR33 >= VAR15)
            {
                fprintf(VAR25, "", VAR4, VAR12.VAR32);
                goto VAR29;
            }
            FUN4(VAR14 + VAR13 + 1, sizeof(VAR14) - VAR13 - 1, (char *)VAR12.VAR32);
            if (FUN20(VAR9 + VAR21))
            {
                if (FUN21(VAR9 + VAR21) == 0)
                {
                    FUN10(fprintf(VAR25, "", VAR14); FUN13(VAR9 + VAR21));
                    goto VAR29;
                }
                VAR30 = FUN1(VAR2, FUN21(VAR9 + VAR21), VAR14);
                if (VAR30 == 0)
                {
                    FUN10(fprintf(VAR25, "", VAR14); FUN13(VAR9 + VAR21));
                    goto VAR29;
                }
            }
            else if (FUN22(VAR9 + VAR21))
            {
                VAR30 = FUN23(VAR2, VAR9 + VAR21, VAR14);
                if (VAR30 != (FUN24(VAR9[VAR21].VAR34) + VAR2->VAR7 - 1) / VAR2->VAR7)
                {
                    FUN10(fprintf(VAR25, ""));
                    goto VAR29;
                }
            }
            else
                FUN25();
            VAR5 += VAR30;
        }
        VAR3 = FUN26(VAR2, VAR3);
    } while (!FUN27(VAR2, VAR3));
    free(VAR6);
    return VAR5;
}