static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, double VAR9, int64_t VAR10, int64_t VAR11)
{
    if ((VAR4->VAR12 & (VAR13 | VAR14)) && strlen(VAR6->VAR15))
    {
        FUN2(VAR6->VAR16->VAR17, VAR6->VAR15, sizeof(VAR6->VAR16->VAR17));
        if (VAR4->VAR12 & VAR13)
        {
            char *VAR17 = NULL;
            if (FUN3(&VAR17, VAR6->VAR16->VAR17, '', VAR10 + VAR11) < 1)
            {
                FUN4(VAR4, VAR18, ""
                                          "",
                       VAR17);
                FUN5(VAR17);
                FUN5(VAR8);
                return FUN6(VAR19);
            }
            FUN2(VAR6->VAR16->VAR17, VAR17, sizeof(VAR6->VAR16->VAR17));
            FUN5(VAR17);
        }
        if (VAR4->VAR12 & VAR14)
        {
            char *VAR17 = NULL;
            if (FUN3(&VAR17, VAR6->VAR16->VAR17, '', (VAR20)FUN7(VAR9 * VAR21)) < 1)
            {
                FUN4(VAR4, VAR18, ""
                                          "",
                       VAR17);
                FUN5(VAR17);
                FUN5(VAR8);
                return FUN6(VAR19);
            }
            FUN2(VAR6->VAR16->VAR17, VAR17, sizeof(VAR6->VAR16->VAR17));
            FUN5(VAR17);
        }
    }
    return 0;
}