static void FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    const int VAR5 = VAR2->VAR5;
    const int VAR6 = VAR4->VAR7.VAR6[VAR5];
    int VAR8 = VAR9 || VAR2->VAR8 || FUN2(VAR6) || VAR4->VAR10 == 0;
    if (VAR11 && !VAR4->VAR12)
        return;
    if (VAR8)
        FUN3(VAR2);
    else
        FUN4(VAR2);
}