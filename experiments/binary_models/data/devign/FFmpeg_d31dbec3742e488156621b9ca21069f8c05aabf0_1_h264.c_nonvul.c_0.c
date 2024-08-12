static int FUN1(VAR1 *VAR2)
{
    FUN2(VAR2->VAR3.VAR4, VAR2->VAR5[0], VAR2->VAR3.VAR6 * (16 + 8 + 8) * sizeof(VAR7), VAR8)
    FUN2(VAR2->VAR3.VAR4, VAR2->VAR5[1], VAR2->VAR3.VAR6 * (16 + 8 + 8) * sizeof(VAR7), VAR8) return 0;
VAR8:
    return -1;
}