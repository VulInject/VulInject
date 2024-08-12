int FUN1(uint32_t VAR1[256], enum PixelFormat VAR2)
{
    int VAR3;
    for (VAR3 = 0; VAR3 < 256; VAR3++)
    {
        int VAR4, VAR5, VAR6;
        switch (VAR2)
        {
        case VAR7:
            VAR4 = (VAR3 >> 5) * 36;
            VAR5 = ((VAR3 >> 2) & 7) * 36;
            VAR6 = (VAR3 & 3) * 85;
            break;
        case VAR8:
            VAR6 = (VAR3 >> 6) * 85;
            VAR5 = ((VAR3 >> 3) & 7) * 36;
            VAR4 = (VAR3 & 7) * 36;
            break;
        case VAR9:
            VAR4 = (VAR3 >> 3) * 255;
            VAR5 = ((VAR3 >> 1) & 3) * 85;
            VAR6 = (VAR3 & 1) * 255;
            break;
        case VAR10:
            VAR6 = (VAR3 >> 3) * 255;
            VAR5 = ((VAR3 >> 1) & 3) * 85;
            VAR4 = (VAR3 & 1) * 255;
            break;
        case VAR11:
            VAR4 = VAR6 = VAR5 = VAR3;
            break;
        }
        VAR1[VAR3] = VAR6 + (VAR5 << 8) + (VAR4 << 16);
    }
    return 0;