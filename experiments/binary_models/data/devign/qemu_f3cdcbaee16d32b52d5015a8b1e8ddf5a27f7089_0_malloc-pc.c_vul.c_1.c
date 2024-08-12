VAR1 *FUN1(void)
{
    VAR2 *VAR3 = FUN2(sizeof(*VAR3));
    uint64_t VAR4;
    VAR5 *VAR6 = FUN3();
    VAR3->VAR7.VAR7 = VAR8;
    VAR3->VAR7.free = VAR9;
    VAR4 = FUN4(VAR6, VAR10);
    VAR3->VAR11 = 1 << 20;
    VAR3->VAR12 = FUN5(VAR4, 0xE0000000);
    return &VAR3->VAR7;