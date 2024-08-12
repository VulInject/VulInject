static int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 *VAR5, int VAR6)
{
    int VAR7;
    while (VAR6 > 0)
    {
        int64_t VAR8 = FUN2(VAR2, VAR3);
        if (VAR8 < 0)
        {
            return VAR8;
        }
        else if (VAR8 > 0)
        {
            VAR7 = FUN3(VAR2->VAR9, VAR8, VAR5, 512);
            if (VAR7 < 0)
            {
                return VAR7;
            }
        }
        else
        {
            memset(VAR5, 0, 512);
        }
        VAR6--;
        VAR3++;
        VAR5 += 512;
    }
    return 0;
}