static int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR2->VAR5 = VAR4[0] >> 3 & 0x0F;
    VAR2->VAR6 = (VAR4[0] & 0x4) != 0x4;
    return 1;
}