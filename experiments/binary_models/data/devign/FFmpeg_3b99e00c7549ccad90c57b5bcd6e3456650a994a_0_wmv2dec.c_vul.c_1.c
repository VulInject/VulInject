static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    GetBitContext VAR5;
    int VAR6;
    int VAR7;
    if (VAR4->VAR8->VAR9 < 4)
        return -1;
    FUN2(&VAR5, VAR4->VAR8->VAR10, VAR4->VAR8->VAR9 * 8);
    VAR6 = FUN3(&VAR5, 5);
    VAR4->VAR11 = FUN3(&VAR5, 11) * 1024;
    VAR2->VAR12 = FUN4(&VAR5);
    VAR4->VAR13 = FUN4(&VAR5);
    VAR2->VAR14 = FUN4(&VAR5);
    VAR2->VAR15 = FUN4(&VAR5);
    VAR2->VAR16 = FUN4(&VAR5);
    VAR2->VAR17 = FUN4(&VAR5);
    VAR7 = FUN3(&VAR5, 3);
    if (VAR7 == 0)
        return -1;
    VAR4->VAR18 = VAR4->VAR19 / VAR7;
    if (VAR4->VAR8->VAR20 & VAR21)
    {
        FUN5(VAR4->VAR8, VAR22, "", VAR6, VAR4->VAR11, VAR2->VAR12, VAR2->VAR14, VAR2->VAR15, VAR2->VAR16, VAR2->VAR17, VAR7, VAR4->VAR13, VAR7);
    }
    return 0;
}