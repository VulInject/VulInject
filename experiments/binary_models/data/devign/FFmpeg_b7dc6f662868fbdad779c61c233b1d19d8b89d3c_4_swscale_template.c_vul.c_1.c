inline static void FUN1(VAR1)(VAR2 *VAR3, int VAR4, VAR5 *VAR6, VAR5 *VAR7, int VAR8, int VAR9, int VAR10, int VAR11, VAR12 *VAR13, VAR12 *VAR14, int VAR15, void *VAR16, int VAR17, VAR5 *VAR18)
{
    if (VAR17 == VAR19)
    {
        FUN1(VAR20)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    else if (VAR17 == VAR21)
    {
        FUN1(VAR22)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    else if (VAR17 == VAR23)
    {
        FUN1(VAR24)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    else if (VAR17 == VAR25)
    {
        FUN1(VAR26)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    else if (VAR17 == VAR27)
    {
        FUN1(VAR28)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    else if (VAR17 == VAR29)
    {
        FUN1(VAR30)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    else if (VAR17 == VAR31)
    {
        FUN1(VAR32)
        (VAR18, VAR18 + 2048, VAR6, VAR7, VAR8);
        VAR6 = VAR18;
        VAR7 = VAR18 + 2048;
    }
    else if (FUN2(VAR17))
    {
        return;
    }
    if (!(VAR10 & VAR33) || (!VAR11))
        if (!(VAR10 & VAR33))
        {
            FUN1(VAR34)
            (VAR3, VAR4, VAR6, VAR8, VAR9, VAR13, VAR14, VAR15);
            FUN1(VAR34)
            (VAR3 + 2048, VAR4, VAR7, VAR8, VAR9, VAR13, VAR14, VAR15);
        }
        else
        {
            int VAR35;
            if (VAR11)
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
                             "" VAR36 "" VAR36 "" VAR36 ""
                             ""
                             ""
                             "" FUNNYUVCODE FUNNYUVCODE FUNNYUVCODE FUNNYUVCODE FUNNYUVCODE FUNNYUVCODE FUNNYUVCODE VAR37 ""
                             ""
                             ""
                             "" FUNNYUVCODE FUNNYUVCODE FUNNYUVCODE FUNNYUVCODE FUNNYUVCODE FUNNYUVCODE FUNNYUVCODE VAR37
                             :
                             : ""(VAR6), ""(VAR3), ""(VAR4), ""((VAR9 * 4) >> 16), ""((VAR9 * 4) & 0xFFFF), ""(VAR9 & 0xFFFF), ""(VAR7), ""(VAR16)
                             : "", "", "", "", "", "");
                for (VAR35 = VAR4 - 1; (VAR35 * VAR9) >> 16 >= VAR8 - 1; VAR35--)
                {
                    VAR3[VAR35] = VAR6[VAR8 - 1] * 128;
                    VAR3[VAR35 + 2048] = VAR7[VAR8 - 1] * 128;
                }
            }
            else
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
                             ""
                             ""
                             ""
                             ""
                             ""
                             :
                             : ""(VAR6), ""(VAR3), ""(VAR4), ""(VAR9 >> 16), ""(VAR9 & 0xFFFF), ""(VAR7)
                             : "", "", "", "", "");
            }
            int VAR35;
            unsigned int VAR38 = 0;
            for (VAR35 = 0; VAR35 < VAR4; VAR35++)
            {
                register unsigned int VAR39 = VAR38 >> 16;
                register unsigned int VAR40 = (VAR38 & 0xFFFF) >> 9;
                VAR3[VAR35] = (VAR6[VAR39] * (VAR40 ^ 127) + VAR6[VAR39 + 1] * VAR40);
                VAR3[VAR35 + 2048] = (VAR7[VAR39] * (VAR40 ^ 127) + VAR7[VAR39 + 1] * VAR40);
                VAR38 += VAR9;
            }
        }
}