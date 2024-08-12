int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8;
    char VAR9[VAR10];
    char VAR11[VAR10];
    VAR2->VAR12 = 0;
    VAR2->VAR13 = 0;
    VAR2->VAR14 = 0;
    VAR2->VAR15 = 0;
    if (VAR4 & VAR16)
        VAR2->VAR15 = 1;
    if (VAR4 & VAR17)
    {
        VAR1 *VAR18;
        int64_t VAR19;
        VAR18 = FUN2("");
        if (!VAR18)
        {
            return -VAR20;
        }
        if (FUN3(VAR18, VAR3, 0) < 0)
        {
            FUN4(VAR18);
            return -1;
        }
        VAR19 = FUN5(VAR18) >> VAR21;
        FUN4(VAR18);
        FUN6(VAR9, sizeof(VAR9));
        FUN7(VAR3, VAR11);
        if (FUN8(&VAR22, VAR9, VAR19, VAR11, 0) < 0)
        {
            return -1;
        }
        VAR3 = VAR9;
        VAR2->VAR13 = 1;
    }
    FUN9(VAR2->VAR3, sizeof(VAR2->VAR3), VAR3);
    if (VAR4 & VAR23)
    {
        VAR6 = FUN10(VAR3);
        if (!VAR6)
            return -VAR24;
    }
    else
    {
        if (!VAR6)
        {
            VAR6 = FUN11(VAR3);
            if (!VAR6)
                return -1;
        }
    }
    VAR2->VAR6 = VAR6;
    VAR2->VAR25 = FUN12(VAR6->VAR26);
    VAR2->VAR27 = 0;
    if (VAR2->VAR25 == NULL && VAR6->VAR26 > 0)
        return -1;
    if (!(VAR4 & VAR23))
        VAR8 = VAR28 | (VAR4 & VAR29);
    else
        VAR8 = VAR4 & ~(VAR23 | VAR17);
    VAR7 = VAR6->FUN3(VAR2, VAR3, VAR8);
    if (VAR7 == -VAR30 && !(VAR4 & VAR23))
    {
        VAR7 = VAR6->FUN3(VAR2, VAR3, VAR31);
        VAR2->VAR12 = 1;
    }
    if (VAR7 < 0)
    {
        FUN13(VAR2->VAR25);
        VAR2->VAR25 = NULL;
        VAR2->VAR6 = NULL;
        return VAR7;
    }
    if (VAR6->VAR32)
    {
        VAR2->VAR27 = FUN5(VAR2) >> VAR21;
    }
    if (VAR2->VAR13)
    {
        unlink(VAR3);
    }
    if (VAR2->VAR33[0] != '')
    {
        VAR2->VAR34 = FUN2("");
        if (!VAR2->VAR34)
        {
        VAR35:
            FUN14(VAR2);
            return -VAR20;
        }
        FUN15(VAR11, sizeof(VAR11), VAR3, VAR2->VAR33);
        if (FUN3(VAR2->VAR34, VAR11, 0) < 0)
            goto VAR35;
    }
    VAR2->VAR36 = 1;
    if (VAR2->VAR37)
        VAR2->FUN16(VAR2->VAR38);
    return 0;
}