static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR1 *VAR6 = VAR4->VAR7;
    size_t VAR8;
    if (VAR4->VAR9)
        VAR4->VAR10 %= VAR4->VAR9;
    if (VAR4->VAR11)
    {
        time_t VAR12;
        struct VAR13 *VAR13, VAR14;
        FUN2(&VAR12);
        VAR13 = FUN3(&VAR12, &VAR14);
        if (!FUN4(VAR6->VAR15, sizeof(VAR6->VAR15), VAR2->VAR15, VAR13))
        {
            FUN5(VAR6, VAR16, "");
            return FUN6(VAR17);
        }
    }
    else if (FUN7(VAR6->VAR15, sizeof(VAR6->VAR15), VAR2->VAR15, VAR4->VAR10) < 0)
    {
        FUN5(VAR6, VAR16, "", VAR2->VAR15);
        return FUN6(VAR17);
    }
    VAR8 = strlen(FUN8(VAR6->VAR15)) + 1;
    if (VAR4->VAR18)
        VAR8 += strlen(VAR4->VAR18);
    VAR4->VAR19.VAR15 = FUN9(VAR8);
    if (!VAR4->VAR19.VAR15)
        return FUN6(VAR20);
    snprintf(VAR4->VAR19.VAR15, VAR8, "", VAR4->VAR18 ? VAR4->VAR18 : "", FUN8(VAR6->VAR15));
    return 0;
}