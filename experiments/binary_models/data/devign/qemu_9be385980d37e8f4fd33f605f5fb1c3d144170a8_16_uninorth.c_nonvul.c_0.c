static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4 = VAR2->VAR4 & 0x00FFFFFF;
    return (((VAR4 >> 11) & 0x1F) + VAR3) & 3;
}