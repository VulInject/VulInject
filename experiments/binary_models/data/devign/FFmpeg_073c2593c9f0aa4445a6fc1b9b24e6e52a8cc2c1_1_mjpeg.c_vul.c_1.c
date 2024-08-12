static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 *VAR5, int VAR6)
{
    uint8_t VAR7[256];
    uint16_t VAR8[256];
    memset(VAR7, 0, sizeof(VAR7));
    FUN2(VAR7, VAR8, VAR4, VAR5);
    return FUN3(VAR2, 9, VAR6, VAR7, 1, 1, VAR8, 2, 2);
}