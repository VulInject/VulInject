static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    if (VAR4->VAR7 != VAR8)
        return 0;
    VAR6 = (VAR4->VAR9 >= 0);
    if (VAR4->VAR9 >= 0 && (FUN2(VAR10) - VAR4->VAR11) >= VAR12)
    {
        close(VAR4->VAR9);
        VAR4->VAR9 = -1;
        FUN3("");
    }
    if (VAR4->VAR9 < 0)
    {
        if (VAR4->VAR13 && (FUN2(VAR10) - VAR4->VAR14) < VAR12)
        {
            FUN3("");
            return -VAR15;
        }
        VAR4->VAR9 = open(VAR2->VAR16, VAR4->VAR17);
        if (VAR4->VAR9 < 0)
        {
            VAR4->VAR14 = FUN2(VAR10);
            VAR4->VAR13 = 1;
            if (VAR6)
                VAR4->VAR18 = 1;
            FUN3("");
            return -VAR15;
        }
        FUN3("");
    }
    if (!VAR6)
        VAR4->VAR18 = 1;
    VAR4->VAR11 = FUN2(VAR10);
    VAR4->VAR13 = 0;
    return 0;
}