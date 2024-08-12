static inline VAR1 FUN1(VAR2 *VAR3, uint64_t VAR4, bool write)
{
    VAR5 *VAR6 = VAR3->VAR7;
    uint64_t VAR8, VAR9;
    uint32_t VAR10, VAR11;
    VAR10 = VAR4 / VAR6->VAR12;
    VAR11 = VAR4 % VAR6->VAR12;
    if (VAR10 >= VAR6->VAR13 || VAR6->VAR14[VAR10] == 0xffffffff)
        return -1;
    VAR8 = 512 * (VAR15)VAR6->VAR14[VAR10];
    VAR9 = VAR8 + VAR6->VAR16 + VAR11;
    if (write && (VAR6->VAR17 != VAR8))
    {
        uint8_t VAR18[VAR6->VAR16];
        VAR6->VAR17 = VAR8;
        memset(VAR18, 0xff, VAR6->VAR16);
        FUN2(VAR3->VAR19, VAR8, VAR18, VAR6->VAR16);
    }
    return VAR9;
}