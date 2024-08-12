static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int VAR4;
    static int VAR5 = 0;
    for (VAR4 = 0; VAR4 < VAR6; VAR4++)
    {
        VAR7 *VAR8 = &VAR3->VAR8[VAR4];
        FUN2(VAR8);
        VAR8->VAR9 = ~0ULL;
        VAR8->VAR10 = VAR11 | VAR12;
        VAR8->VAR10 |= 0x00000004ULL << 32;
        VAR8->VAR13 = 0ULL;
        VAR8->VAR14 = 0;
    }
    VAR3->VAR15 = 0ULL;
    VAR3->VAR16 = 0ULL;
    VAR3->VAR17 = 0x8086a201ULL;
    VAR3->VAR17 |= ((VAR18) << 32);
    VAR3->VAR10 = 0ULL;
    if (VAR5 > 0)
    {
        FUN3();
    }
    VAR5 = 1;
}