int main(int argc, char **argv)
{
    int VAR1, VAR2, VAR3, VAR4, VAR5;
    uint64_t VAR6, VAR7;
    enum AVSampleFormat VAR8, VAR9;
    uint8_t VAR10[VAR11 * 8 * 8];
    uint8_t VAR12[VAR11 * 8 * 8 * 3];
    uint8_t VAR13[VAR11 * 8 * 8 + 100];
    VAR14 *VAR15[VAR16];
    VAR14 *VAR17[VAR16];
    VAR14 *VAR18[VAR16];
    int VAR19 = 0;
    int VAR20;
    int VAR21 = 10000;
    uint32_t VAR22 = 0;
    uint32_t VAR23 = 0;
    int VAR24[FUN1(VAR25) * FUN1(VAR26) * FUN1(VAR27) * FUN1(VAR26) * FUN1(VAR27)];
    int VAR28 = FUN1(VAR24);
    int VAR29;
    int VAR30 = -1;
    struct VAR31 *VAR32 = NULL;
    struct VAR31 *VAR33 = NULL;
    if (argc > 1)
    {
        if (!strcmp(argv[1], "") || !strcmp(argv[1], ""))
        {
            FUN2(NULL, VAR34, ""
                                      "",
                   VAR21);
            return 0;
        }
        VAR21 = FUN3(argv[1], NULL, 0);
        if (VAR21 < 0)
        {
            VAR21 = -VAR21;
            VAR23 = FUN4(0);
        }
        if (VAR21 <= 0 || VAR21 > VAR28)
            VAR21 = VAR28;
        if (argc > 2)
        {
            VAR30 = FUN3(argv[1], NULL, 0);
        }
    }
    for (VAR4 = 0; VAR4 < VAR28; VAR4++)
        VAR24[VAR4] = VAR4;
    for (VAR29 = 0; VAR29 < VAR21; VAR29++)
    {
        unsigned VAR35;
        FUN5(VAR22);
        VAR35 = (VAR22 * (VAR36)(VAR28 - VAR29)) >> 32;
        FUN6(int, VAR24[VAR35], VAR24[VAR28 - VAR29 - 1]);
    }
    FUN7(VAR24 + VAR28 - VAR21, VAR21, sizeof(VAR24[0]), (void *)VAR37);
    VAR1 = 16000;
    for (VAR29 = 0; VAR29 < VAR21; VAR29++)
    {
        char VAR38[256];
        char VAR39[256];
        unsigned VAR40 = VAR24[VAR28 - VAR29 - 1];
        int VAR41;
        int VAR42, VAR43, VAR44;
        VAR6 = VAR26[VAR40 % FUN1(VAR26)];
        VAR40 /= FUN1(VAR26);
        VAR7 = VAR26[VAR40 % FUN1(VAR26)];
        VAR40 /= FUN1(VAR26);
        VAR8 = VAR27[VAR40 % FUN1(VAR27)];
        VAR40 /= FUN1(VAR27);
        VAR9 = VAR27[VAR40 % FUN1(VAR27)];
        VAR40 /= FUN1(VAR27);
        VAR2 = VAR25[VAR40 % FUN1(VAR25)];
        VAR40 /= FUN1(VAR25);
        FUN8(!VAR40);
        if (VAR30 == 0)
        {
            if (VAR2 != VAR1 || VAR6 != VAR7)
                continue;
        }
        VAR41 = FUN9(VAR6);
        VAR44 = FUN9(VAR7);
        FUN10(VAR38, sizeof(VAR38), VAR41, VAR6);
        FUN10(VAR39, sizeof(VAR39), VAR44, VAR7);
        fprintf(VAR45, "", VAR38, VAR39, VAR1, VAR2, FUN11(VAR8), FUN11(VAR9));
        VAR32 = FUN12(VAR32, VAR7, VAR9, VAR2, VAR6, VAR8, VAR1, 0, 0);
        VAR33 = FUN12(VAR33, VAR6, VAR8, VAR1, VAR7, VAR9, VAR2, 0, 0);
        if (!VAR32)
        {
            fprintf(VAR45, "");
            return 1;
        }
        if (!VAR33)
        {
            fprintf(VAR45, "");
            return 1;
        }
        if (FUN13(VAR32) < 0)
            fprintf(VAR45, "");
        if (FUN13(VAR33) < 0)
            fprintf(VAR45, "");
        FUN14(VAR15, VAR10, VAR8, VAR11);
        FUN14(VAR18, VAR12, VAR9, 3 * VAR11);
        FUN14(VAR17, VAR13, VAR8, VAR11);
        for (VAR3 = 0; VAR3 < VAR41; VAR3++)
        {
            for (VAR4 = 0; VAR4 < VAR11; VAR4++)
                FUN15(VAR15, VAR3, VAR4, VAR41, VAR8, FUN16(VAR4 * VAR4 * 3 / VAR11));
        }
        FUN17(VAR15, VAR8, VAR41, VAR11 / 6 + 1, VAR11);
        VAR20 = FUN5(VAR23) % 3;
        if (VAR20 == 0)
        {
            VAR43 = FUN18(VAR32, VAR18, 3 * VAR11, (const VAR14 **)VAR15, VAR11);
        }
        else if (VAR20 == 1)
        {
            VAR43 = FUN18(VAR32, VAR18, 0, (const VAR14 **)VAR15, VAR11);
            VAR43 += FUN18(VAR32, VAR18, 3 * VAR11, (const VAR14 **)VAR15, 0);
        }
        else
        {
            int VAR46;
            VAR43 = FUN18(VAR32, VAR18, 0, (const VAR14 **)VAR15, 1);
            FUN8(VAR43 == 0);
            FUN19(VAR15, 1, VAR41, VAR8);
            VAR43 += FUN18(VAR32, VAR18, 3 * VAR11, (const VAR14 **)VAR15, 0);
            FUN19(VAR18, VAR43, VAR44, VAR9);
            VAR46 = VAR43;
            VAR43 += FUN18(VAR32, VAR18, 2, (const VAR14 **)VAR15, 2);
            FUN19(VAR18, VAR43 - VAR46, VAR44, VAR9);
            VAR46 = VAR43;
            FUN19(VAR15, 2, VAR41, VAR8);
            VAR43 += FUN18(VAR32, VAR18, 1, (const VAR14 **)VAR15, VAR11 - 3);
            FUN19(VAR18, VAR43 - VAR46, VAR44, VAR9);
            VAR46 = VAR43;
            FUN19(VAR15, -3, VAR41, VAR8);
            VAR43 += FUN18(VAR32, VAR18, 3 * VAR11, (const VAR14 **)VAR15, 0);
            FUN19(VAR18, -VAR46, VAR44, VAR9);
        }
        VAR42 = FUN18(VAR33, VAR17, VAR11, (const VAR14 **)VAR18, VAR43);
        for (VAR3 = 0; VAR3 < VAR41; VAR3++)
        {
            double VAR47, VAR48 = 0;
            double VAR49 = 0;
            double VAR50 = 0;
            double VAR51 = 0;
            double VAR52 = 0;
            double VAR53 = 0;
            for (VAR4 = 0; VAR4 < VAR42; VAR4++)
            {
                double VAR54 = FUN20(VAR15, VAR3, VAR4, VAR41, VAR8);
                double VAR55 = FUN20(VAR17, VAR3, VAR4, VAR41, VAR8);
                VAR49 += VAR54;
                VAR50 += VAR55;
                VAR51 += VAR54 * VAR54;
                VAR52 += VAR55 * VAR55;
                VAR53 += VAR54 * VAR55;
                VAR48 = FUN21(VAR48, FUN22(VAR54 - VAR55));
            }
            VAR47 = VAR51 + VAR52 - 2 * VAR53;
            if (VAR47 < 0 && VAR47 > -0.00001)
                VAR47 = 0;
            fprintf(VAR45, "", FUN23(VAR47 / VAR42), VAR53 / (FUN23(VAR51 * VAR52)), VAR48, VAR42);
        }
        VAR19++;
        VAR19 %= 21;
        VAR5 = FUN18(VAR33, VAR17, VAR19, 0, 0);
        FUN19(VAR17, VAR19, VAR41, VAR8);
        VAR5 += FUN18(VAR33, VAR17, VAR11 - VAR19, 0, 0);
        FUN19(VAR17, -VAR19, VAR41, VAR8);
        if (VAR5)
        {
            for (VAR3 = 0; VAR3 < VAR41; VAR3++)
            {
                double VAR47, VAR48 = 0;
                double VAR49 = 0;
                double VAR50 = 0;
                double VAR51 = 0;
                double VAR52 = 0;
                double VAR53 = 0;
                for (VAR4 = 0; VAR4 < VAR5; VAR4++)
                {
                    double VAR54 = FUN20(VAR15, VAR3, VAR4 + VAR42, VAR41, VAR8);
                    double VAR55 = FUN20(VAR17, VAR3, VAR4, VAR41, VAR8);
                    VAR49 += VAR54;
                    VAR50 += VAR55;
                    VAR51 += VAR54 * VAR54;
                    VAR52 += VAR55 * VAR55;
                    VAR53 += VAR54 * VAR55;
                    VAR48 = FUN21(VAR48, FUN22(VAR54 - VAR55));
                }
                VAR47 = VAR51 + VAR52 - 2 * VAR53;
                if (VAR47 < 0 && VAR47 > -0.00001)
                    VAR47 = 0;
                fprintf(VAR45, "", FUN23(VAR47 / VAR5), VAR53 / (FUN23(VAR51 * VAR52)), VAR48, VAR5, VAR19);
            }
        }
        fprintf(VAR45, "");
    }
    return 0;
}