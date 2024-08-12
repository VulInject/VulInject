static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    if (VAR5->VAR7 != VAR5->VAR8)
    {
        if (VAR5->VAR9 == 1)
            FUN2(VAR2, VAR5->VAR8 + 4, VAR5->VAR7 - VAR5->VAR8 - 4, VAR3);
        else
            FUN2(VAR2, VAR5->VAR8, VAR5->VAR7 - VAR5->VAR8, VAR3);
    }
    VAR5->VAR7 = VAR5->VAR8;
    VAR5->VAR9 = 0;
}