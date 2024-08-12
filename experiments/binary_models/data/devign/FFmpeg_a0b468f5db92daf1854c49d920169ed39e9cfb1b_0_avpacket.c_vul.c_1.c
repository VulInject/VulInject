int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    if ((unsigned)VAR3 > (unsigned)VAR3 + VAR6)
        return FUN2(VAR7);
    VAR5 = FUN3(VAR3 + VAR6);
    if (!VAR5)
        return FUN2(VAR7);
    memset(VAR5 + VAR3, 0, VAR6);
    FUN4(VAR2);
    VAR2->VAR5 = VAR5;
    VAR2->VAR3 = VAR3;
    VAR2->VAR8 = VAR9;
    return 0;
}