static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    char VAR5[128];
    int64_t VAR6 = VAR4->VAR7 ? FUN2(VAR4->VAR7) : -1;
    FUN3("");
    FUN4("", VAR4->VAR8);
    FUN5("", VAR4->VAR9);
    FUN4("", VAR4->VAR10->VAR11);
    FUN4("", VAR4->VAR10->VAR12);
    FUN6("", VAR4->VAR13, &VAR14);
    FUN6("", VAR4->VAR15, &VAR14);
    if (VAR6 >= 0)
        FUN7("", VAR6, VAR16);
    else
        FUN8("", "");
    if (VAR4->VAR17 > 0)
        FUN7("", VAR4->VAR17, VAR18);
    else
        FUN8("", "");
    FUN9(VAR4->VAR19);
    FUN10("");
    FUN11(VAR20);
}