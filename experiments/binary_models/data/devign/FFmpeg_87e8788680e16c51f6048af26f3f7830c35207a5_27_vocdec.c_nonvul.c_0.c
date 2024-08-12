static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    if (memcmp(VAR2->VAR5, VAR6, sizeof(VAR6) - 1))
        return 0;
    VAR3 = VAR2->VAR5[22] | (VAR2->VAR5[23] << 8);
    VAR4 = VAR2->VAR5[24] | (VAR2->VAR5[25] << 8);
    if (~VAR3 + 0x1234 != VAR4)
        return 10;
    return VAR7;
}