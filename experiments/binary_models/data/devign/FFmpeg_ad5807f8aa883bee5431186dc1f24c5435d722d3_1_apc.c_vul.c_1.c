static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6;
    FUN2(VAR4);
    FUN2(VAR4);
    FUN2(VAR4);
    VAR6 = FUN3(VAR2, NULL);
    if (!VAR6)
        return FUN4(VAR7);
    VAR6->VAR8->VAR9 = VAR10;
    VAR6->VAR8->VAR11 = VAR12;
    FUN2(VAR4);
    VAR6->VAR8->VAR13 = FUN2(VAR4);
    if (FUN5(VAR2, VAR6->VAR8, VAR4, 2 * 4) < 0)
        return FUN4(VAR7);
    if (FUN2(VAR4))
    {
        VAR6->VAR8->VAR14 = 2;
        VAR6->VAR8->VAR15 = VAR16;
    }
    else
    {
        VAR6->VAR8->VAR14 = 1;
        VAR6->VAR8->VAR15 = VAR17;
    }
    VAR6->VAR8->VAR18 = 4;
    VAR6->VAR8->VAR19 = VAR6->VAR8->VAR18 * VAR6->VAR8->VAR14 * VAR6->VAR8->VAR13;
    VAR6->VAR8->VAR20 = 1;
    return 0;
}