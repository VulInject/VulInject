static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4 = -1;
    int VAR5 = 0;
    int VAR6 = 0;
    for (VAR3 = 0; VAR3 < VAR2->VAR7 - 2; VAR3++)
    {
        int VAR8;
        if (VAR2->VAR9[VAR3] != 0xFF)
            continue;
        VAR8 = VAR2->VAR9[VAR3 + 1];
        switch (VAR8)
        {
        case 0xD8:
            VAR4 = 0xD8;
            break;
        case 0xC0:
        case 0xC1:
        case 0xC2:
        case 0xC3:
        case 0xC5:
        case 0xC6:
        case 0xC7:
        case 0xF7:
            if (VAR4 == 0xD8)
            {
                VAR4 = 0xC0;
            }
            else
                VAR5++;
            break;
        case 0xDA:
            if (VAR4 == 0xC0)
            {
                VAR4 = 0xDA;
            }
            else
                VAR5++;
            break;
        case 0xD9:
            if (VAR4 == 0xDA)
            {
                VAR4 = 0xD9;
                VAR6++;
            }
            else
                VAR5++;
            break;
        default:
            if ((VAR8 >= 0x02 && VAR8 <= 0xBF) || VAR8 == 0xC8)
            {
                VAR5++;
            }
        }
    }
    if (VAR5 * 4 + 1 < VAR6)
    {
        static const char VAR10[] = "";
        int VAR3;
        for (VAR3 = 0; VAR3 < FUN2(VAR2->VAR7 - sizeof(VAR10), 100); VAR3++)
            if (!memcmp(VAR2->VAR9 + VAR3, VAR10, sizeof(VAR10) - 1))
                return VAR11;
        if (VAR5 == 0 && VAR6 > 2)
            return VAR11 / 2;
        return VAR11 / 4;
    }
    return 0;
}