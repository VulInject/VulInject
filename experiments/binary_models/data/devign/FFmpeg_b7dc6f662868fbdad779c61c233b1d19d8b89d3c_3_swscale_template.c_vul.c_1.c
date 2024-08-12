static inline void FUN1(VAR1)(VAR2 *VAR3, int VAR4, VAR5 *VAR6, int VAR7, int VAR8, int VAR9, int VAR10, VAR11 *VAR12, VAR11 *VAR13, int VAR14, void *VAR15, int VAR16, VAR5 *VAR17)
{
    if (VAR16 == VAR18)
    {
        FUN1(VAR19)
        (VAR17, VAR6, VAR7);
        VAR6 = VAR17;
    }
    else if (VAR16 == VAR20)
    {
        FUN1(VAR21)
        (VAR17, VAR6, VAR7);
        VAR6 = VAR17;
    }
    else if (VAR16 == VAR22)
    {
        FUN1(VAR23)
        (VAR17, VAR6, VAR7);
        VAR6 = VAR17;
    }
    else if (VAR16 == VAR24)
    {
        FUN1(VAR25)
        (VAR17, VAR6, VAR7);
        VAR6 = VAR17;
    }
    else if (VAR16 == VAR26)
    {
        FUN1(VAR27)
        (VAR17, VAR6, VAR7);
        VAR6 = VAR17;
    }
    else if (VAR16 == VAR28)
    {
        FUN1(VAR29)
        (VAR17, VAR6, VAR7);
        VAR6 = VAR17;
    }
    else if (VAR16 == VAR30)
    {
        FUN1(VAR31)
        (VAR17, VAR6, VAR7);
        VAR6 = VAR17;
    }
    if (!(VAR9 & VAR32) || (!VAR10))
        if (!(VAR9 & VAR32))
        {
            FUN1(VAR33)
            (VAR3, VAR4, VAR6, VAR7, VAR8, VAR12, VAR13, VAR14);
        }
        else
        {
            int VAR34;
            if (VAR10)
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
                             "" VAR35 "" VAR35 "" VAR35 ""
                             ""
                             ""
                             "" FUNNY_Y_CODE FUNNY_Y_CODE FUNNY_Y_CODE FUNNY_Y_CODE FUNNY_Y_CODE FUNNY_Y_CODE FUNNY_Y_CODE VAR36
                             :
                             : ""(VAR6), ""(VAR3), ""(VAR4), ""((VAR8 * 4) >> 16), ""((VAR8 * 4) & 0xFFFF), ""(VAR8 & 0xFFFF), ""(VAR15)
                             : "", "", "", "", "", "");
                for (VAR34 = VAR4 - 1; (VAR34 * VAR8) >> 16 >= VAR7 - 1; VAR34--)
                    VAR3[VAR34] = VAR6[VAR7 - 1] * 128;
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
                             ""
                             :
                             : ""(VAR6), ""(VAR3), ""(VAR4), ""(VAR8 >> 16), ""(VAR8 & 0xFFFF)
                             : "", "", "", "", "");
            }
            int VAR34;
            unsigned int VAR37 = 0;
            for (VAR34 = 0; VAR34 < VAR4; VAR34++)
            {
                register unsigned int VAR38 = VAR37 >> 16;
                register unsigned int VAR39 = (VAR37 & 0xFFFF) >> 9;
                VAR3[VAR34] = (VAR6[VAR38] << 7) + (VAR6[VAR38 + 1] - VAR6[VAR38]) * VAR39;
                VAR37 += VAR8;
            }
        }
}