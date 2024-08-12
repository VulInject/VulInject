static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    FUN2(VAR2->VAR5[0], VAR2->VAR4.VAR6 * (16 + 8 + 8) * sizeof(VAR7))
    FUN2(VAR2->VAR5[1], VAR2->VAR4.VAR6 * (16 + 8 + 8) * sizeof(VAR7)) FUN2(VAR4->VAR8, (VAR4->VAR9 + 64) * 2 * 21 * 2);
    VAR4->VAR10 = VAR4->VAR8 + (VAR4->VAR9 + 64) * 2 * 21;
    return 0;
VAR11:
    return -1;
}