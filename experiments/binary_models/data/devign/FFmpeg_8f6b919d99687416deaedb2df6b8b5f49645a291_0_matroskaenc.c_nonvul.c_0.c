static void FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned int VAR5, VAR6 *VAR7, int VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13 = VAR2->VAR14[VAR7->VAR15]->VAR13;
    VAR16 *VAR17 = NULL, *VAR18 = NULL;
    int VAR19 = 0, VAR20 = VAR7->VAR20, VAR21 = 0;
    int64_t VAR22 = VAR10->VAR23[VAR7->VAR15].VAR24 ? VAR7->VAR25 : VAR7->VAR26;
    uint64_t VAR27 = 0;
    int64_t VAR28 = 0;
    ebml_master VAR29, VAR30, VAR31;
    FUN2(VAR2, VAR32, "" VAR33 ""
                            "" VAR34 "" VAR34 "",
           FUN3(VAR4), VAR7->VAR20, VAR7->VAR26, VAR7->VAR25, VAR7->VAR35, VAR8);
    if (VAR13->VAR36 == VAR37 && VAR13->VAR38 > 0 && (FUN4(VAR13->VAR39) == 1 || FUN5(VAR13->VAR39) == 1))
        FUN6(VAR7->VAR17, &VAR17, &VAR20);
    else if (VAR13->VAR36 == VAR40 && VAR13->VAR38 > 6 && (FUN4(VAR13->VAR39) == 1 || FUN5(VAR13->VAR39) == 1))
        FUN7(VAR7->VAR17, &VAR17, &VAR20, 0, NULL);
    else if (VAR13->VAR36 == VAR41)
    {
        int VAR42 = FUN8(VAR7->VAR17, &VAR17, &VAR20);
        if (VAR42 < 0)
        {
            FUN2(VAR2, VAR43, "");
            return;
        }
    }
    else
        VAR17 = VAR7->VAR17;
    if (VAR13->VAR36 == VAR44 && VAR20 >= 8)
    {
        VAR20 -= 8;
        VAR19 = 8;
    }
    VAR18 = FUN9(VAR7, VAR45, &VAR21);
    if (VAR18 && VAR21 >= 10)
    {
        VAR28 = FUN10(FUN11(VAR18 + 4), (VAR46){1, VAR13->VAR47}, (VAR46){1, 1000000000});
    }
    VAR18 = FUN9(VAR7, VAR48, &VAR21);
    if (VAR18)
    {
        VAR27 = FUN12(VAR18);
        VAR18 += 8;
        VAR21 -= 8;
    }
    if ((VAR21 && VAR27 == 1) || VAR28)
    {
        VAR29 = FUN13(VAR4, VAR49, 0);
        VAR5 = VAR50;
    }
    FUN14(VAR4, VAR5);
    FUN15(VAR4, VAR20 + 4, 0);
    FUN16(VAR4, 0x80 | (VAR10->VAR51 ? VAR10->VAR52 : (VAR7->VAR15 + 1)));
    FUN17(VAR4, VAR22 - VAR10->VAR53);
    FUN16(VAR4, VAR8);
    FUN18(VAR4, VAR17 + VAR19, VAR20);
    if (VAR17 != VAR7->VAR17)
        FUN19(VAR17);
    if (VAR28)
    {
        FUN20(VAR4, VAR54, VAR28);
    }
    if (VAR21 && VAR27 == 1)
    {
        VAR30 = FUN13(VAR4, VAR55, 0);
        VAR31 = FUN13(VAR4, VAR56, 0);
        FUN21(VAR4, VAR57, 1);
        FUN14(VAR4, VAR58);
        FUN15(VAR4, VAR21, 0);
        FUN18(VAR4, VAR18, VAR21);
        FUN22(VAR4, VAR31);
        FUN22(VAR4, VAR30);
    }
    if ((VAR21 && VAR27 == 1) || VAR28)
    {
        FUN22(VAR4, VAR29);
    }
}