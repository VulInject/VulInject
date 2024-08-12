static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR2->VAR6 = VAR7;
    VAR2->VAR8 = 0;
    VAR4->VAR9 = 0;
    VAR4->VAR10 = FUN2(sizeof(VAR11) * VAR12);
    VAR4->VAR13 = VAR12;
    VAR4->VAR14 = 0;
    if (FUN3(VAR2, 0, VAR15) < 0)
    {
        return -1;
    }
    FUN4(VAR2->VAR16);
    VAR4->VAR17 = 0;
    VAR4->VAR18 = -1;
    VAR4->VAR19 = -1;
    FUN5(&VAR4->VAR16, VAR4->VAR20, VAR2->VAR6, 1, NULL, NULL, NULL, NULL);
    if (VAR2->VAR21 < 0)
        VAR2->VAR21 = 1;
    return 0;