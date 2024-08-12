static inline VAR1 FUN1(VAR2 *VAR3, uint64_t VAR4)
{
    if (VAR3->VAR5 & VAR6)
    {
        uint32_t VAR7, VAR8;
        VAR8 = (VAR9)VAR3->VAR8;
        VAR7 = VAR8 - (VAR9)VAR4;
        VAR7 = (VAR10)VAR7 > 0 ? VAR7 : (VAR9)1;
        return (VAR1)VAR7;
    }
    else
    {
        uint64_t VAR7, VAR8;
        VAR8 = VAR3->VAR8;
        VAR7 = VAR8 - VAR4;
        VAR7 = (VAR11)VAR7 > 0 ? VAR7 : (VAR1)1;
        return VAR7;
    }
}