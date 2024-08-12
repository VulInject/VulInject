static void FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2, VAR4, VAR6);
    VAR7 *VAR8 = VAR3;
    VAR9 *VAR10 = FUN3(VAR2->VAR11);
    VAR9 *VAR12 = VAR5->VAR12;
    VAR13 *VAR14 = NULL;
    if (!FUN4(&VAR5->VAR6) && VAR10->VAR15 && VAR8->VAR16 == 0)
    {
        const char *VAR17 = NULL, *VAR18 = NULL;
        if (VAR12)
        {
            VAR17 = VAR5->VAR19;
            if (VAR12->VAR20)
            {
                VAR18 = VAR12->VAR20->VAR21;
            }
        }
        VAR8->VAR16 = FUN5(VAR10, VAR17, VAR18);
        FUN6(VAR10, VAR12, &VAR14);
        if (VAR14)
        {
            FUN7(VAR14);
            VAR8->VAR16 = -VAR22;
            goto VAR23;
        }
    }
VAR23:
    if (VAR5->VAR24 != FUN8(VAR10))
    {
        FUN9(VAR2->VAR11, 0, VAR25, &VAR26);
        FUN10(VAR10, VAR5->VAR24, NULL);
    }
    FUN11(VAR5->VAR19);
    FUN12(&VAR5->VAR6, VAR8->VAR16);
    FUN11(VAR8);
}