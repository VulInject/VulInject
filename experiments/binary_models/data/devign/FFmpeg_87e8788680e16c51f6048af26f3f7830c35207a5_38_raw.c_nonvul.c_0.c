static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    const VAR4 *VAR5;
    VAR5 = VAR2->VAR6;
    VAR3 = (VAR5[0] << 12) | (VAR5[1] << 4) | (VAR5[2] >> 4);
    if (VAR3 == 0x10)
    {
        return 50;
    }
    return 0;
}