static void FUN1(VAR1 *VAR2, int VAR3)
{
    int64_t VAR4;
    if (!VAR2->VAR5)
        return;
    VAR2->VAR3 = VAR3;
    if (VAR2->VAR3 <= 1)
        VAR4 = VAR2->VAR6;
    else
        VAR4 = VAR2->VAR7;
    if (VAR2->VAR8 == VAR9)
        VAR4 <<= 15;
    else
        VAR4 <<= 5;
    VAR4 = FUN2() * VAR4 / 33000000;
    FUN3("" VAR10 "", VAR2->VAR3, VAR4);
    FUN4(VAR2->VAR11, FUN5(VAR12) + VAR4);
}