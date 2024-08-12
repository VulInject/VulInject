static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    VAR5 = &VAR2->VAR6[VAR3];
    VAR2->VAR7 = (VAR2->VAR7 + (VAR8)sizeof(VAR8) - 1) & ~(sizeof(VAR8) - 1);
    if (VAR2->VAR7 + (VAR8)sizeof(VAR8) > VAR2->VAR9)
    {
        FUN2();
    }
    VAR5->VAR10 = VAR2->VAR7;
    VAR5->VAR11 = VAR2->VAR12;
    VAR5->VAR13 = 1;
    VAR2->VAR7 += (VAR8)sizeof(VAR8);
}