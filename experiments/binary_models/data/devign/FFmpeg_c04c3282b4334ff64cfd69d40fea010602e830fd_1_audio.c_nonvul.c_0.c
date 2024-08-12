static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    int VAR10;
    if (VAR4->VAR11 <= 0 || VAR4->VAR12 <= 0)
        return -1;
    VAR9 = FUN2(VAR2, 0);
    if (!VAR9)
    {
        return -VAR13;
    }
    VAR6->VAR11 = VAR4->VAR11;
    VAR6->VAR12 = VAR4->VAR12;
    VAR10 = FUN3(VAR6, 0, VAR4->VAR14);
    if (VAR10 < 0)
    {
        FUN4(VAR9);
        return VAR15;
    }
    VAR9->VAR16->VAR17 = VAR18;
    VAR9->VAR16->VAR19 = VAR6->VAR19;
    VAR9->VAR16->VAR11 = VAR6->VAR11;
    VAR9->VAR16->VAR12 = VAR6->VAR12;
    FUN5(VAR9, 64, 1, 1000000);
    return 0;
}