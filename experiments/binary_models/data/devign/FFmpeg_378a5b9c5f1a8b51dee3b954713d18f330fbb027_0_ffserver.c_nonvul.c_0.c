static int FUN1(int VAR1, int64_t VAR2)
{
    uint8_t VAR3[8];
    int VAR4;
    for (VAR4 = 0; VAR4 < 8; VAR4++)
        VAR3[VAR4] = (VAR2 >> (56 - VAR4 * 8)) & 0xff;
    if (FUN2(VAR1, 8, VAR5) < 0)
        return FUN3(VAR6);
    if (write(VAR1, VAR3, 8) != 8)
        return FUN3(VAR6);
    return 8;
}