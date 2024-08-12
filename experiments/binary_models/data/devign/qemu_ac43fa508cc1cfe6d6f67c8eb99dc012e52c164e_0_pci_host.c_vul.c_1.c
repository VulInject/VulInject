static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    uint32_t VAR7;
    if (!(VAR6->VAR8 & (1 << 31)))
        return 0xffffffff;
    VAR7 = FUN2(VAR6->VAR9, VAR6->VAR8 | (VAR3 & 3), VAR4);
    FUN3("" VAR10 "", VAR3, VAR4, VAR7);
    return VAR7;
}