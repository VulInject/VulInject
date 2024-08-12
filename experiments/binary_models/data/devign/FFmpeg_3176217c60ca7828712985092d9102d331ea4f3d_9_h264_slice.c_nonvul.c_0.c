static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5.VAR4;
    int VAR6 = VAR2->VAR6 - (VAR4->VAR7 + VAR4->VAR8);
    int VAR9 = VAR2->VAR9 - (VAR4->VAR10 + VAR4->VAR11);
    if (FUN2(VAR2->VAR12->VAR6, 16) == FUN2(VAR6, 16) && FUN2(VAR2->VAR12->VAR9, 16) == FUN2(VAR9, 16))
    {
        VAR6 = VAR2->VAR12->VAR6;
        VAR9 = VAR2->VAR12->VAR9;
    }
    if (VAR6 <= 0 || VAR9 <= 0)
    {
        FUN3(VAR2->VAR12, VAR13, "", VAR6, VAR9);
        if (VAR2->VAR12->VAR14 & VAR15)
            return VAR16;
        FUN3(VAR2->VAR12, VAR17, "");
        VAR4->VAR11 = VAR4->VAR10 = VAR4->VAR7 = VAR4->VAR8 = VAR4->VAR18 = 0;
        VAR6 = VAR2->VAR6;
        VAR9 = VAR2->VAR9;
    }
    VAR2->VAR12->VAR19 = VAR2->VAR6;
    VAR2->VAR12->VAR20 = VAR2->VAR9;
    VAR2->VAR12->VAR6 = VAR6;
    VAR2->VAR12->VAR9 = VAR9;
    return 0;
}