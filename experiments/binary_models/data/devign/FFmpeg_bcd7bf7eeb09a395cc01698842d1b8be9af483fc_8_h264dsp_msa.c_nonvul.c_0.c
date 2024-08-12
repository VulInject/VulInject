void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, VAR6 *VAR7)
{
    uint8_t VAR8 = 1;
    uint8_t VAR9 = 1;
    uint8_t VAR10 = 1;
    uint8_t VAR11 = 1;
    if (VAR7[0] < 0)
        VAR8 = 0;
    if (VAR7[1] < 0)
        VAR9 = 0;
    if (VAR7[2] < 0)
        VAR10 = 0;
    if (VAR7[3] < 0)
        VAR11 = 0;
    FUN2(VAR2, VAR8, VAR9, VAR10, VAR11, VAR7[0], VAR7[1], VAR7[2], VAR7[3], VAR4, VAR5, VAR3);
}