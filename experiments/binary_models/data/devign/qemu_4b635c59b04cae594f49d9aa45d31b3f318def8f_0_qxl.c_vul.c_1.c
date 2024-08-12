void *FUN1(VAR1 *VAR2, QXLPHYSICAL VAR3, int VAR4)
{
    uint64_t VAR5 = FUN2(VAR3);
    uint32_t VAR6 = (VAR5 >> (64 - 8)) & 0xff;
    uint64_t VAR7 = VAR5 & 0xffffffffffff;
    switch (VAR4)
    {
    case VAR8:
        return (void *)(VAR9)VAR7;
    case VAR10:
        FUN3(VAR6 >= VAR11);
        FUN3(!VAR2->VAR12[VAR6].VAR13);
        FUN3(VAR7 < VAR2->VAR12[VAR6].VAR14);
        VAR7 -= VAR2->VAR12[VAR6].VAR14;
        FUN3(VAR7 > VAR2->VAR12[VAR6].VAR15)
            return VAR2->VAR12[VAR6].VAR16 +
            VAR7;
    default:
        FUN3(1);
    }
}