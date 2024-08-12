static int FUN1(VAR1 *VAR2)
{
    int VAR3 = VAR2->VAR4->VAR3;
    int VAR5 = VAR2->VAR4->VAR5;
    int VAR6 = VAR3 * VAR5;
    unsigned char VAR7;
    unsigned char VAR8 = 0;
    int VAR9 = 0;
    int VAR10, VAR11;
    int VAR12, VAR13;
    unsigned char *VAR14 = VAR2->VAR15;
    unsigned char *VAR16 = VAR2->VAR15 + VAR2->VAR17;
    int VAR18 = VAR2->VAR17;
    const unsigned char *VAR19 = VAR2->VAR20;
    const unsigned char *VAR21;
    const unsigned char *VAR22;
    const unsigned char *VAR23;
    const unsigned char *VAR24;
    int VAR25, VAR26, VAR27, VAR28, VAR29;
    if (VAR2->VAR9 < 8)
        return VAR30;
    VAR25 = FUN2(&VAR2->VAR31[0]);
    VAR26 = FUN2(&VAR2->VAR31[2]);
    VAR27 = FUN2(&VAR2->VAR31[4]);
    VAR28 = FUN2(&VAR2->VAR31[6]);
    if (VAR25 >= VAR2->VAR9 || VAR26 >= VAR2->VAR9 || VAR27 >= VAR2->VAR9 || VAR28 >= VAR2->VAR9)
        return VAR30;
    VAR21 = VAR2->VAR31 + VAR25;
    VAR22 = VAR2->VAR31 + VAR26;
    VAR23 = VAR2->VAR31 + VAR27;
    VAR24 = VAR2->VAR31 + VAR28;
    if (FUN3(VAR14, VAR18, VAR21, VAR2->VAR9 - VAR25) < 0)
        return VAR30;
    if (VAR24[0] == 2)
    {
        FUN4(VAR2->VAR20, &VAR24[1], VAR2->VAR32);
        VAR29 = VAR2->VAR32;
    }
    else
    {
        VAR29 = VAR2->VAR9 - VAR28 - 1;
        VAR19 = &VAR24[1];
    }
    VAR12 = VAR13 = 0;
    while (VAR6 && VAR14 < VAR16)
    {
        VAR7 = *VAR14++;
        VAR9 = 0;
        switch (VAR7)
        {
        case 0:
            VAR8 ^= 1;
            continue;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            VAR9 = VAR7;
            break;
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
            VAR9 += (VAR7 - 10);
            break;
        case 9:
        case 19:
            VAR9 = *VAR22++;
            break;
        case 10:
        case 20:
            VAR9 = FUN5(&VAR22[0]);
            VAR22 += 2;
            break;
        case 11:
        case 21:
            VAR9 = FUN6(VAR22);
            VAR22 += 3;
            break;
        }
        if (VAR9 > VAR6)
            break;
        if (VAR7 < 12)
        {
            VAR8 ^= 1;
            if (VAR8)
            {
                FUN7(VAR2, VAR12, VAR13, VAR9, 0, 0);
            }
            else
            {
                if (VAR29 < VAR9)
                    break;
                FUN8(VAR2, VAR19, VAR12, VAR13, VAR9);
                VAR19 += VAR9;
                VAR29 -= VAR9;
            }
        }
        else
        {
            VAR10 = FUN9(*VAR23 >> 4, 4);
            VAR11 = FUN9(*VAR23 & 0xF, 4);
            VAR23++;
            FUN7(VAR2, VAR12, VAR13, VAR9, VAR10, VAR11);
            VAR8 = 0;
        }
        VAR6 -= VAR9;
        VAR13 += (VAR12 + VAR9) / VAR3;
        VAR12 = (VAR12 + VAR9) % VAR3;
    }
    return 0;
}