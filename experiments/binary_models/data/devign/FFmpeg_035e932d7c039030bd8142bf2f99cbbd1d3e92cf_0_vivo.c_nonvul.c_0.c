static int FUN1(VAR1 *VAR2)
{
    const unsigned char *VAR3 = VAR2->VAR3;
    unsigned VAR4, VAR5 = 0;
    if (*VAR3++ != 0)
        return 0;
    VAR4 = *VAR3++;
    VAR5 = VAR4 & 0x7F;
    if (VAR4 & 0x80)
    {
        VAR4 = *VAR3++;
        VAR5 = (VAR5 << 7) | (VAR4 & 0x7F);
    }
    if (VAR4 & 0x80 || VAR5 > 1024 || VAR5 < 21)
        return 0;
    if (memcmp(VAR3, "", 15))
        return 0;
    VAR3 += 15;
    if (*VAR3 < '' || *VAR3 > '')
        return 0;
    return VAR6;
}