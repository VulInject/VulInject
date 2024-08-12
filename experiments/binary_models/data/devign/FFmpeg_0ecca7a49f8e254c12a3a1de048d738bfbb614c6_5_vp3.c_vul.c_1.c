static int FUN1(VAR1 *VAR2, GetBitContext VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7, VAR8, VAR9;
    VAR7 = FUN2(&VAR3, 8);
    VAR8 = FUN2(&VAR3, 8);
    VAR9 = FUN2(&VAR3, 8);
    FUN3(VAR2, VAR10, "", VAR7, VAR8, VAR9);
    VAR5->VAR11 = (VAR7 << 16) | (VAR8 << 8) | VAR9;
    if (VAR5->VAR11 < 0x030300)
    {
        VAR5->VAR12 = 1;
        FUN3(VAR2, VAR13, "");
        VAR5->VAR14 = FUN2(&VAR3, 16) << 4;
        VAR5->VAR15 = FUN2(&VAR3, 16) << 4;
        FUN4(&VAR3, 24);
        FUN4(&VAR3, 24);
        FUN4(&VAR3, 8);
        FUN4(&VAR3, 8);
        FUN4(&VAR3, 32);
        FUN4(&VAR3, 32);
        FUN4(&VAR3, 24);
        FUN4(&VAR3, 24);
        if (VAR5->VAR11 < 0x030300)
            FUN4(&VAR3, 5);
        FUN4(&VAR3, 8);
        FUN4(&VAR3, 24);
        FUN4(&VAR3, 6);
        if (VAR5->VAR11 >= 0x030300)
        {
            FUN4(&VAR3, 5);
            FUN4(&VAR3, 5);
            VAR2->VAR14 = VAR5->VAR14;
            VAR2->VAR15 = VAR5->VAR15;
            FUN5(VAR2);
            return 0