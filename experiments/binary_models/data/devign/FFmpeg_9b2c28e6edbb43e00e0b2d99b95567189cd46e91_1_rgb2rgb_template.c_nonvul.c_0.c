void FUN1(const VAR1 *VAR2, VAR1 *VAR3, uint32_t VAR4)
{
    register const char *VAR5 = VAR2 + VAR4;
    register char *VAR6 = VAR3 + VAR4;
    register int VAR7 = -VAR4;
    __asm FUN2(VAR8 ""
                     :
                     : ""(*(VAR5 + VAR7)));
    __asm FUN2(""
                     :
                     : ""(VAR9));
    while (VAR7 < 0)
    {
        __asm FUN2(VAR8 ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  ""
                                  "" VAR10 "" VAR10 ""
                         : ""(*(VAR6 + VAR7))
                         : ""(*(VAR5 + VAR7)));
        VAR7 += 16;
    }
    __asm FUN2(VAR11
                     :
                     :
                     : "");
    __asm FUN2(VAR12
                     :
                     :
                     : "");
    const VAR13 *VAR14 = (VAR13 *)VAR2;
    VAR13 *VAR15 = (VAR13 *)VAR3;
    VAR13 *VAR16 = ((VAR1 *)VAR14) + VAR4;
    while (VAR14 < VAR16)
    {
        register int VAR17 = *(VAR14++);
        *(VAR15++) = (VAR17 & 0x001F) | ((VAR17 & 0x7FE0) << 1);
    }
    const VAR18 *VAR14 = (VAR18 *)VAR2;
    VAR18 *VAR15 = (VAR18 *)VAR3;
    int VAR19;
    int VAR20 = VAR4 >> 2;
    for (VAR19 = 0; VAR19 < VAR20; VAR19++)
    {
        register int VAR17 = VAR14[VAR19];
        VAR15[VAR19] = (VAR17 & 0x7FFF7FFF) + (VAR17 & 0x7FE07FE0);
    }
}