static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint32_t VAR5 = VAR2->VAR6;
    VAR2->VAR6 &= ~VAR7 | VAR8;
    VAR4[0] = (VAR5 >> 24) & 0xff;
    VAR4[1] = (VAR5 >> 16) & 0xff;
    VAR4[2] = (VAR5 >> 8) & 0xff;
    VAR4[3] = (VAR5 >> 0) & 0xff;
}