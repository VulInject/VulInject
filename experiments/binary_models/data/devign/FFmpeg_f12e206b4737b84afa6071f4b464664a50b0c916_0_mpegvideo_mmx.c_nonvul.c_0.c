static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8;
    const VAR9 *VAR10;
    if (VAR2->VAR11)
    {
        if (VAR5 < 4)
            VAR4[0] = VAR4[0] * VAR2->VAR12;
        else
            VAR4[0] = VAR4[0] * VAR2->VAR13;
        if (VAR2->VAR14 == VAR15)
        {
            VAR7 = 1;
            goto VAR16;
        }
        VAR10 = VAR2->VAR17;
        VAR7 = 1;
        while (VAR7 & 3)
        {
            VAR8 = VAR4[VAR7];
            if (VAR8)
            {
                if (VAR8 < 0)
                    VAR8 = -VAR8;
                VAR8 = (int)(VAR8 * VAR6 * VAR10[VAR7]) >> 3;
                VAR8 = (VAR8 - 1) | 1;
                if (VAR4[VAR7] < 0)
                    VAR8 = -VAR8;
                VAR4[VAR7] = VAR8;
            }
            VAR7++;
        }
        __asm FUN2(""
                         ""
                         ""
                         ""
                         ""
                         ""
                         ""
                         :
                         : ""(VAR6), ""(VAR18), ""(VAR19)
                         : "");
        for (; VAR7 < 64; VAR7 += 4)
        {
            __asm FUN2(""
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
                             : ""(VAR4[VAR7])
                             : ""(VAR4[VAR7]), ""(VAR10[VAR7])
                             : "");
        }
    }
    else
    {
        VAR7 = 0;
    VAR16:
        VAR10 = VAR2->VAR20;
        while (VAR7 & 7)
        {
            VAR8 = VAR4[VAR7];
            if (VAR8)
            {
                if (VAR8 < 0)
                    VAR8 = -VAR8;
                VAR8 = (((VAR8 << 1) + 1) * VAR6 * ((int)VAR10[VAR7])) >> 4;
                VAR8 = (VAR8 - 1) | 1;
                if (VAR4[VAR7] < 0)
                    VAR8 = -VAR8;
                VAR4[VAR7] = VAR8;
            }
            VAR7++;
        }
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
                     ""
                     :
                     : ""(VAR4), ""(VAR10), ""(VAR6), ""(2 * VAR7)
                     : "");
    }
}