static void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3, VAR4;
    int VAR5, VAR6, VAR7;
    for (VAR5 = 0; VAR5 < VAR8; VAR5++)
    {
        VAR3 = VAR2->VAR9[VAR5] & VAR2->VAR10[VAR5];
        for (VAR4 = VAR2->VAR11[VAR5] ^ VAR3; VAR4; VAR4 ^= 1 << VAR6)
        {
            VAR6 = FUN2(VAR4);
            VAR7 = VAR6 + 32 * VAR5;
            FUN3(VAR2->VAR12[VAR7], (VAR3 >> VAR6) & 1);
        }
        VAR2->VAR11[VAR5] = VAR3;
    }
}