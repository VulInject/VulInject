static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    int64_t VAR7, VAR8, VAR9;
    VAR7 = FUN2(VAR4) - VAR5;
    if (VAR7 != VAR2->VAR10 + VAR2->VAR11)
    {
        FUN3(VAR2->VAR12, VAR13, "");
        if (VAR5 < 8)
            return -1;
    }
    FUN4(VAR4, VAR6 ? VAR14 : NULL, 0);
    VAR8 = FUN5(VAR4);
    VAR9 = FUN5(VAR4);
    if (VAR2->VAR11 != VAR9)
    {
        FUN3(VAR2->VAR12, VAR13, "", VAR2->VAR11, VAR9, VAR7);
        if (VAR5 < 8)
            return -1;
    }
    VAR2->VAR15 = VAR2->VAR10;
    VAR2->VAR10 = VAR7;
    VAR2->VAR11 = VAR8;
    return VAR8;
}