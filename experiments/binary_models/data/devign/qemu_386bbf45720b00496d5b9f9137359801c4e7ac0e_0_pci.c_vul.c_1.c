static int FUN1(VAR1 *VAR2, bool VAR3)
{
    int VAR4;
    char *VAR5;
    void *VAR6;
    char VAR7[32];
    if (!VAR2->VAR8)
        return 0;
    if (strlen(VAR2->VAR8) == 0)
        return 0;
    if (!VAR2->VAR9)
    {
        int class = FUN2(VAR2->VAR10 + VAR11);
        if (class == 0x0300)
        {
            FUN3(VAR2->VAR8);
        }
        else
        {
            FUN4(VAR2->VAR8, -1);
        }
        return 0;
    }
    VAR5 = FUN5(VAR12, VAR2->VAR8);
    if (VAR5 == NULL)
    {
        VAR5 = FUN6(VAR2->VAR8);
    }
    VAR4 = FUN7(VAR5);
    if (VAR4 < 0)
    {
        FUN8(""%VAR13\"", VAR14, VAR2->VAR8);
        return -1;
    }
    if (VAR4 & (VAR4 - 1))
    {
        VAR4 = 1 << FUN9(VAR4);
    }
    if (VAR2->VAR15.VAR16->VAR17)
        snprintf(VAR7, sizeof(VAR7), "", VAR2->VAR15.VAR16->VAR17->VAR7);
    else
        snprintf(VAR7, sizeof(VAR7), "", VAR2->VAR15.VAR16->VAR7);
    VAR2->VAR18 = FUN10(&VAR2->VAR15, VAR7, VAR4);
    VAR6 = FUN11(VAR2->VAR18);
    FUN12(VAR5, VAR6);
    if (VAR3)
    {
        FUN13(VAR2, VAR6, VAR4);
    }
    FUN14(VAR2, VAR19, VAR4, 0, VAR20);
    return 0;