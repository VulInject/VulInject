static int FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    int VAR4, VAR5, VAR6, VAR7;
    int VAR8, VAR9;
    if (VAR3 & (1 << 20))
    {
        VAR2->VAR10 = (VAR3 & (1 << 19)) ? 0 : 1;
        VAR6 = 0;
    }
    else
    {
        VAR2->VAR10 = 1;
        VAR6 = 1;
    }
    VAR2->VAR11 = 4 - ((VAR3 >> 17) & 3);
    VAR8 = (VAR3 >> 10) & 3;
    VAR4 = VAR12[VAR8] >> (VAR2->VAR10 + VAR6);
    VAR8 += 3 * (VAR2->VAR10 + VAR6);
    VAR2->VAR8 = VAR8;
    VAR2->VAR13 = ((VAR3 >> 16) & 1) ^ 1;
    VAR2->VAR4 = VAR4;
    VAR9 = (VAR3 >> 12) & 0xf;
    VAR7 = (VAR3 >> 9) & 1;
    VAR2->VAR14 = (VAR3 >> 6) & 3;
    VAR2->VAR15 = (VAR3 >> 4) & 3;
    if (VAR2->VAR14 == VAR16)
        VAR2->VAR17 = 1;
    else
        VAR2->VAR17 = 2;
    if (VAR9 != 0)
    {
        VAR5 = VAR18[VAR2->VAR10][VAR2->VAR11 - 1][VAR9];
        VAR2->VAR19 = VAR5 * 1000;
        switch (VAR2->VAR11)
        {
        case 1:
            VAR5 = (VAR5 * 12000) / VAR4;
            VAR5 = (VAR5 + VAR7) * 4;
            break;
        case 2:
            VAR5 = (VAR5 * 144000) / VAR4;
            VAR5 += VAR7;
            break;
        default:
        case 3:
            VAR5 = (VAR5 * 144000) / (VAR4 << VAR2->VAR10);
            VAR5 += VAR7;
            break;
        }
        VAR2->VAR5 = VAR5;
    }
    else
    {
        if (!VAR2->VAR20)
            return 1;
        VAR2->VAR5 = VAR2->VAR20;
        switch (VAR2->VAR11)
        {
        case 1:
            VAR2->VAR5 += VAR7 * 4;
            VAR2->VAR19 = (VAR2->VAR5 * VAR4) / 48000;
            break;
        case 2:
            VAR2->VAR5 += VAR7;
            VAR2->VAR19 = (VAR2->VAR5 * VAR4) / 144000;
            break;
        default:
        case 3:
            VAR2->VAR5 += VAR7;
            VAR2->VAR19 = (VAR2->VAR5 * (VAR4 << VAR2->VAR10)) / 144000;
            break;
        }
    }
    FUN2("", VAR2->VAR11, VAR2->VAR4, VAR2->VAR19);
    if (VAR2->VAR17 == 2)
    {
        if (VAR2->VAR11 == 3)
        {
            if (VAR2->VAR15 & VAR21)
                FUN2("");
            if (VAR2->VAR15 & VAR22)
                FUN2("");
        }
        FUN2("");
    }
    else
    {
        FUN2("");
    }
    FUN2("");
    return 0;
}