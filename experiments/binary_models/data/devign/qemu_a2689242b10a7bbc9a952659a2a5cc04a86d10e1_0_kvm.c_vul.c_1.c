static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    struct VAR5 *VAR6 = VAR4->VAR5;
    int VAR7 = VAR6->VAR8.VAR9;
    int VAR10 = 0;
    FUN3("", VAR7, (long)VAR4->VAR5->VAR11);
    switch (VAR7)
    {
    case VAR12:
        VAR10 = FUN4(VAR2, VAR6);
        break;
    case VAR13:
        if (FUN5(VAR2) == 0)
        {
            if (FUN6(VAR4))
            {
                FUN7();
            }
            else
            {
                VAR14 *VAR15;
                VAR15 = FUN8("", "");
                FUN9(VAR16, VAR15);
                FUN10(VAR15);
                FUN11(VAR17);
            }
        }
        VAR10 = VAR18;
        break;
    case VAR19:
        if (FUN5(VAR2) == 0)
        {
            FUN7();
        }
        VAR10 = VAR18;
        break;
    case VAR20:
        fprintf(VAR21, "");
        FUN12(1);
        break;
    case VAR22:
        fprintf(VAR21, "");
        FUN12(1);
        break;
    default:
        fprintf(VAR21, "", VAR7);
        FUN12(1);
        break;
    }
    return VAR10;
}