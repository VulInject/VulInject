static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    unsigned int av_unused VAR8;
    unsigned int VAR9;
    int64_t VAR10;
    int VAR11;
    int VAR12;
    int VAR13;
    FUN2(VAR2, "", VAR14);
    VAR4->VAR15 = VAR16;
    VAR9 = FUN3(VAR7);
    if (VAR9 < 28)
        return -1;
    VAR4->VAR17 = VAR9;
    VAR8 = (VAR18)FUN3(VAR7);
    FUN2(VAR2, "", VAR9);
    FUN2(VAR2, "", VAR8);
    VAR4->VAR10 = VAR10 = FUN3(VAR7);
    FUN2(VAR2, "" VAR19 "", VAR10);
    VAR11 = FUN3(VAR7);
    VAR12 = FUN3(VAR7);
    VAR13 = FUN3(VAR7);
    FUN2(VAR2, "", VAR11, VAR12, VAR13);
    if (VAR7->VAR20)
        return -1;
    FUN2(VAR2, "" VAR19 "", FUN4(VAR7));
    if (VAR11 > 0)
    {
        char *VAR21;
        char *VAR22, *VAR23;
        char *VAR24, *VAR25;
        char VAR26;
        VAR22 = VAR21 = FUN5(VAR11 + 1);
        VAR23 = VAR21 + VAR11;
        FUN6(VAR7, VAR21, VAR11);
        while (VAR22 < VAR23)
        {
            while (*VAR22 == '')
                VAR22++;
            if (VAR22 >= VAR23 - 2)
                break;
            VAR24 = VAR22;
            VAR22 = strchr(VAR22, '');
            if (!VAR22 || VAR22 >= VAR23 - 2)
                break;
            *VAR22++ = '';
            VAR26 = *VAR22++;
            VAR25 = VAR22;
            VAR22 = strchr(VAR22, VAR26);
            if (!VAR22 || VAR22 >= VAR23)
                break;
            *VAR22++ = '';
            FUN2(VAR2, "", VAR24, VAR25);
            FUN7(&VAR2->VAR27, VAR24, VAR25, 0);
        }
        FUN8(VAR21);
    }
    if (VAR7->VAR20)
        return -1;
    FUN2(VAR2, "" VAR19 "", FUN4(VAR7));
    if (VAR13 > 0)
    {
        int VAR28;
        VAR4->VAR29 = VAR13;
        if ((unsigned)VAR13 >= VAR30 / sizeof(VAR18))
            return -1;
        VAR4->VAR31 = FUN9((unsigned)VAR13 * sizeof(VAR18));
        for (VAR28 = 0; VAR28 < VAR13; VAR28++)
            VAR4->VAR31[VAR28] = FUN3(VAR7) + VAR9;
        if (VAR12 > VAR13 && FUN3(VAR7) == FUN10('', '', '', ''))
        {
            VAR4->VAR32 = FUN9((unsigned)VAR13 * sizeof(VAR18));
            for (VAR28 = 0; VAR28 < VAR13; VAR28++)
            {
                VAR4->VAR32[VAR28] = FUN3(VAR7);
            }
        }
    }
    FUN2(VAR2, "" VAR19 "", FUN4(VAR7));
    FUN2(VAR2, "", VAR12);
    FUN2(VAR2, "", VAR12);
    for (VAR28 = 0; VAR28 < VAR12; VAR28++)
    {
        unsigned char VAR33[8];
        FUN11(VAR7, VAR9 + VAR4->VAR31[VAR28], VAR34);
        FUN6(VAR7, VAR33, 8);
        FUN2(VAR2, ""
                   "",
                VAR4->VAR31[VAR28], VAR9 + VAR4->VAR31[VAR28], VAR33[0], VAR33[1], VAR33[2], VAR33[3], VAR33[4], VAR33[5], VAR33[6], VAR33[7], FUN12(VAR33[0]), FUN12(VAR33[1]), FUN12(VAR33[2]), FUN12(VAR33[3]), FUN12(VAR33[4]), FUN12(VAR33[5]), FUN12(VAR33[6]), FUN12(VAR33[7]));
    }
    FUN11(VAR7, VAR4->VAR35 + VAR9, VAR34);
    if (VAR7->VAR20)
        return -1;
    VAR4->VAR15 = VAR36;
    return 0;
}