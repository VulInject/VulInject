static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12;
    const int VAR13 = VAR6->VAR14.VAR13[VAR7][0];
    const int *VAR15 = VAR6->VAR16[0].VAR17;
    int *VAR18 = VAR4->VAR17;
    const int VAR19 = 1024 << (VAR2->VAR20[1].VAR21.VAR22 == 1);
    VAR9 = VAR23[VAR13 & 7];
    VAR10 = (VAR13 - 1024) >> 3;
    if (VAR10 < 0)
    {
        VAR10 = -VAR10;
        VAR11 = 1 << (VAR10 - 1);
        for (VAR8 = 0; VAR8 < VAR19; VAR8++)
        {
            VAR12 = (int)(((VAR24)VAR15[VAR8] * VAR9 + (VAR24)0x1000000000) >> 37);
            VAR18[VAR8] += (VAR12 + VAR11) >> VAR10;
        }
    }
    else
    {
        for (VAR8 = 0; VAR8 < VAR19; VAR8++)
        {
            VAR12 = (int)(((VAR24)VAR15[VAR8] * VAR9 + (VAR24)0x1000000000) >> 37);
            VAR18[VAR8] += VAR12 << VAR10;
        }
    }
}