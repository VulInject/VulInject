static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR10[0]->VAR11;
    int64_t VAR12, VAR13;
    VAR13 = VAR12 = FUN2(VAR4);
    if (VAR12 & 1)
    {
        FUN3(VAR4, 0);
        VAR13++;
    }
    if (VAR2->VAR4->VAR14 & VAR15)
    {
        FUN4(VAR4, VAR6->VAR16, VAR17);
        FUN5(VAR4, VAR12 - VAR6->VAR16 - 4);
        FUN4(VAR4, VAR6->VAR18, VAR17);
        FUN5(VAR4, (VAR12 - VAR6->VAR19 - 12) / VAR9->VAR20);
        FUN4(VAR4, VAR6->VAR19, VAR17);
        FUN5(VAR4, VAR12 - VAR6->VAR19 - 4);
        FUN4(VAR4, VAR13, VAR17);
        FUN6(VAR4);
    }
    return 0;
}