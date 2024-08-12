int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8;
    char VAR9[VAR10];
    char VAR11[VAR10];
    VAR2->VAR12 = 0;
    VAR2->VAR13 = 0;
    VAR2->VAR14 = 0;
    if (VAR4 & VAR15)
    {
        VAR1 *VAR16;
        int64_t VAR17;
        VAR16 = FUN2("");
        if (!VAR16)
        {
            return -VAR18;
        }
        if (FUN3(VAR16, VAR3, 0) < 0)
        {
            FUN4(VAR16);
            return -1;
        }
        VAR17 = FUN5(VAR16) >> VAR19;
        FUN4(VAR16);
        FUN6(VAR9, sizeof(VAR9));
        FUN7(VAR3, VAR11);
        if (FUN8(&VAR20, VAR9, VAR17, VAR11, 0) < 0)
        {
            return -1;
        }
        VAR3 = VAR9;
        VAR2->VAR13 = 1;
    }
    FUN9(VAR2->VAR3, sizeof(VAR2->VAR3), VAR3);
    if (VAR4 & VAR21)
    {
        VAR6 = FUN10(VAR3);
        if (!VAR6)
            return -VAR22;
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
    VAR2->VAR23 = FUN12(VAR6->VAR24);
    VAR2->VAR25 = 0;
    if (VAR2->VAR23 == NULL && VAR6->VAR24 > 0)
        return -1;
    if (!(VAR4 & VAR21))
        VAR8 = VAR26 | (VAR4 & VAR27);
    else
        VAR8 = VAR4 & ~(VAR21 | VAR15);
    VAR7 = VAR6->FUN3(VAR2, VAR3, VAR8);
    if (VAR7 == -VAR28 && !(VAR4 & VAR21))
    {
        VAR7 = VAR6->FUN3(VAR2, VAR3, VAR29);
        VAR2->VAR12 = 1;
    }
    if (VAR7 < 0)
    {
        FUN13(VAR2->VAR23);
        VAR2->VAR23 = NULL;
        VAR2->VAR6 = NULL;
        return VAR7;
    }
    if (VAR6->VAR30)
    {
        VAR2->VAR25 = FUN5(VAR2) >> VAR19;
    }
    if (VAR2->VAR13)
    {
        unlink(VAR3);
    }
    if (VAR2->VAR31[0] != '')
    {
        VAR2->VAR32 = FUN2("");
        if (!VAR2->VAR32)
        {
        VAR33:
            FUN14(VAR2);
            return -VAR18;
        }
        FUN15(VAR11, sizeof(VAR11), VAR3, VAR2->VAR31);
        if (FUN3(VAR2->VAR32, VAR11, 0) < 0)
            goto VAR33;
    }
    VAR2->VAR34 = 1;
    if (VAR2->VAR35)
        VAR2->FUN16(VAR2->VAR36);
    return 0;