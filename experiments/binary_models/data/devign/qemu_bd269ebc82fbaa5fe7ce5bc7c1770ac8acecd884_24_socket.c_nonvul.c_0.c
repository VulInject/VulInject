static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, const char *VAR5)
{
    VAR1 *VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    int VAR11;
    VAR12 *VAR13 = NULL;
    VAR10 = FUN2(VAR5, &VAR13);
    if (VAR10 == NULL)
    {
        FUN3(VAR13);
        return -1;
    }
    VAR11 = FUN4(VAR10, &VAR13);
    if (VAR11 < 0)
    {
        FUN5(VAR10);
        FUN3(VAR13);
        return -1;
    }
    VAR6 = FUN6(&VAR14, VAR2, VAR3, VAR4);
    VAR8 = FUN7(VAR7, VAR6, VAR6);
    VAR8->VAR15 = -1;
    VAR8->VAR16 = VAR11;
    VAR8->VAR6.VAR17 = true;
    FUN8(&VAR8->VAR18, VAR19);
    FUN9(VAR8->VAR16, VAR20, NULL, VAR8);
    FUN5(VAR10);
    return 0;
}