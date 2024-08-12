static void FUN1(struct VAR1 *VAR2)
{
    int VAR3;
    int VAR4 = FUN2(VAR2->VAR5.VAR6);
    int VAR7 = (((VAR2->VAR8[VAR4].VAR9[0] >> 12) & 3) != 0);
    int VAR10;
    VAR10 = 64 - VAR2->VAR5.VAR11;
    if (VAR10 > VAR2->VAR5.VAR12)
    {
        VAR10 = VAR2->VAR5.VAR12;
        VAR2->VAR5.VAR12 -= VAR10;
        VAR2->VAR5.VAR11 += VAR10;
        VAR3 = 64 - VAR2->VAR5.VAR11;
        while (VAR3 < (64 - VAR10))
        {
            VAR2->VAR5.VAR13[VAR3] = VAR2->VAR5.VAR13[VAR3 + VAR10];
            VAR3++;
            while (VAR3 < 64)
            {
                uint32_t VAR14 = FUN3(&VAR2->VAR8[VAR4], 0, 2);
                VAR2->VAR5.VAR13[VAR3++] = VAR14 & 0xff;
                VAR2->VAR5.VAR13[VAR3++] = (VAR14 >> 8) & 0xff;
            }
            else
            {
                VAR2->VAR5.VAR13[VAR3++] = FUN3(&VAR2->VAR8[VAR4], 0, 1);
                if (VAR2->VAR5.VAR15 && (VAR2->VAR5.VAR12 == 0))
                {
                    VAR2->VAR16 |= 2;
                    VAR2->VAR5.VAR15 = 0;
                    if (VAR2->VAR5.VAR11 != 0)
                    {
                        FUN4(VAR2, 1);
                        FUN5(VAR2)