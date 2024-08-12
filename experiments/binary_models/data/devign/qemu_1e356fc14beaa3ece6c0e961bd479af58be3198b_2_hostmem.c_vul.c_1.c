FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR3 *VAR9 = NULL;
    void *VAR10;
    uint64_t VAR11;
    if (VAR8->VAR12)
    {
        VAR8->FUN4(VAR6, &VAR9);
        if (VAR9)
        {
            goto VAR13;
        }
        VAR10 = FUN5(&VAR6->VAR14);
        VAR11 = FUN6(&VAR6->VAR14);
        if (VAR6->VAR15)
        {
            FUN7(VAR10, VAR11, VAR16);
        }
        if (!VAR6->VAR17)
        {
            FUN7(VAR10, VAR11, VAR18);
        }
        unsigned long VAR19 = FUN8(VAR6->VAR20, VAR21);
        unsigned long VAR22 = (VAR19 + 1) % (VAR21 + 1);
        unsigned VAR23 = VAR24 | VAR25;
        if (VAR22 && VAR6->VAR26 == VAR27)
        {
            FUN9(VAR4, ""
                             ""
                             "");
            return;
        }
        else if (VAR22 == 0 && VAR6->VAR26 != VAR27)
        {
            FUN9(VAR4, "", VAR28[VAR6->VAR26]);
            return;
        }
        assert(sizeof(VAR6->VAR20) >= FUN10(VAR21 + 1) * sizeof(unsigned long));
        assert(VAR22 <= VAR21);
        if (FUN11(VAR10, VAR11, VAR6->VAR26, VAR22 ? VAR6->VAR20 : NULL, VAR22 + 1, VAR23))
        {
            if (VAR6->VAR26 != VAR27 || VAR29 != VAR30)
            {
                FUN12(VAR4, VAR29, "");
                return;
            }
        }
        if (VAR6->VAR31)
        {
            FUN13(FUN14(&VAR6->VAR14), VAR10, VAR11, &VAR9);
            if (VAR9)
            {
                goto VAR13;
            }
        }
    }
VAR13:
    FUN15(VAR4, VAR9);
}