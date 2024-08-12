static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14, VAR15, VAR16, VAR17;
    if (VAR9 < 4)
        if ((VAR17 = FUN2(VAR2, VAR12->VAR18)) < 0)
        {
            FUN3(VAR2, VAR19, "");
            return VAR17;
        }
    VAR14 = FUN4(VAR8);
    VAR8 += 4;
    VAR9 -= 4;
    switch (VAR14)
    {
    case 0:
        VAR16 = (VAR2->VAR20 * 3 + 3) & ~3;
        for (VAR15 = VAR2->VAR21 - 1; VAR15 >= 0; VAR15--)
        {
            memcpy(VAR12->VAR18->VAR3[0] + VAR15 * VAR12->VAR18->VAR22[0], VAR8, VAR2->VAR20 * 3);
            VAR8 += VAR16;
        }
        break;
    case 1:
        FUN5(&VAR12->VAR23, VAR8, VAR9);
        FUN6(VAR2, (VAR24 *)VAR12->VAR18, 8, &VAR12->VAR23);
        break;
    default:
        FUN3(VAR2, VAR19, "", VAR14);
    }
    *VAR4 = 1;
    if ((VAR17 = FUN7(VAR3, VAR12->VAR18)) < 0)
        return VAR17;
    return VAR9;