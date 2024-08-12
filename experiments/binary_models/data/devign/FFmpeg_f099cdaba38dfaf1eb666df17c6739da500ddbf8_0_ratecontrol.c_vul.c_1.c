static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9, VAR10;
    double VAR11 = FUN2(VAR2->VAR8);
    double VAR12[5] = {0};
    uint64_t VAR13[5] = {0};
    uint64_t VAR14;
    uint64_t VAR15 = (VAR16)(VAR2->VAR17 * (double)VAR4->VAR18 / VAR11);
    double VAR19 = 0;
    double VAR20;
    const int VAR21 = (int)(VAR7->VAR22 * 4) | 1;
    double VAR23;
    double *VAR24, *VAR25, VAR26;
    for (VAR9 = 0; VAR9 < VAR4->VAR18; VAR9++)
    {
        VAR27 *VAR28 = &VAR4->VAR29[VAR9];
        VAR28->VAR30 = VAR28->VAR31;
        VAR4->VAR32[VAR28->VAR31] += VAR28->VAR33 * VAR28->VAR24;
        VAR4->VAR34[VAR28->VAR31] += VAR28->VAR35 * VAR28->VAR24;
        VAR4->VAR36[VAR28->VAR31] += VAR28->VAR37;
        VAR4->VAR38[VAR28->VAR31]++;
        VAR12[VAR28->VAR30] += (VAR28->VAR33 + VAR28->VAR35) * (double)VAR28->VAR24;
        VAR13[VAR28->VAR30] += VAR28->VAR37 + VAR28->VAR39;
    }
    VAR14 = VAR13[VAR40] + VAR13[VAR41] + VAR13[VAR42];
    if (VAR15 < VAR14)
    {
        FUN3(VAR2->VAR8, VAR43, "");
        return -1;
    }
    VAR24 = FUN4(sizeof(double) * VAR4->VAR18);
    VAR25 = FUN4(sizeof(double) * VAR4->VAR18);
    VAR10 = 0;
    for (VAR20 = 256 * 256; VAR20 > 0.0000001; VAR20 *= 0.5)
    {
        VAR23 = 0;
        VAR19 += VAR20;
        VAR4->VAR44 = VAR2->VAR8->VAR45 / 2;
        for (VAR9 = 0; VAR9 < VAR4->VAR18; VAR9++)
        {
            VAR27 *VAR28 = &VAR4->VAR29[VAR9];
            VAR24[VAR9] = FUN5(VAR2, &VAR4->VAR29[VAR9], VAR19, VAR9);
            VAR4->VAR46[VAR28->VAR31] = VAR24[VAR9];
        }
        assert(VAR21 % 2 == 1);
        for (VAR9 = FUN6(0, VAR4->VAR18 - 300); VAR9 < VAR4->VAR18; VAR9++)
        {
            VAR27 *VAR28 = &VAR4->VAR29[VAR9];
            VAR24[VAR9] = FUN7(VAR2, VAR28, VAR24[VAR9]);
        }
        for (VAR9 = VAR4->VAR18 - 1; VAR9 >= 0; VAR9--)
        {
            VAR27 *VAR28 = &VAR4->VAR29[VAR9];
            VAR24[VAR9] = FUN7(VAR2, VAR28, VAR24[VAR9]);
        }
        for (VAR9 = 0; VAR9 < VAR4->VAR18; VAR9++)
        {
            VAR27 *VAR28 = &VAR4->VAR29[VAR9];
            const int VAR31 = VAR28->VAR30;
            int VAR47;
            double VAR48 = 0.0, VAR49 = 0.0;
            for (VAR47 = 0; VAR47 < VAR21; VAR47++)
            {
                int VAR50 = VAR9 + VAR47 - VAR21 / 2;
                double VAR51 = VAR50 - VAR9;
                double VAR52 = VAR7->VAR22 == 0 ? 1.0 : FUN8(-VAR51 * VAR51 / (VAR7->VAR22 * VAR7->VAR22));
                if (VAR50 < 0 || VAR50 >= VAR4->VAR18)
                    continue;
                if (VAR31 != VAR4->VAR29[VAR50].VAR30)
                    continue;
                VAR48 += VAR24[VAR50] * VAR52;
                VAR49 += VAR52;
            }
            VAR25[VAR9] = VAR48 / VAR49;
        }
        for (VAR9 = 0; VAR9 < VAR4->VAR18; VAR9++)
        {
            VAR27 *VAR28 = &VAR4->VAR29[VAR9];
            double VAR53;
            VAR28->VAR54 = FUN9(VAR2, VAR28, VAR25[VAR9], VAR9);
            VAR53 = FUN10(VAR28, VAR28->VAR54) + VAR28->VAR37 + VAR28->VAR39;
            VAR53 += 8 * FUN11(VAR2, VAR53);
            VAR28->VAR23 = VAR23;
            VAR23 += VAR53;
        }
        FUN12(VAR2->VAR8, "", VAR23, (int)VAR15, VAR19);
        if (VAR23 > VAR15)
        {
            VAR19 -= VAR20;
            ++VAR10;
        }
    }
    FUN13(VAR24);
    FUN13(VAR25);
    VAR26 = 0.0;
    for (VAR9 = 0; VAR9 < VAR4->VAR18; VAR9++)
    {
        FUN12(VAR2, "", VAR9, VAR4->VAR29[VAR9].VAR54, VAR4->VAR29[VAR9].VAR54 / VAR55);
        VAR26 += FUN14(VAR4->VAR29[VAR9].VAR54 / VAR55, VAR2->VAR8->VAR56, VAR2->VAR8->VAR57);
    }
    assert(VAR10 <= 40);
    FUN3(VAR2->VAR8, VAR58, "", VAR2->VAR17, (int)(VAR23 / ((double)VAR15 / VAR2->VAR17)));
    FUN3(VAR2->VAR8, VAR58, "", (float)VAR26 / VAR4->VAR18);
    if (VAR10 == 0)
    {
        FUN3(VAR2->VAR8, VAR59, ""
                                      "");
    }
    else if (VAR10 == 40)
    {
        FUN3(VAR2->VAR8, VAR43, ""
                                       "");
        return -1;
    }
    else if (FUN15(VAR23 / VAR15 - 1.0) > 0.01)
    {
        FUN3(VAR2->VAR8, VAR43, "");
        return -1;
    }
    return 0;
}