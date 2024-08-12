static int FUN1(VAR1 *VAR2, VAR3 *VAR4, char *VAR5, int VAR6, int VAR7, int VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13 = FUN2(VAR4->VAR14, VAR15, NULL, 0);
    VAR12 *VAR16 = FUN2(VAR4->VAR14, VAR17, NULL, 0);
    VAR12 *VAR18 = FUN2(VAR4->VAR14, VAR19, NULL, 0);
    VAR12 *VAR20 = FUN2(VAR4->VAR14, VAR21, NULL, 0);
    VAR12 *VAR22 = FUN2(VAR4->VAR14, VAR23, NULL, 0);
    if ((VAR10->VAR24 && (!VAR20)) || (!VAR10->VAR24 && (!VAR13 || !VAR16 || !VAR18 || !VAR20 || !VAR22)))
    {
        return -1;
    }
    FUN3(VAR2->VAR25, ""%VAR2\"", VAR5);
    FUN3(VAR2->VAR25, ""%VAR2\"", VAR10->VAR24 ? (VAR4->VAR26->VAR27 == VAR28 ? "" : "") : VAR22->VAR29);
    if (VAR4->VAR26->VAR27 == VAR30 && VAR6)
        FUN3(VAR2->VAR25, ""%VAR31\"", VAR4->VAR26->VAR32);
    if (VAR4->VAR26->VAR27 == VAR30 && VAR7)
        FUN3(VAR2->VAR25, ""%VAR31\"", VAR4->VAR26->VAR33);
    if (VAR4->VAR26->VAR27 = VAR28 && VAR8)
        FUN3(VAR2->VAR25, ""%VAR31\"", VAR4->VAR26->VAR34);
    if (VAR10->VAR24)
    {
        FUN3(VAR2->VAR25, ""%VAR2\"", FUN4(VAR4->VAR26->VAR35));
        FUN3(VAR2->VAR25, ""%VAR2/VAR36\"", VAR4->VAR26->VAR27 == VAR30 ? "" : "");
        FUN3(VAR2->VAR25, ""1\"");
        FUN3(VAR2->VAR25, "");
    }
    else
    {
        FUN3(VAR2->VAR25, "");
        FUN3(VAR2->VAR25, "", VAR20->VAR29);
        FUN3(VAR2->VAR25, "");
        FUN3(VAR2->VAR25, ""%VAR2-%VAR2\"", VAR16->VAR29, VAR18->VAR29);
        FUN3(VAR2->VAR25, "");
        FUN3(VAR2->VAR25, ""0-%VAR2\"", VAR13->VAR29);
        FUN3(VAR2->VAR25, "");
    }
    FUN3(VAR2->VAR25, "");
    return 0;
}