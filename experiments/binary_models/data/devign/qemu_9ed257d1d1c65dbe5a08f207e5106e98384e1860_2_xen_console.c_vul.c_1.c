static int FUN1(struct VAR1 *VAR2)
{
    struct VAR3 *VAR4 = FUN2(VAR2, struct VAR3, VAR2);
    int VAR5;
    if (FUN3(VAR4->VAR6, "", &VAR4->VAR7) == -1)
        return -1;
    if (FUN3(VAR4->VAR6, "", &VAR4->VAR2.VAR8) == -1)
        return -1;
    if (FUN3(VAR4->VAR6, "", &VAR5) == 0)
        VAR4->VAR9.VAR10 = VAR5;
    if (!VAR2->VAR11)
    {
        VAR4->VAR12 = FUN4(VAR13, VAR4->VAR2.VAR14, VAR15, VAR16 | VAR17, VAR4->VAR7);
    }
    else
    {
        VAR4->VAR12 = FUN5(VAR2->VAR18, VAR4->VAR2.VAR14, VAR4->VAR7, VAR16 | VAR17);
    }
    if (!VAR4->VAR12)
        return -1;
    FUN6(&VAR4->VAR2);
    if (VAR4->VAR19)
    {
        if (FUN7(VAR4->VAR19) == 0)
        {
            FUN8(VAR4->VAR19, VAR20, VAR21, NULL, VAR4);
        }
        else
        {
            FUN9(VAR2, 0, "", VAR4->VAR19->VAR22);
            VAR4->VAR19 = NULL;
        }
    }
    FUN9(VAR2, 1, "", VAR4->VAR7, VAR4->VAR2.VAR8, VAR4->VAR2.VAR23, VAR4->VAR9.VAR10);
    return 0;
}