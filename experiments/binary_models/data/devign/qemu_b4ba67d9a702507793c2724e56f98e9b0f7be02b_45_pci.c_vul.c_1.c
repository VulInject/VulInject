bool FUN1(VAR1 *VAR2, uint16_t VAR3)
{
    uint32_t VAR4;
    uint8_t VAR5 = VAR3 % 32;
    void *VAR6 = VAR2->VAR7 + (VAR3 / 32) * VAR8 / 4;
    FUN2(VAR2->VAR9);
    VAR4 = FUN3(VAR2, VAR6);
    FUN4(VAR2, VAR6, VAR4 & ~(1 << VAR5));
    return (VAR4 & (1 << VAR5)) != 0;
}