static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    int VAR5;
    int VAR6, VAR7;
    VAR2->VAR8 = FUN2(&VAR4->VAR9, 8);
    VAR2->VAR10 = FUN2(&VAR4->VAR9, 8);
    FUN3(&VAR4->VAR9);
    VAR6 = FUN2(&VAR4->VAR9, 14);
    VAR7 = FUN2(&VAR4->VAR9, 14);
    if ((VAR4->VAR6 || VAR4->VAR7) && (VAR4->VAR6 != VAR6 || VAR4->VAR7 != VAR7))
    {
        FUN4(VAR4, "", 0);
        return -1;
        VAR4->VAR6 = VAR6;
        VAR4->VAR7 = VAR7;
        FUN5(&VAR4->VAR9, 2);
        FUN5(&VAR4->VAR9, 3);
        VAR2->VAR11 = FUN2(&VAR4->VAR9, 4);
        VAR5 = FUN2(&VAR4->VAR9, 4);
        FUN5(&VAR4->VAR9, 18);
        FUN3(&VAR4->VAR9);
        FUN5(&VAR4->VAR9, 12);
        VAR4->VAR12 = FUN6(&VAR4->VAR9);
        VAR2->VAR13 = (VAR4->VAR6 + 15) >> 4;
        VAR2->VAR14 = (VAR4->VAR7 + 15) >> 4;
        VAR2->VAR4.VAR15->VAR16.VAR17 = VAR18[VAR5].VAR19;
        VAR2->VAR4.VAR15->VAR16.VAR19 = VAR18[VAR5].VAR17;
        VAR2->VAR4.VAR15->VAR6 = VAR4->VAR6;
        VAR2->VAR4.VAR15->VAR7 = VAR4->VAR7;
        if (!VAR2->VAR20)
            FUN7(VAR2);
        return 0;