static int FUN1(VAR1 *VAR2)
{
    uint32_t VAR3 = -1;
    int VAR4 = 0, VAR5 = 0, VAR6 = 0, VAR7 = 0, VAR8 = 0;
    int VAR9, VAR10;
    int VAR11[VAR12 + 1] = {0};
    int VAR13[VAR14 + 1] = {0};
    unsigned VAR15, VAR16;
    GetBitContext VAR17;
    for (VAR9 = 0; VAR9 + 2 < VAR2->VAR18; VAR9++)
    {
        VAR3 = (VAR3 << 8) + VAR2->VAR19[VAR9];
        if ((VAR3 & 0xffffff00) == 0x100)
        {
            int VAR20 = (VAR3 >> 5) & 3;
            int VAR21 = VAR3 & 0x1F;
            static const int8_t VAR22[] = {2, 0, 0, 0, 0, -1, 1, -1, -1, 1, 1, 1, 1, -1, 2, 2, 2, 2, 2, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
            if (VAR3 & 0x80)
                return 0;
            if (VAR22[VAR21] == 1 && VAR20)
                return 0;
            if (VAR22[VAR21] == -1 && !VAR20)
                return 0;
            if (VAR22[VAR21] == 2)
            {
                if (!(VAR3 == 0x100 && !VAR2->VAR19[VAR9 + 1] && !VAR2->VAR19[VAR9 + 2]))
                    VAR7++;
            }
            VAR10 = FUN2(&VAR17, VAR2->VAR19 + VAR9 + 1, VAR2->VAR18 - VAR9 - 1);
            if (VAR10 < 0)
                return 0;
            switch (VAR21)
            {
            case 1:
            case 5:
                FUN3(&VAR17);
                if (FUN4(&VAR17) > 9U)
                    return 0;
                VAR15 = FUN3(&VAR17);
                if (VAR15 > VAR12)
                    return 0;
                if (!VAR11[VAR15])
                    break;
                if (VAR21 == 1)
                    VAR8++;
                else
                    VAR6++;
                break;
            case 7:
                FUN5(&VAR17, 14);
                if (FUN6(&VAR17, 2))
                    return 0;
                FUN5(&VAR17, 8);
                VAR16 = FUN4(&VAR17);
                if (VAR16 > VAR14)
                    return 0;
                VAR13[VAR16] = 1;
                VAR4++;
                break;
            case 8:
                VAR15 = FUN3(&VAR17);
                if (VAR15 > VAR12)
                    return 0;
                VAR16 = FUN4(&VAR17);
                if (VAR16 > VAR14)
                    return 0;
                if (!VAR13[VAR16])
                    break;
                VAR11[VAR15] = 1;
                VAR5++;
                break;
            }
        }
    }
    FUN7(NULL, "", VAR4, VAR5, VAR6, VAR8, VAR7);
    if (VAR4 && VAR5 && (VAR6 || VAR8 > 3) && VAR7 < (VAR4 + VAR5 + VAR6))
        return VAR23 + 1;
    return 0;
}