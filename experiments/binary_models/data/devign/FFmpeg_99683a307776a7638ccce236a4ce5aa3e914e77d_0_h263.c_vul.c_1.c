static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5;
    if (VAR2->VAR6 || VAR2->VAR7)
    {
        VAR5 = 5;
        VAR2->VAR8 = VAR9;
    }
    else
    {
        VAR5 = 1;
        VAR2->VAR8 = VAR10;
    }
    FUN2(&VAR2->VAR11, 16, 0);
    FUN2(&VAR2->VAR11, 16, 0x100 + VAR3);
    FUN2(&VAR2->VAR11, 16, 0);
    FUN2(&VAR2->VAR11, 16, 0x120 + VAR4);
    FUN2(&VAR2->VAR11, 1, 0);
    FUN2(&VAR2->VAR11, 8, VAR2->VAR8);
    FUN2(&VAR2->VAR11, 1, 1);
    FUN2(&VAR2->VAR11, 4, VAR5);
    FUN2(&VAR2->VAR11, 3, 1);
    FUN3(VAR2, VAR2->VAR12->VAR13);
    FUN2(&VAR2->VAR11, 4, VAR2->VAR14);
    if (VAR2->VAR14 == VAR15)
    {
        FUN2(&VAR2->VAR11, 8, VAR2->VAR12->VAR13.VAR16);
        FUN2(&VAR2->VAR11, 8, VAR2->VAR12->VAR13.VAR17);
    }
    if (VAR2->VAR18)
    {
        FUN2(&VAR2->VAR11, 1, 1);
        FUN2(&VAR2->VAR11, 2, 1);
        FUN2(&VAR2->VAR11, 1, VAR2->VAR18);
        FUN2(&VAR2->VAR11, 1, 0);
    }
    else
    {
        FUN2(&VAR2->VAR11, 1, 0);
    }
    FUN2(&VAR2->VAR11, 2, VAR19);
    FUN2(&VAR2->VAR11, 1, 1);
    FUN2(&VAR2->VAR11, 16, VAR2->VAR20);
    if (VAR2->VAR21 < 1)
        VAR2->VAR21 = 1;
    FUN2(&VAR2->VAR11, 1, 1);
    FUN2(&VAR2->VAR11, 1, 0);
    FUN2(&VAR2->VAR11, 1, 1);
    FUN2(&VAR2->VAR11, 13, VAR2->VAR22);
    FUN2(&VAR2->VAR11, 1, 1);
    FUN2(&VAR2->VAR11, 13, VAR2->VAR23);
    FUN2(&VAR2->VAR11, 1, 1);
    FUN2(&VAR2->VAR11, 1, VAR2->VAR24 ? 0 : 1);
    FUN2(&VAR2->VAR11, 1, 1);
    if (VAR5 == 1)
    {
        FUN2(&VAR2->VAR11, 1, VAR2->VAR25 = 0);
    }
    else
    {
        FUN2(&VAR2->VAR11, 2, VAR2->VAR25 = 0);
    }
    VAR2->VAR26 = 5;
    FUN2(&VAR2->VAR11, 1, 0);
    FUN2(&VAR2->VAR11, 1, VAR2->VAR27);
    if (VAR2->VAR27)
    {
        FUN4(&VAR2->VAR11, VAR2->VAR12->VAR28);
        FUN4(&VAR2->VAR11, VAR2->VAR12->VAR29);
    }
    if (VAR5 != 1)
        FUN2(&VAR2->VAR11, 1, VAR2->VAR7);
    FUN2(&VAR2->VAR11, 1, 1);
    VAR2->VAR30 = VAR2->VAR31;
    FUN2(&VAR2->VAR11, 1, VAR2->VAR30 ? 0 : 1);
    FUN2(&VAR2->VAR11, 1, VAR2->VAR32 ? 1 : 0);
    if (VAR2->VAR32)
    {
        FUN2(&VAR2->VAR11, 1, 0);
    }
    if (VAR5 != 1)
    {
        FUN2(&VAR2->VAR11, 1, 0);
        FUN2(&VAR2->VAR11, 1, 0);
    }
    FUN2(&VAR2->VAR11, 1, 0);
    FUN5(&VAR2->VAR11);
    if (!(VAR2->VAR33 & VAR34))
    {
        FUN2(&VAR2->VAR11, 16, 0);
        FUN2(&VAR2->VAR11, 16, 0x1B2);
        FUN6(&VAR2->VAR11, VAR35);
        FUN5(&VAR2->VAR11);
    }
}