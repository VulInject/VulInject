FUN1 (const char *restrict VAR1, idx_t VAR2, char *restrict VAR3)
{
while (VAR2)
{
*VAR3++ = VAR4[(FUN2 (VAR1[0]) >> 2) & 0x3f];
*VAR3++ = VAR4[((FUN2 (VAR1[0]) << 4) + (FUN2 (VAR1[1]) >> 4)) & 0x3f];
*VAR3++ = VAR4[((FUN2 (VAR1[1]) << 2) + (FUN2 (VAR1[2]) >> 6)) & 0x3f];
*VAR3++ = VAR4[FUN2 (VAR1[2]) & 0x3f];

VAR2 -= 3;
VAR1 += 3;
}
}