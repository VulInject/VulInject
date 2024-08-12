static inline VAR1 FUN1(VAR2 *VAR3, int64_t VAR4, int write)
{
    VAR5 *VAR6 = VAR3->VAR7;
    uint64_t VAR8 = VAR4 * 512;
    uint64_t VAR9, VAR10;
    uint32_t VAR11, VAR12;
    VAR11 = VAR8 / VAR6->VAR13;
    VAR12 = (VAR8 % VAR6->VAR13) / 512;
    if (VAR11 >= VAR6->VAR14 || VAR6->VAR15[VAR11] == 0xffffffff)
        return -1;
    VAR9 = 512 * (VAR16)VAR6->VAR15[VAR11];
    VAR10 = VAR9 + VAR6->VAR17 + (512 * VAR12);
    if (write && (VAR6->VAR18 != VAR9))
    {
        uint8_t VAR19[VAR6->VAR17];
        VAR6->VAR18 = VAR9;
        memset(VAR19, 0xff, VAR6->VAR17);
        FUN2(VAR3->VAR20, VAR9, VAR19, VAR6->VAR17);
    }
    return VAR10;
}