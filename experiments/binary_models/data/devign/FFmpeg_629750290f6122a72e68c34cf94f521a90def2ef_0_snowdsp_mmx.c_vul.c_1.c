void FUN1(VAR1 *VAR2, int VAR3)
{
    const int VAR4 = (VAR3 + 1) >> 1;
    IDWTELEM VAR5[VAR3 >> 1];
    const int VAR6 = (VAR3 >> 1);
    const int VAR7 = VAR4 - 1;
    int VAR8;
    {
        VAR1 *const VAR9 = VAR2 + VAR4 - 1;
        VAR8 = 1;
        VAR2[0] = VAR2[0] - ((VAR10 * 2 * VAR9[1] + VAR11) >> VAR12);
        asm volatile(""
                     ""
                     ""
                     :
                     :);
        for (; VAR8 < VAR6 - 7; VAR8 += 8)
        {
            asm volatile(""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         :
                         : ""(&VAR2[VAR8]), ""(&VAR9[VAR8])
                         : "");
        }
        FUN2(VAR8, VAR2, VAR2, VAR9, VAR3, VAR6, 0, VAR10, VAR11, VAR12);
    }
    {
        VAR1 *const VAR13 = VAR2 + VAR4;
        VAR8 = 0;
        for (; VAR8 < VAR7 - 7; VAR8 += 8)
        {
            asm volatile(""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         :
                         : ""(&VAR13[VAR8]), ""(&VAR2[VAR8])
                         : "");
        }
        FUN2(VAR8, VAR13, VAR13, VAR2, VAR3, VAR7, 1, VAR14, VAR15, VAR16);
    }
    {
        VAR1 *const VAR9 = VAR2 + VAR4 - 1;
        VAR8 = 1;
        VAR2[0] = VAR2[0] + (((2 * VAR9[1] + VAR17) + 4 * VAR2[0]) >> VAR18);
        asm volatile(""
                     :
                     :);
        for (; VAR8 < VAR6 - 7; VAR8 += 8)
        {
            asm volatile(""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         :
                         : ""(&VAR2[VAR8]), ""(&VAR9[VAR8])
                         : "");
        }
        FUN3(VAR8, VAR2, VAR2, VAR9, VAR3, VAR6);
    }
    {
        VAR1 *const VAR19 = VAR2 + VAR4;
        VAR8 = 0;
        for (; VAR8 < VAR7 - 7; VAR8 += 8)
        {
            asm volatile(""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         :
                         : ""(&VAR19[VAR8]), ""(&VAR2[VAR8]), ""(&VAR5[VAR8])
                         : "");
        }
        FUN2(VAR8, VAR5, VAR19, VAR2, VAR3, VAR7, 1, -VAR20, VAR21 + 1, VAR22);
    }
    {
        FUN4(&VAR8, VAR3, VAR2, VAR5);
        for (; (VAR8 & 0x1E) != 0x1E; VAR8 -= 2)
        {
            VAR2[VAR8 + 1] = VAR5[VAR8 >> 1];
            VAR2[VAR8] = VAR2[VAR8 >> 1];
        }
        for (VAR8 -= 30; VAR8 >= 0; VAR8 -= 32)
        {
            asm volatile(""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         :
                         : ""(&VAR2[VAR8]), ""(&VAR2[VAR8 >> 1]), ""(&VAR5[VAR8 >> 1])
                         : "");
        }
    }
}