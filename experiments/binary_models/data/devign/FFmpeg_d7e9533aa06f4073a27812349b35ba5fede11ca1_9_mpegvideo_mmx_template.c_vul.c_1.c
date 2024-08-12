static int FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, int VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10, VAR11;
    const VAR12 *VAR13;
    static __align8 INT16 VAR14[64];
    int VAR15, VAR16;
    if (VAR3->VAR17 != NULL && VAR3->VAR17->VAR18->VAR19 == VAR20)
    {
        VAR15 = -2048;
        VAR16 = 2047;
    }
    else if (VAR3->VAR21 == VAR22)
    {
        VAR15 = -255;
        VAR16 = 255;
    }
    else if (VAR3->VAR21 == VAR23)
    {
        VAR15 = -1023;
        VAR16 = 1023;
    }
    else
    {
        VAR15 = -128;
        VAR16 = 127;
    }
    FUN2(VAR5);
    if (VAR3->VAR24)
    {
        int VAR25;
        if (VAR6 < 4)
            VAR11 = VAR3->VAR26;
        else
            VAR11 = VAR3->VAR27;
        asm volatile(""
                     ""
                     : ""(VAR14[0]), ""(VAR25)
                     : ""(VAR5[0] + (VAR11 >> 1)), ""(VAR28[VAR11]));
        asm volatile(""
                     ""
                     ""
                     : ""(VAR14[0])
                     : ""(VAR5[0] + (VAR11 >> 1)), ""(VAR11)
                     : "");
        VAR8 = 1;
        VAR10 = 1;
        if (VAR3->VAR21 == VAR29)
        {
            VAR13 = VAR3->VAR30;
        }
        else
        {
            VAR13 = VAR3->VAR31;
        }
        for (VAR8 = 1; VAR8 < 4; VAR8++)
        {
            VAR9 = VAR5[VAR8] * VAR13[VAR8];
            VAR9 = VAR9 / (1 << (VAR32 - 3));
            if (VAR9 > VAR16)
                VAR9 = VAR16;
            else if (VAR9 < VAR15)
                VAR9 = VAR15;
            VAR14[VAR8] = VAR9;
            if (VAR9)
                if (VAR10 < VAR33[VAR8])
                    VAR10 = VAR33[VAR8];
            VAR5[VAR8] = 0;
        }
    }
    else
    {
        VAR8 = 0;
        VAR10 = 0;
        VAR13 = VAR3->VAR30;
    }
    asm volatile("" FUN3(% % VAR34) "" FUN3(% % VAR35) "" FUN3(% % VAR36) ""
                                                                                                                                                                                                         "" FUN3(% % VAR37) ""
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
                                                                                                                                                                                                                                                                  "" FUN4(% % VAR38, % % VAR37) ""
                                                                                                                                                                                                                                                                                                                                  ""
                                                                                                                                                                                                                                                                                                                                  ""
                                                                                                                                                                                                                                                                                                                                  "" FUN4(% % VAR39, % % VAR37) ""
                                                                                                                                                                                                                                                                                                                                                                                          "" FUN4(% % VAR39, % % VAR37) ""
                                                                                                                                                                                                                                                                                                                                                                                                                                                  ""
                 : ""(VAR10)
                 : ""(VAR5 + 64), ""(VAR13 + 64), ""(VAR16), ""(VAR15), ""(VAR15), ""(2 * VAR8 - 128), ""(0x7FFF - VAR16), ""(0x7FFF - VAR16 + VAR15), ""(VAR15), ""(2 * VAR8 - 128), ""(VAR33 + 64), ""(VAR14 + 64));
    asm volatile(""
                 ""
                 "" FUN5(VAR40) ""
                                                 ""
                                                 ""
                                                 ""
                                                 ""
                                                 ""
                                                 "" FUN5(VAR41) ""
                                                                               "" FUN5(VAR41) ""
                                                                                                             ""
                                                                                                             ""
                                                                                                             ""
                                                                                                             ""
                                                                                                             "" FUN5(VAR40) ""
                                                                                                                                      ""
                 :
                 : ""(-VAR10), ""(VAR42 + VAR10), ""(VAR14), ""(VAR5)
                 : "", "", "");
    return VAR10 - 1;
}