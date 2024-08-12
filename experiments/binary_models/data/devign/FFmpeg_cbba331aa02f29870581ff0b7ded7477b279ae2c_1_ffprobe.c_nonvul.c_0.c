static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    char VAR5[128];
    int64_t VAR6 = VAR4->VAR7 ? FUN2(VAR4->VAR7) : -1;
    int VAR8 = 0;
    FUN3(VAR2, VAR9);
    FUN4("", VAR4->VAR10);
    FUN5("", VAR4->VAR11);
    FUN5("", VAR4->VAR12);
    FUN6("", VAR4->VAR13->VAR14);
    if (!VAR15)
    {
        if (VAR4->VAR13->VAR16)
            FUN6("", VAR4->VAR13->VAR16);
        else
            FUN7("", "");
    }
    FUN8("", VAR4->VAR17, &VAR18);
    FUN8("", VAR4->VAR19, &VAR18);
    if (VAR6 >= 0)
        FUN9("", VAR6, VAR20);
    else
        FUN7("", "");
    if (VAR4->VAR21 > 0)
        FUN9("", VAR4->VAR21, VAR22);
    else
        FUN7("", "");
    FUN5("", FUN10(VAR4));
    VAR8 = FUN11(VAR2, VAR4->VAR23, VAR24);
    FUN12(VAR2);
    FUN13(VAR25);
    return VAR8;
}