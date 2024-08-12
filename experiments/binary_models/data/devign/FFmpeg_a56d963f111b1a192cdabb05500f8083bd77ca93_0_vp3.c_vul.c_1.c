static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9, VAR10;
    int VAR11 = 0, VAR12 = 0;
    AVRational VAR13, VAR14;
    VAR6->VAR15 = FUN2(VAR4, 24);
    FUN3(VAR2, VAR16, "", VAR6->VAR15);
    if (VAR6->VAR15 < 0x030200)
    {
        VAR6->VAR17 = 1;
        FUN3(VAR2, VAR16, "");
    }
    VAR8 = VAR6->VAR18 = FUN4(VAR4, 16) << 4;
    VAR9 = VAR6->VAR19 = FUN4(VAR4, 16) << 4;
    if (FUN5(VAR6->VAR18, VAR6->VAR19, 0, VAR2))
    {
        FUN3(VAR2, VAR20, "", VAR6->VAR18, VAR6->VAR19);
        VAR6->VAR18 = VAR6->VAR19 = 0;
        return -1;
    }
    if (VAR6->VAR15 >= 0x030200)
    {
        VAR8 = FUN2(VAR4, 24);
        VAR9 = FUN2(VAR4, 24);
        VAR11 = FUN4(VAR4, 8);
        VAR12 = FUN4(VAR4, 8);
    }
    VAR13.VAR21 = FUN2(VAR4, 32);
    VAR13.VAR22 = FUN2(VAR4, 32);
    if (VAR13.VAR21 && VAR13.VAR22)
    {
        FUN6(&VAR2->VAR23.VAR21, &VAR2->VAR23.VAR22, VAR13.VAR22, VAR13.VAR21, 1 << 30);
    }
    VAR14.VAR21 = FUN2(VAR4, 24);
    VAR14.VAR22 = FUN2(VAR4, 24);
    if (VAR14.VAR21 && VAR14.VAR22)
    {
        FUN6(&VAR2->VAR24.VAR21, &VAR2->VAR24.VAR22, VAR14.VAR21, VAR14.VAR22, 1 << 30);
    }
    if (VAR6->VAR15 < 0x030200)
        FUN7(VAR4, 5);
    VAR10 = FUN4(VAR4, 8);
    FUN7(VAR4, 24);
    FUN7(VAR4, 6);
    if (VAR6->VAR15 >= 0x030200)
    {
        FUN7(VAR4, 5);
        VAR2->VAR25 = VAR26[FUN4(VAR4, 2)];
        if (VAR2->VAR25 == VAR27)
        {
            FUN3(VAR2, VAR20, "");
            return VAR28;
        }
        FUN7(VAR4, 3);
    }
    if (VAR8 <= VAR6->VAR18 && VAR8 > VAR6->VAR18 - 16 && VAR9 <= VAR6->VAR19 && VAR9 > VAR6->VAR19 - 16 && !VAR11 && (VAR12 == VAR6->VAR19 - VAR9))
        FUN8(VAR2, VAR8, VAR9);
    else
        FUN8(VAR2, VAR6->VAR18, VAR6->VAR19);
    if (VAR10 == 1)
    {
        VAR2->VAR29 = VAR30;
    }
    else if (VAR10 == 2)
    {
        VAR2->VAR29 = VAR31;
    }
    if (VAR10 == 1 || VAR10 == 2)
    {
        VAR2->VAR10 = VAR32;
        VAR2->VAR33 = VAR34;
    }
    return 0;
}