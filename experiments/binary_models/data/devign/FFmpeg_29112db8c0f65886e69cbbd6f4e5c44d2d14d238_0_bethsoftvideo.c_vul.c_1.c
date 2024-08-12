static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    char VAR14;
    VAR7 *VAR15;
    VAR7 *VAR16;
    int VAR17 = VAR2->VAR18;
    const int VAR19 = VAR12->VAR20.VAR21[0] - VAR2->VAR18;
    int VAR22;
    int VAR23;
    if (VAR2->FUN2(VAR2, &VAR12->VAR20))
    {
        FUN3(VAR2, VAR24, "");
        return -1;
    }
    VAR15 = VAR12->VAR20.VAR3[0];
    VAR16 = VAR12->VAR20.VAR3[0] + VAR12->VAR20.VAR21[0] * VAR2->VAR25;
    switch (VAR14 = *VAR8++)
    {
    case VAR26:
        return FUN4(&VAR12->VAR20, VAR8, VAR9);
    case VAR27:
        VAR23 = FUN5(&VAR8);
        if (VAR23 >= VAR2->VAR25)
            return -1;
        VAR15 += VAR12->VAR20.VAR21[0] * VAR23;
    }
    while ((VAR22 = *VAR8++))
    {
        int VAR28 = VAR22 & 0x7f;
        while (VAR28 > VAR17)
        {
            if (VAR22 < 0x80)
                FUN6(&VAR8, VAR15, VAR17);
            else if (VAR14 == VAR29)
                memset(VAR15, VAR8[0], VAR17);
            VAR28 -= VAR17;
            VAR15 += VAR17 + VAR19;
            VAR17 = VAR2->VAR18;
            if (VAR15 == VAR16)
                goto VAR30;
        }
        if (VAR22 < 0x80)
            FUN6(&VAR8, VAR15, VAR28);
        else if (VAR14 == VAR29)
            memset(VAR15, *VAR8++, VAR28);
        VAR17 -= VAR28;
        VAR15 += VAR28;
    }
VAR30:
    *VAR4 = sizeof(VAR31);
    *(VAR31 *)VAR3 = VAR12->VAR20;
    return VAR9;
}