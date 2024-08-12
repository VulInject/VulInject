static void FUN1(VAR1 *VAR2)
{
    int VAR3 = FUN2(VAR2);
    VAR2->VAR4[VAR5] = 0xff;
    VAR2->VAR4[VAR6] = 0xff;
    FUN3(VAR2->VAR4 + VAR7, VAR8 | VAR9 | VAR10);
    memset(VAR2->VAR4 + VAR11, 0xff, VAR3 - VAR11);
}