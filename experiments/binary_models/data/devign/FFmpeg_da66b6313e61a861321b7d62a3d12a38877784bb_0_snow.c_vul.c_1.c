static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8)
{
    const int VAR9 = VAR4->VAR9;
    const int VAR10 = VAR4->VAR11;
    const int VAR12 = VAR4->VAR13;
    const int VAR14 = FUN2(VAR2->VAR14 + VAR4->VAR14, 0, 128);
    const int VAR15 = VAR16[VAR14 & 7] << (VAR14 >> 3);
    int VAR17, VAR18;
    assert(VAR19 == 8);
    VAR8 = VAR8 ? 0 : (3 * VAR15) >> 3;
    if (!VAR8)
    {
        for (VAR18 = 0; VAR18 < VAR12; VAR18++)
        {
            for (VAR17 = 0; VAR17 < VAR10; VAR17++)
            {
                int VAR20 = VAR6[VAR17 + VAR18 * VAR7];
                if (VAR20 >= 0)
                {
                    VAR20 <<= VAR21;
                    VAR20 /= VAR15;
                    VAR6[VAR17 + VAR18 * VAR7] = VAR20;
                }
                else
                {
                    VAR20 = -VAR20;
                    VAR20 <<= VAR21;
                    VAR20 /= VAR15;
                    VAR6[VAR17 + VAR18 * VAR7] = -VAR20;
                }
            }
        }
    }
    else
    {
        for (VAR18 = 0; VAR18 < VAR12; VAR18++)
        {
            for (VAR17 = 0; VAR17 < VAR10; VAR17++)
            {
                int VAR20 = VAR6[VAR17 + VAR18 * VAR7];
                if (VAR20 >= 0)
                {
                    VAR20 <<= VAR21;
                    VAR20 = (VAR20 + VAR8) / VAR15;
                    VAR6[VAR17 + VAR18 * VAR7] = VAR20;
                }
                else
                {
                    VAR20 = -VAR20;
                    VAR20 <<= VAR21;
                    VAR20 = (VAR20 + VAR8) / VAR15;
                    VAR6[VAR17 + VAR18 * VAR7] = -VAR20;
                }
            }
        }
    }
}