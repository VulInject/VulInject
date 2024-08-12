void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2;
    const int VAR5 = VAR2->VAR5;
    const int VAR6 = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR9[0];
    VAR7 *VAR10 = VAR2->VAR9[1];
    VAR7 *VAR11 = VAR2->VAR9[2];
    if (!(FUN2(VAR4->VAR12)))
        return;
    FUN3(VAR8, VAR5);
    FUN3(VAR8 + 8, VAR5);
    FUN3(VAR8 + 8 * VAR5, VAR5);
    FUN3(VAR8 + 8 * VAR5 + 8, VAR5);
    FUN3(VAR10, VAR6);
    FUN3(VAR11, VAR6);
}