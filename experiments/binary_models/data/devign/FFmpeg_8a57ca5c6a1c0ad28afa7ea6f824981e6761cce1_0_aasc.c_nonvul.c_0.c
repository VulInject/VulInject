static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14, VAR15, VAR16, VAR17;
    VAR12->VAR18.VAR19 = 3;
    VAR12->VAR18.VAR20 = VAR21 | VAR22 | VAR23;
    if (VAR2->FUN2(VAR2, &VAR12->VAR18))
    {
        FUN3(VAR2, VAR24, "");
        return -1;
    }
    VAR14 = FUN4(VAR8);
    VAR8 += 4;
    VAR9 -= 4;
    VAR17 = VAR2->VAR25 / 8;
    switch (VAR2->VAR26)
    {
    case FUN5('', '', '', ''):
        FUN6(&VAR12->VAR27, VAR8 - 4, VAR9 + 4);
        FUN7(VAR2, (VAR28 *)&VAR12->VAR18, 8, &VAR12->VAR27);
        break;
    case FUN5('', '', '', ''):
        switch (VAR14)
        {
        case 0:
            VAR16 = (VAR2->VAR29 * VAR17 + VAR17) & ~VAR17;
            for (VAR15 = VAR2->VAR30 - 1; VAR15 >= 0; VAR15--)
            {
                if (VAR2->VAR29 * VAR17 > VAR9)
                {
                    FUN3(VAR2, VAR24, "");
                    break;
                }
                memcpy(VAR12->VAR18.VAR3[0] + VAR15 * VAR12->VAR18.VAR31[0], VAR8, VAR2->VAR29 * VAR17);
                VAR8 += VAR16;
                VAR9 -= VAR16;
            }
            break;
        case 1:
            FUN6(&VAR12->VAR27, VAR8, VAR9);
            FUN7(VAR2, (VAR28 *)&VAR12->VAR18, 8, &VAR12->VAR27);
            break;
        default:
            FUN3(VAR2, VAR24, "", VAR14);
            return -1;
        }
        break;
    default:
        FUN3(VAR2, VAR24, "", VAR2->VAR26);
        return -1;
    }
    *VAR4 = sizeof(VAR32);
    *(VAR32 *)VAR3 = VAR12->VAR18;
    return VAR9;
}