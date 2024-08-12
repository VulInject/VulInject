static void FUN1(VAR1 *VAR2)
{
    while ((VAR2->VAR3 >> 15) - (VAR2->VAR4 >> 15) < 2)
    {
        if ((VAR2->VAR4 ^ VAR2->VAR3) & 0x10000)
        {
            VAR2->VAR3 ^= 0x8000;
            VAR2->VAR5 ^= 0x8000;
            VAR2->VAR4 ^= 0x8000;
        }
        VAR2->VAR3 = VAR2->VAR3 << 8 & 0xFFFFFF | 0xFF;
        VAR2->VAR5 = VAR2->VAR5 << 8 & 0xFFFFFF | FUN2(VAR2->VAR6.VAR7);
        VAR2->VAR4 = VAR2->VAR4 << 8 & 0xFFFFFF;
    }
}