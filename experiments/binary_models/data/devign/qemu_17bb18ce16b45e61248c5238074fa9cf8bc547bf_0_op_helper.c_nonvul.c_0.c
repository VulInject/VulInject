VAR1 FUN1(VAR2)(uint32_t VAR3, uint64_t VAR4)
{
    uint8_t VAR5;
    uint8_t VAR6;
    if (VAR4 > VAR7)
    {
        return 0;
    }
    VAR6 = VAR8->VAR9[VAR4 / VAR10];
    VAR5 = VAR6 & (VAR11 | VAR12);
    VAR8->VAR9[VAR4 / VAR10] = (VAR6 & ~VAR11);
    return VAR5 >> 1;
}