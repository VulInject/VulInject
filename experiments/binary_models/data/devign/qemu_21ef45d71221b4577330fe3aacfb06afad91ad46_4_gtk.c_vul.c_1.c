static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR4->VAR7;
    cairo_format_t VAR8;
    int VAR9;
    FUN2("", FUN3(VAR4), FUN4(VAR4));
    if (VAR6->VAR10)
    {
        FUN5(VAR6->VAR10);
    }
    switch (VAR4->VAR10->VAR11.VAR12)
    {
    case 8:
        VAR8 = VAR13;
        break;
    case 16:
        VAR8 = VAR14;
        break;
    case 32:
        VAR8 = VAR15;
        break;
    default:
        FUN6();
        break;
    }
    VAR9 = FUN7(VAR8, FUN3(VAR4));
    FUN8(FUN9(VAR4) == VAR9);
    VAR6->VAR10 = FUN10(FUN11(VAR4), VAR8, FUN3(VAR4), FUN4(VAR4), FUN9(VAR4));
    if (!VAR6->VAR16)
    {
        GtkRequisition VAR17;
        double VAR18, VAR19;
        if (VAR6->VAR20)
        {
            VAR18 = VAR6->VAR21;
            VAR19 = VAR6->VAR22;
            VAR6->VAR22 = 1.0;
            VAR6->VAR21 = 1.0;
        }
        else
        {
            VAR18 = 1.0;
            VAR19 = 1.0;
        }
        FUN12(VAR6->VAR23, FUN3(VAR4) * VAR6->VAR21, FUN4(VAR4) * VAR6->VAR22);
        FUN13(VAR6->VAR24, NULL, &VAR17);
        FUN14(VAR6->VAR24, &VAR17);
        FUN15(FUN16(VAR6->VAR25), VAR17.VAR26 * VAR18, VAR17.VAR27 * VAR19);
    }
}