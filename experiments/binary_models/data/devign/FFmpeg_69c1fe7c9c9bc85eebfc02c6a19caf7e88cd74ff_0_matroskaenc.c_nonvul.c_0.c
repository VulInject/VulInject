static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11 = 0, VAR12 = 0, VAR13, VAR14, VAR15 = VAR6->VAR13;
    VAR16 *VAR17, *VAR18, *VAR19 = VAR6->VAR19;
    ebml_master VAR20;
    char VAR21[2048];
    while (VAR15)
    {
        int VAR22 = FUN2(VAR2, VAR19);
        VAR12 = FUN3(VAR22, VAR12);
        VAR18 = memchr(VAR19, '', VAR15);
        VAR13 = VAR14 = VAR18 ? VAR18 - VAR19 + 1 : VAR15;
        VAR13 -= VAR18 ? (VAR18[-1] == '') + 1 : 0;
        VAR17 = VAR19;
        for (VAR10 = 0; VAR10 < 3; VAR10++, VAR17++)
            if (!(VAR17 = memchr(VAR17, '', VAR13 - (VAR17 - VAR19))))
                return VAR12;
        VAR13 -= VAR17 - VAR19;
        sscanf(VAR19, "", &VAR11);
        VAR10 = snprintf(VAR21, sizeof(VAR21), "" VAR23 "", VAR2->VAR24[VAR6->VAR25]->VAR26, VAR11);
        VAR13 = FUN4(VAR10 + VAR13, sizeof(VAR21));
        memcpy(VAR21 + VAR10, VAR17, VAR13 - VAR10);
        FUN5(VAR2, VAR27, "" VAR28 ""
                                "" VAR23 "",
               FUN6(VAR4), VAR13, VAR6->VAR29, VAR22);
        VAR20 = FUN7(VAR4, VAR30, FUN8(VAR13));
        FUN9(VAR4, VAR31);
        FUN10(VAR4, VAR13 + 4, 0);
        FUN11(VAR4, 0x80 | (VAR6->VAR25 + 1));
        FUN12(VAR4, VAR6->VAR29 - VAR8->VAR32);
        FUN11(VAR4, 0);
        FUN13(VAR4, VAR21, VAR13);
        FUN14(VAR4, VAR33, VAR22);
        FUN15(VAR4, VAR20);
        VAR19 += VAR14;
        VAR15 -= VAR14;
    }
    return VAR12;
}