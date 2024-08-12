static int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, void *VAR5)
{
    const VAR6 *VAR7 = VAR5;
    int VAR8 = ((VAR2->VAR9 + 47) / 48) * 48;
    int VAR10 = VAR8 * 8 / 3;
    int VAR11, VAR12;
    const VAR13 *VAR14 = (const VAR13 *)VAR7->VAR5[0];
    const VAR13 *VAR15 = (const VAR13 *)VAR7->VAR5[1];
    const VAR13 *VAR16 = (const VAR13 *)VAR7->VAR5[2];
    VAR17 *VAR18 = VAR3;
    VAR17 *VAR19 = VAR3;
    if (VAR4 < VAR8 * VAR2->VAR20 * 8 / 3)
    {
        FUN2(VAR2, VAR21, "");
        return -1;
    }
    do
    {
        VAR22 = FUN3(*VAR23++);
        VAR22 |= (FUN3(*VAR24++) << 10) | (FUN3(*VAR25++) << 20);
        FUN4(&VAR18, VAR22);
    } while (0) for (VAR11 = 0; VAR11 < VAR2->VAR20; VAR11++)
    {
        uint32_t VAR22;
        for (VAR12 = 0; VAR12 < VAR2->VAR9 - 5; VAR12 += 6)
        {
            FUN5(VAR15, VAR14, VAR16);
            FUN5(VAR14, VAR15, VAR14);
            FUN5(VAR16, VAR14, VAR15);
            FUN5(VAR14, VAR16, VAR14);
        }
        if (VAR12 < VAR2->VAR9 - 1)
        {
            FUN5(VAR15, VAR14, VAR16);
            VAR22 = FUN3(*VAR14++);
            if (VAR12 == VAR2->VAR9 - 2)
                FUN4(&VAR18, VAR22);
        }
        if (VAR12 < VAR2->VAR9 - 3)
        {
            VAR22 |= (FUN3(*VAR15++) << 10) | (FUN3(*VAR14++) << 20);
            FUN4(&VAR18, VAR22);
            VAR22 = FUN3(*VAR16++) | (FUN3(*VAR14++) << 10);
            FUN4(&VAR18, VAR22);
        }
        VAR19 += VAR10;
        memset(VAR18, 0, VAR19 - VAR18);
        VAR18 = VAR19;
        VAR14 += VAR7->VAR26[0] / 2 - VAR2->VAR9;
        VAR15 += VAR7->VAR26[1] / 2 - VAR2->VAR9 / 2;
        VAR16 += VAR7->VAR26[2] / 2 - VAR2->VAR9 / 2;
    }
    return VAR18 - VAR3;
}