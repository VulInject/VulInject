FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int VAR9)
{
    unsigned int VAR10;
    int VAR11;
    int64_t VAR12;
    int VAR13;
    FUN2(VAR6, 64, 1, 1000);
    VAR12 = FUN3(VAR4);
    VAR10 = FUN4(VAR4);
    if (VAR10 == FUN5(0xfd, '', '', ''))
    {
        if (FUN6(VAR2, VAR4, VAR6, VAR8, 0))
            return -1;
    }
    else if (VAR10 == FUN7('', '', '', ''))
    {
        FUN8(VAR4, -4, VAR14);
        if ((VAR13 = FUN9(VAR4, VAR6->VAR15, VAR9)) < 0)
            return VAR13;
        VAR6->VAR15->VAR16 = VAR17;
        VAR6->VAR15->VAR18 = FUN10(VAR6->VAR15->VAR19);
        VAR6->VAR15->VAR20 = FUN11(VAR21, VAR6->VAR15->VAR18);
    }
    else
    {
        int VAR22;
        if (FUN12(VAR4) != FUN5('', '', '', ''))
        {
        VAR23:
            FUN13(VAR6->VAR15, VAR24, "");
            goto VAR25;
        }
        VAR6->VAR15->VAR18 = FUN12(VAR4);
        VAR6->VAR15->VAR20 = FUN11(VAR21, VAR6->VAR15->VAR18);
        if (VAR6->VAR15->VAR20 == VAR26)
            goto VAR23;
        VAR6->VAR15->VAR27 = FUN14(VAR4);
        VAR6->VAR15->VAR28 = FUN14(VAR4);
        FUN15(VAR4, 2);
        FUN15(VAR4, 4);
        VAR6->VAR15->VAR16 = VAR29;
        VAR6->VAR30 = VAR31;
        VAR22 = FUN4(VAR4);
        if ((VAR13 = FUN9(VAR4, VAR6->VAR15, VAR9 - (FUN3(VAR4) - VAR12))) < 0)
            return VAR13;
        FUN16(&VAR6->VAR32.VAR33, &VAR6->VAR32.VAR34, 0x10000, VAR22, (1 << 30) - 1);
        VAR6->VAR35 = VAR6->VAR32;
    }
VAR25:
    VAR11 = FUN3(VAR4) - VAR12;
    FUN15(VAR4, VAR9 - VAR11);
    return 0;
}