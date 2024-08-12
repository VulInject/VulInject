static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    unsigned char VAR5;
    int VAR6;
    static int VAR7 = 0;
    GetBitContext VAR8;
    FUN2("", VAR7);
    VAR7++;
    memcpy(VAR2->VAR9.VAR10[1], VAR2->VAR11->VAR12->VAR13, VAR14 * 4);
    VAR2->VAR15 = VAR2->VAR9.VAR16[0];
    VAR2->VAR17 = VAR2->VAR18 + 14;
    VAR2->VAR19 = VAR2->VAR18 + VAR2->VAR20;
    VAR2->VAR21 = VAR2->VAR15 - 8;
    VAR2->VAR22 = (VAR2->VAR11->VAR23 - 8) * VAR2->VAR15 + VAR2->VAR11->VAR24 - 8;
    FUN3(&VAR8, VAR2->VAR25, VAR2->VAR26 * 8);
    for (VAR4 = 0; VAR4 < VAR2->VAR11->VAR23; VAR4 += 8)
    {
        for (VAR3 = 0; VAR3 < VAR2->VAR11->VAR24; VAR3 += 8)
        {
            VAR5 = FUN4(&VAR8, 4);
            FUN2("", VAR3, VAR4, VAR5, VAR2->VAR17);
            VAR2->VAR27 = VAR2->VAR9.VAR10[0] + VAR3 + VAR4 * VAR2->VAR9.VAR16[0];
            VAR6 = VAR28[VAR5](VAR2);
            if (VAR6 != 0)
            {
                FUN5(VAR2->VAR11, VAR29, "", VAR7, VAR3, VAR4);
                return;
            }
        }
    }
    if (VAR2->VAR19 - VAR2->VAR17 > 1)
    {
        FUN5(VAR2->VAR11, VAR29, "", VAR2->VAR19 - VAR2->VAR17);
    }
}