static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    uint8_t VAR6[VAR7];
    VAR5->VAR8 = FUN2(VAR5->VAR8);
    FUN3("" VAR9 "" VAR10 "", VAR5->VAR8, VAR5->VAR11);
    FUN4(VAR6, VAR12);
    FUN4(VAR6 + 4, VAR5->VAR8);
    FUN5(VAR6 + 8, VAR5->VAR11);
    return FUN6(VAR3, VAR6, sizeof(VAR6), NULL);
}