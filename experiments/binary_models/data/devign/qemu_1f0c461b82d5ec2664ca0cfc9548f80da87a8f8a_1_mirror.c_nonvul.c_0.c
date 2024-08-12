static void FUN1(VAR1 *VAR2, VAR1 *VAR3, const char *VAR4, int64_t VAR5, uint32_t VAR6, int64_t VAR7, BlockdevOnError VAR8, BlockdevOnError VAR9, bool VAR10, VAR11 *VAR12, void *VAR13, VAR14 **VAR15, const VAR16 *VAR17, bool VAR18, VAR1 *VAR19)
{
    VAR20 *VAR21;
    VAR1 *VAR22;
    if (VAR6 == 0)
    {
        VAR6 = FUN2(VAR3);
    }
    assert((VAR6 & (VAR6 - 1)) == 0);
    if (VAR7 < 0)
    {
        FUN3(VAR15, "");
        return;
    }
    if (VAR7 == 0)
    {
        VAR7 = VAR23;
    }
    if (VAR4)
    {
        VAR22 = FUN4(VAR4, VAR4, VAR15);
        if (VAR22 == NULL)
        {
            return;
        }
    }
    else
    {
        VAR22 = VAR2;
    }
    if (FUN5(VAR22) && FUN5(VAR3))
    {
        FUN3(VAR15, "");
        return;
    }
    VAR21 = FUN6(VAR17, VAR2, VAR5, VAR12, VAR13, VAR15);
    if (!VAR21)
    {
        return;
    }
    VAR21->VAR4 = FUN7(VAR4);
    VAR21->VAR8 = VAR8;
    VAR21->VAR9 = VAR9;
    VAR21->VAR3 = VAR3;
    VAR21->VAR18 = VAR18;
    VAR21->VAR19 = VAR19;
    VAR21->VAR6 = VAR6;
    VAR21->VAR7 = FUN8(VAR7, VAR6);
    VAR21->VAR10 = VAR10;
    VAR21->VAR24 = FUN9(VAR2, VAR6, NULL, VAR15);
    if (!VAR21->VAR24)
    {
        FUN10(VAR21->VAR4);
        FUN11(&VAR21->VAR25);
        return;
    }
    FUN12(VAR21->VAR3, VAR21->VAR25.VAR26);
    VAR21->VAR25.VAR27 = FUN13(VAR28);
    FUN14(VAR2, VAR21, VAR21->VAR25.VAR27, VAR13);
    FUN15(VAR21->VAR25.VAR27, VAR21);
}