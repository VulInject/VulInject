static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    static const uint8_t VAR5[] = {1, 2, 3, 5, 8, 13, 21};
    int VAR6;
    int VAR7 = 0;
    int VAR8 = 0;
    int VAR9 = 0;
    unsigned VAR10;
    for (VAR6 = 0; VAR6 < 7; VAR6++)
    {
        if (VAR9 && VAR7)
            break;
        VAR9 = VAR7;
        VAR7 = FUN2(VAR2);
        if (VAR7 && !VAR9)
            VAR8 += VAR5[VAR6];
    }
    VAR8--;
    if (VAR8 < 0 || VAR8 > 31)
    {
        *VAR4 = 0;
        return -1;
    }
    else if (VAR8 == 0)
    {
        *VAR4 = 0;
        return 0;
    }
    VAR10 = FUN3(VAR2, VAR8);
    VAR10 |= 1 << VAR8;
    *VAR4 = VAR10 - 1;
    return 0;
}