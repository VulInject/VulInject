static void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR4 *VAR8;
    target_ulong VAR9 = VAR5->VAR9;
    target_ulong VAR10 = VAR5->VAR10;
    uint64_t VAR11 = VAR5->VAR11;
    if (VAR3 > VAR12)
        VAR3 = VAR12;
    FUN3(VAR5, -1);
    VAR8 = FUN4(VAR7, VAR9, VAR10, VAR11, VAR3 | VAR13);
    VAR7->VAR14 = VAR8;
    FUN5(VAR8, VAR8->VAR9);
    FUN6(VAR7, VAR8->VAR15);
    VAR7->VAR14 = NULL;
    FUN3(VAR8, -1);
    FUN7(VAR8);
}