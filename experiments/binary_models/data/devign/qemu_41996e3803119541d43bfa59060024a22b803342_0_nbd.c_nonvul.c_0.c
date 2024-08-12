static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR7;
    int VAR8 = VAR7->VAR9;
    int VAR10, VAR11;
    FUN2(&VAR7->VAR12);
    FUN3(VAR8, VAR13, VAR14, VAR15, VAR7);
    VAR7->VAR16 = FUN4();
    if (!VAR5)
    {
        VAR10 = FUN5(VAR8, VAR4);
        if (VAR10 == -1)
        {
            VAR10 = -VAR17;
        }
    }
    else
    {
        FUN6(VAR8, 1);
        VAR10 = FUN5(VAR8, VAR4);
        if (VAR10 != -1)
        {
            VAR11 = FUN7(VAR8, VAR2->VAR18, VAR5);
            if (VAR11 != VAR5)
            {
                VAR17 = VAR19;
                VAR10 = -1;
            }
        }
        if (VAR10 == -1)
        {
            VAR10 = -VAR17;
        }
        FUN6(VAR8, 0);
    }
    VAR7->VAR16 = NULL;
    FUN3(VAR8, VAR13, VAR14, NULL, VAR7);
    FUN8(&VAR7->VAR12);
    return VAR10;
}