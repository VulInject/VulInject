static void FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned int VAR5, VAR3 *VAR6, unsigned int *VAR7, unsigned int VAR8)
{
    VAR9 *VAR10;
    FUN2(3);
    if ((VAR4[2] > VAR11) || !FUN3(VAR2->VAR12 + VAR4[2]))
    {
        VAR6[2] = VAR13;
        return;
    }
    VAR10 = VAR2->VAR12 + VAR4[2];
    FUN4(VAR10->VAR14);
    FUN4(FUN5(VAR10));
    FUN4(VAR10->VAR15 & 0xff);
    if (FUN6(VAR10))
    {
        FUN4((VAR10->VAR15 >> 8) & 0xff);
    }
}