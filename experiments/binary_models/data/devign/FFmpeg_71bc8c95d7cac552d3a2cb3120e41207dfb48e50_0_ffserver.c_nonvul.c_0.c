static VAR1 FUN1(int VAR2)
{
    uint8_t VAR3[8];
    if (FUN2(VAR2, 8, VAR4) < 0)
        return FUN3(VAR5);
    if (read(VAR2, VAR3, 8) != 8)
        return FUN3(VAR5);
    return FUN4(VAR3);
}