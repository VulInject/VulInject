static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    struct VAR5 *VAR6;
    VAR7 *VAR8;
    char const *VAR9 = "";
    VAR10 *VAR11;
    unsigned int VAR12, VAR13;
    VAR11 = FUN2(VAR9, "");
    if (!VAR11)
    {
        FUN3(VAR4, "", VAR9);
        return;
    }
    while ((VAR6 = FUN4(VAR11)))
    {
        if ((VAR6->VAR14[0] != '') || (strcmp(VAR6->VAR15, "") == 0) || (strcmp(VAR6->VAR15, "") == 0))
        {
            continue;
        }
        if (FUN5(VAR6->VAR14, &VAR12, &VAR13) == -2)
        {
            continue;
        }
        VAR8 = FUN6(sizeof(VAR7));
        VAR8->VAR16 = FUN7(VAR6->VAR17);
        VAR8->VAR18 = FUN7(VAR6->VAR15);
        VAR8->VAR12 = VAR12;
        VAR8->VAR13 = VAR13;
        FUN8(VAR2, VAR8, VAR19);
    }
    FUN9(VAR11);
}