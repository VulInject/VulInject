static void FUN1(VAR1 *VAR2, target_ulong VAR3, const char *VAR4, VAR5 *VAR6)
{
    unsigned int VAR7;
    target_ulong VAR8;
    for (VAR7 = 0; VAR7 < 64; VAR7++)
    {
        if (FUN2(VAR2[VAR7].VAR9))
        {
            VAR8 = 0xffffffffffffe000ULL;
            VAR8 <<= 3 * ((VAR2[VAR7].VAR9 >> 61) & 3);
            if ((VAR3 & VAR8) == (VAR2[VAR7].VAR10 & VAR8))
            {
                FUN3(&VAR2[VAR7], 0, 0, VAR6);
                FUN4("", VAR4, VAR7);
                FUN5(VAR6);
            }
        }
    }
}