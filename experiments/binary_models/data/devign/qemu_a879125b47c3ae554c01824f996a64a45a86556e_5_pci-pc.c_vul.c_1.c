static void FUN1(VAR1 *VAR2, int VAR3, uint8_t VAR4, uint32_t VAR5)
{
    FUN2(0xcf8, (1 << 31) | (VAR3 << 8) | VAR4);
    FUN2(0xcfc, VAR5);
}