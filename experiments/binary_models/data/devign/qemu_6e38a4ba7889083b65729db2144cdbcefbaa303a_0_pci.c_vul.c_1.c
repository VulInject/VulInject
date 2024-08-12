void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8;
    if (VAR2->VAR9 == &VAR4->VAR9)
    {
        return;
    }
    VAR4->VAR9.VAR10 = &VAR11;
    VAR2->VAR9 = &VAR4->VAR9;
    VAR4->VAR8 = VAR2->VAR8;
    VAR8 = FUN2(VAR12, VAR4, 1);
    VAR2->VAR8 = *VAR8;
    VAR4->VAR13 = VAR6;
}