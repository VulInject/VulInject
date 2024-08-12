void FUN1(struct VAR1 *VAR2, int VAR3, uint16_t VAR4)
{
    void *VAR5 = VAR2->VAR6 + 0x10 + 2 * VAR3;
    uint16_t VAR7 = FUN2(VAR2->VAR8, VAR5);
    uint16_t VAR9 = ~(VAR10 | VAR11);
    FUN3((VAR7 & VAR9) == (VAR4 & VAR9));
}