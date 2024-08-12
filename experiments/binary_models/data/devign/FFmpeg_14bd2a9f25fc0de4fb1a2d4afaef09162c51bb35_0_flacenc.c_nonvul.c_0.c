static int FUN1(uint32_t VAR1, int VAR2)
{
    int VAR3;
    uint32_t VAR4;
    if (VAR1 <= VAR2 >> 1)
        return 0;
    VAR4 = VAR1 - (VAR2 >> 1);
    VAR3 = FUN2(VAR2 < 256 ? FUN3(VAR4, VAR2) : VAR4 / VAR2);
    return FUN4(VAR3, VAR5);
}