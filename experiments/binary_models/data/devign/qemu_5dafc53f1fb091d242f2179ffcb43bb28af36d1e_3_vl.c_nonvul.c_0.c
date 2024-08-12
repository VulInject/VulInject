static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    if (!VAR2->VAR4)
        return;
    VAR3 = VAR2->FUN2(VAR2->VAR5, VAR2->VAR6, VAR2->VAR7, VAR8);
    if (VAR3 < 0)
        VAR3 = 0;
    VAR2->VAR9 = 0;
    VAR2->VAR10 = VAR3;
    VAR2->VAR7 += VAR3;
}