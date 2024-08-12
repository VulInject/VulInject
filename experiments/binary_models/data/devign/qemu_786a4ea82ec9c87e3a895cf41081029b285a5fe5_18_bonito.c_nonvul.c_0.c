static VAR1 FUN1(void *VAR2, hwaddr VAR3)
{
    VAR4 *VAR5 = VAR2;
    VAR6 *VAR7 = FUN2(VAR5->VAR8);
    uint32_t VAR9;
    uint32_t VAR10;
    uint32_t VAR11;
    uint32_t VAR12;
    uint32_t VAR13;
    uint32_t VAR14;
    if ((VAR5->VAR15[VAR16] & 0x10000) != 0x0)
    {
        return 0xffffffff;
    }
    VAR9 = VAR3 & 0xffff;
    VAR9 |= (VAR5->VAR15[VAR16] & 0xffff) << 16;
    VAR10 = (VAR9 & VAR17) >> VAR18;
    VAR11 = FUN3(VAR10);
    VAR12 = (VAR9 & VAR19) >> VAR20;
    VAR13 = (VAR9 & VAR21) >> VAR22;
    if (VAR10 == 0)
    {
        fprintf(VAR23, "" VAR24 "", VAR3, VAR5->VAR15[VAR16]);
        FUN4(1);
    }
    VAR14 = FUN5(FUN6(VAR7->VAR25), VAR11, VAR12, VAR13);
    FUN7("", VAR9, VAR14, FUN6(VAR7->VAR25), VAR11, VAR12, VAR13);
    return VAR14;
}