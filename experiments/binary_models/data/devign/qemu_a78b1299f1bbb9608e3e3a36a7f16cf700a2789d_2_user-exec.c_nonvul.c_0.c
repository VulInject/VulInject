int FUN1(int VAR1, void *VAR2, void *VAR3)
{
    VAR4 *VAR5 = VAR2;
    VAR6 *VAR7 = VAR3;
    struct VAR8 *VAR7 = VAR3;
    VAR6 *VAR7 = VAR3;
    unsigned long VAR9;
    int VAR10;
    VAR9 = FUN2(VAR7);
    VAR10 = FUN3(VAR7);
    return FUN4(VAR9, VAR5, VAR10 == 0xe ? (FUN5(VAR7) >> 1) & 1 : 0, &FUN6(VAR7));
}