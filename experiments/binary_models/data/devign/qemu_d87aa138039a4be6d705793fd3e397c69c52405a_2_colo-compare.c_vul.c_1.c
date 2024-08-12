static int FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    struct VAR4 *VAR5, *VAR6;
    int VAR7;
    FUN2("");
    VAR5 = (struct VAR4 *)VAR3->VAR8;
    VAR6 = (struct VAR4 *)VAR2->VAR8;
    if (FUN3(VAR3->VAR9->VAR10) & VAR11)
    {
        VAR2->VAR9->VAR12 = VAR3->VAR9->VAR12;
        VAR2->VAR9->VAR13 = VAR3->VAR9->VAR13;
    }
    if (VAR5->VAR14 > 5)
    {
        ptrdiff_t VAR15;
        VAR15 = VAR3->VAR8 - (VAR16 *)VAR3->VAR17 + (VAR5->VAR14 * 4) - VAR3->VAR18;
        VAR7 = FUN4(VAR3, VAR2, VAR15);
    }
    else if (VAR5->VAR19 == VAR6->VAR19)
    {
        VAR7 = FUN4(VAR3, VAR2, VAR20);
    }
    else
    {
        VAR7 = -1;
    }
    if (VAR7 != 0 && FUN5(VAR21))
    {
        char VAR22[20], VAR23[20], VAR24[20], VAR25[20];
        strcpy(VAR22, FUN6(VAR3->VAR9->VAR26));
        strcpy(VAR23, FUN6(VAR3->VAR9->VAR27));
        strcpy(VAR24, FUN6(VAR2->VAR9->VAR26));
        strcpy(VAR25, FUN6(VAR2->VAR9->VAR27));
        FUN7(VAR3->VAR28, VAR22, VAR23, VAR2->VAR28, VAR24, VAR25);
        FUN8("", FUN9(VAR5->VAR29), FUN9(VAR5->VAR30), VAR7, VAR5->VAR31, VAR3->VAR28);
        FUN8("", FUN9(VAR6->VAR29), FUN9(VAR6->VAR30), VAR7, VAR6->VAR31, VAR2->VAR28);
        FUN10((char *)VAR3->VAR17, VAR32, "", VAR3->VAR28);
        FUN10((char *)VAR2->VAR17, VAR32, "", VAR2->VAR28);
    }
    return VAR7;
}