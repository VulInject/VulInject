static int FUN1(VAR1 *VAR2, unsigned int VAR3, unsigned int VAR4, const unsigned int *VAR5, unsigned int *VAR6)
{
    unsigned int VAR7;
    ALSBlockData VAR8 = {0};
    VAR8.VAR9 = VAR3;
    VAR8.VAR10 = VAR2->VAR10;
    VAR8.VAR11 = VAR2->VAR11;
    VAR8.VAR12 = VAR2->VAR12;
    VAR8.VAR13 = VAR2->VAR13;
    VAR8.VAR14 = VAR2->VAR14;
    VAR8.VAR15 = VAR2->VAR15;
    VAR8.VAR16 = VAR2->VAR16[0];
    VAR8.VAR17 = VAR2->VAR17[0];
    VAR8.VAR18 = VAR2->VAR18[0];
    VAR8.VAR19 = VAR2->VAR19;
    VAR8.VAR20 = VAR2->VAR20[VAR4];
    for (VAR7 = 0; VAR7 < VAR2->VAR21; VAR7++)
    {
        VAR8.VAR22 = VAR5[VAR7];
        if (FUN2(VAR2, &VAR8))
        {
            FUN3(VAR7, VAR2->VAR21, VAR5, VAR8.VAR20);
            return -1;
        }
        VAR8.VAR20 += VAR5[VAR7];
        VAR8.VAR9 = 0;
    }
    return 0;
}