VAR1 *FUN1(ram_addr_t VAR2, ram_addr_t VAR3)
{
    VAR4 *VAR5 = FUN2(sizeof *VAR5);
    VAR1 *VAR6 = &VAR5->VAR7;
    VAR6->VAR8.VAR9.VAR10 = VAR11;
    if (sizeof(VAR12) == 4)
    {
        VAR6->VAR8.VAR13.VAR14 = 0;
        VAR6->VAR8.VAR13.VAR10 = 0;
    }
    else
    {
        VAR6->VAR8.VAR13.VAR14 = FUN3((0x1ULL << 32) + VAR3, 0x1ULL << 30);
        VAR6->VAR8.VAR13.VAR10 = VAR6->VAR8.VAR13.VAR14 + (0x1ULL << 62);
        assert(VAR6->VAR8.VAR13.VAR14 <= VAR6->VAR8.VAR13.VAR10);
    }
    VAR5->VAR15.VAR16 = VAR17;
    FUN4(&VAR5->VAR15);
    return VAR6;
}