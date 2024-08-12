static int FUN1(const VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    if ((VAR2[1] & 0xF) == 3)
    {
        if (VAR2[3] != 8)
        {
            return -VAR6;
        }
        *VAR4 = FUN2(VAR2 + 4);
        return 0;
    }
    if ((VAR2[1] & 0xF) == 8)
    {
        if (VAR2[3] < 20 || memcmp(&VAR2[4], "", 4))
        {
            return -VAR6;
        }
        if (VAR2[3] > 20 && VAR2[24] != '')
        {
            return -VAR6;
        }
        *VAR4 = 0;
        for (VAR5 = 8; VAR5 < 24; VAR5++)
        {
            char VAR7 = FUN3(VAR2[VAR5]);
            VAR7 -= (VAR7 >= '' && VAR7 <= '' ? '' : '' - 10);
            *VAR4 = (*VAR4 << 4) | VAR7;
        }
        return 0;
    }
    return -VAR6;
}