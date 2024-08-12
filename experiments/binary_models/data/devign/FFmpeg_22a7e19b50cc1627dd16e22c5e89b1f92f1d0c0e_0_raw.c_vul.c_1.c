static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    VAR9 *VAR10 = VAR2->VAR11[0];
    VAR7 = VAR10->VAR12->VAR7;
    VAR8 = VAR10->VAR12->VAR8;
    VAR5 = FUN2(VAR10->VAR12->VAR13, VAR7, VAR8);
    if (VAR5 < 0)
        return -1;
    VAR6 = FUN3(VAR2->VAR14, VAR4, VAR5);
    VAR4->VAR15 = VAR4->VAR16 = VAR4->VAR17 / VAR5;
    VAR4->VAR18 = 0;
    if (VAR6 != VAR5)
        return FUN4(VAR19);
    return 0;
}