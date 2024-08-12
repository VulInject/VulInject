static int FUN1(VAR1 *VAR2)
{
    char *VAR3;
    int VAR4 = FUN2(VAR2);
    VAR5 *VAR6;
    VAR7 *VAR8 = VAR2->VAR9;
    if (VAR4)
    {
        FUN3(VAR2, VAR10, "");
        return -1;
        if (!VAR8->VAR11)
        {
            VAR3 = FUN4("", VAR8->VAR12);
            if (!VAR3)
                return FUN5(VAR13);
            FUN6(&VAR2->VAR14[0]->VAR15, VAR16, VAR3, 0);
            FUN7(VAR3);
            FUN8(&VAR2->VAR14[0]->VAR15, VAR17, FUN9(VAR2->VAR18) - 5, 0);
            VAR3 = strrchr(VAR2->VAR19, '');
            FUN6(&VAR2->VAR14[0]->VAR15, VAR20, VAR3 ? ++VAR3 : VAR2->VAR19, 0);
            VAR6 = VAR8->VAR6.VAR21;
            FUN8(&VAR2->VAR14[0]->VAR15, VAR22, VAR6[0].VAR23, 0);
            return VAR8->VAR11 ? 0 : FUN10(VAR2);