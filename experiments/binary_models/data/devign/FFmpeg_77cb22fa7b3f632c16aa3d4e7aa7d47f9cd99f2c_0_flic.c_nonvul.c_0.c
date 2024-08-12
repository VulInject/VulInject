static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR2->VAR9;
    unsigned char VAR10[VAR11];
    VAR12 *VAR13;
    int VAR14;
    int VAR15;
    VAR6->VAR16 = 0;
    if (FUN2(VAR9, VAR10, VAR11) != VAR11)
        return FUN3(VAR17);
    VAR15 = FUN4(&VAR10[4]);
    VAR14 = FUN5(&VAR10[0x10]);
    VAR13 = FUN6(VAR2, 0);
    if (!VAR13)
        return FUN3(VAR18);
    VAR6->VAR19 = VAR13->VAR20;
    VAR13->VAR21->VAR22 = VAR23;
    VAR13->VAR21->VAR24 = VAR25;
    VAR13->VAR21->VAR26 = 0;
    VAR13->VAR21->VAR27 = FUN4(&VAR10[0x08]);
    VAR13->VAR21->VAR28 = FUN4(&VAR10[0x0A]);
    if (!VAR13->VAR21->VAR27 || !VAR13->VAR21->VAR28)
    {
        FUN7(VAR2, VAR29, "");
        VAR13->VAR21->VAR27 = 640;
        VAR13->VAR21->VAR28 = 480;
    }
    VAR13->VAR21->VAR30 = VAR11;
    VAR13->VAR21->VAR31 = FUN8(VAR11);
    memcpy(VAR13->VAR21->VAR31, VAR10, VAR11);
    FUN9(VAR13, 33, 1, 90000);
    if (FUN4(&VAR10[0x10]) == VAR32)
    {
        VAR6->VAR33 = VAR34;
        FUN10(VAR9, 12, VAR35);
        FUN11(VAR13->VAR21->VAR31);
        VAR13->VAR21->VAR30 = 12;
        VAR13->VAR21->VAR31 = FUN8(12);
        memcpy(VAR13->VAR21->VAR31, VAR10, 12);
    }
    else if (VAR15 == VAR36)
    {
        VAR6->VAR33 = VAR14 * 1285.7;
    }
    else if ((VAR15 == VAR37) || (VAR15 == VAR38))
    {
        VAR6->VAR33 = VAR14 * 90;
    }
    else
    {
        FUN7(VAR2, VAR39, "");
        return VAR40;
    }
    if (VAR6->VAR33 == 0)
        VAR6->VAR33 = VAR41;
    return 0;
}