static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5;
    uint8_t VAR6 = 13, VAR7 = 25, VAR8 = 37, VAR9 = 61;
    uint8_t VAR10;
    VAR10 = FUN2(VAR4->VAR11[0], VAR4->VAR11[1]);
    if (VAR4->VAR12 & 1)
        FUN3(VAR2, VAR6, VAR7);
    if (VAR4->VAR12 & 2)
        FUN3(VAR2, VAR7, VAR8);
    if (VAR4->VAR12 & 4)
    {
        if (VAR4->VAR13 > 0 && VAR4->VAR13 <= 2 && (VAR4->VAR14 & VAR15))
            FUN3(VAR2, VAR8, VAR10);
        else
        {
            FUN3(VAR2, VAR8, VAR9);
            if (VAR4->VAR12 & 8)
                FUN3(VAR2, VAR9, VAR10);
        }
    }
}