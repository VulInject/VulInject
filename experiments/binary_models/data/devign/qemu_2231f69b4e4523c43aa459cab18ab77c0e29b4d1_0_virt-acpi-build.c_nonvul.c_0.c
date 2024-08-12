FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7 = VAR2->VAR8;
    const VAR9 *VAR10 = VAR6->VAR10;
    const int *VAR11 = VAR6->VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    VAR16 *VAR17;
    int VAR18;
    VAR13 = FUN2(VAR2, sizeof *VAR13);
    VAR15 = FUN2(VAR2, sizeof *VAR15);
    VAR15->VAR19 = VAR20;
    VAR15->VAR21 = sizeof(*VAR15);
    VAR15->VAR22 = VAR10[VAR23].VAR24;
    VAR15->VAR25 = VAR6->VAR26;
    for (VAR18 = 0; VAR18 < VAR6->VAR27; VAR18++)
    {
        VAR28 *VAR29 = FUN2(VAR2, sizeof *VAR29);
        VAR30 *VAR31 = FUN3(FUN4(VAR18));
        VAR29->VAR19 = VAR32;
        VAR29->VAR21 = sizeof(*VAR29);
        if (VAR6->VAR26 == 2)
        {
            VAR29->VAR22 = VAR10[VAR33].VAR24;
        }
        VAR29->VAR34 = VAR18;
        VAR29->VAR35 = VAR31->VAR36;
        VAR29->VAR37 = VAR18;
        VAR29->VAR38 = FUN5(VAR39);
        if (VAR31->VAR40)
        {
            VAR29->VAR41 = FUN5(FUN6(VAR42));
        }
    }
    if (VAR6->VAR26 == 3)
    {
        VAR43 *VAR44;
        VAR45 *VAR46 = FUN2(VAR2, sizeof *VAR46);
        VAR46->VAR19 = VAR47;
        VAR46->VAR21 = sizeof(*VAR46);
        VAR46->VAR22 = FUN7(VAR10[VAR48].VAR24);
        VAR46->VAR49 = FUN5(VAR10[VAR48].VAR50);
        if (FUN8() && !VAR6->VAR51)
        {
            VAR44 = FUN2(VAR2, sizeof *VAR44);
            VAR44->VAR19 = VAR52;
            VAR44->VAR21 = sizeof(*VAR44);
            VAR44->VAR53 = 0;
            VAR44->VAR22 = FUN7(VAR10[VAR54].VAR24);
        }
    }
    else
    {
        VAR17 = FUN2(VAR2, sizeof *VAR17);
        VAR17->VAR19 = VAR55;
        VAR17->VAR21 = sizeof(*VAR17);
        VAR17->VAR56 = 0;
        VAR17->VAR22 = FUN7(VAR10[VAR57].VAR24);
        VAR17->VAR38 = FUN5(1);
        VAR17->VAR58 = FUN9(VAR59);
        VAR17->VAR60 = FUN9(VAR11[VAR57] + VAR61);
    }
    FUN10(VAR4, VAR2, (void *)(VAR2->VAR62 + VAR7), "", VAR2->VAR8 - VAR7, 3, NULL, NULL);
}