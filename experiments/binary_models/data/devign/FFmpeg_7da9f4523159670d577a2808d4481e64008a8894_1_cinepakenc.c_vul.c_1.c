static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, unsigned char *VAR6, int VAR7)
{
    VAR6[0] = VAR5 ? 0x11 : 0x10;
    FUN2(&VAR6[1], VAR7 + VAR8);
    FUN3(&VAR6[4], VAR3);
    FUN3(&VAR6[6], 0);
    FUN3(&VAR6[8], VAR4);
    FUN3(&VAR6[10], VAR2->VAR9);
}