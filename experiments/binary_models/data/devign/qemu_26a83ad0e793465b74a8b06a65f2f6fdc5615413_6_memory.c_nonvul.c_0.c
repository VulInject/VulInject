void FUN1(VAR1 *VAR2, const VAR3 *VAR4, void *VAR5, const char *VAR6, uint64_t VAR7)
{
    FUN2(VAR2, VAR6, VAR7);
    VAR2->VAR4 = VAR4;
    VAR2->VAR5 = VAR5;
    VAR2->VAR8 = true;
    VAR2->VAR9 = VAR10;
    VAR2->VAR11 = FUN3(VAR7, VAR2);
    VAR2->VAR11 |= FUN4(VAR12, VAR13, VAR2);
    VAR2->VAR11 |= VAR14;
}