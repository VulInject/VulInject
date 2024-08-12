static inline int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, int VAR5)
{
    const struct VAR6 *VAR6 = VAR2->VAR6[VAR2->VAR7];
    int VAR8 = 0;
    if ((VAR5 & VAR9) && !(VAR2->VAR10->VAR5 & VAR11))
        return 0;
    if (VAR6->VAR12 || FUN2(VAR6->VAR13, VAR3, NULL, 0))
    {
        if (VAR5 & VAR14)
        {
            char *VAR15 = NULL, *VAR16 = NULL;
            VAR8 = FUN3(VAR2, &VAR15, VAR3);
            if (VAR8 < 0)
                goto VAR17;
            VAR8 = FUN3(VAR2, &VAR16, VAR4);
            if (VAR8 < 0)
                goto VAR17;
            VAR2->VAR10->FUN4(VAR2, VAR15, VAR16);
        VAR17:
            if (VAR8 < 0)
            {
                FUN5(VAR2, VAR18, "", VAR3, VAR4, VAR6->VAR19);
            }
            FUN6(VAR15);
            FUN6(VAR16);
        }
        else
        {
            VAR2->VAR10->FUN4(VAR2, VAR3, VAR4);
        }
        VAR2->VAR20[VAR2->VAR7]++;
    }
    return VAR8;
}