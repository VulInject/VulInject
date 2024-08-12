static void FUN1(struct VAR1 *VAR2, int VAR3, uint32_t VAR4)
{
    void *VAR5 = VAR2->VAR6 + 0x64 + 4 * VAR3;
    uint32_t VAR7 = FUN2(VAR2->VAR8, VAR5);
    uint16_t VAR9 = ~(VAR10 | VAR11 | VAR12);
    fprintf(VAR13, "", VAR14, VAR3, VAR7 & VAR9, VAR4 & VAR9);
    FUN3((VAR7 & VAR9) == (VAR4 & VAR9));
}