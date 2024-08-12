static inline void FUN1(int VAR1, int VAR2)
{
    int VAR3;
    uint32_t VAR4;
    VAR4 = VAR5->VAR6[VAR1].VAR7;
    VAR3 = (VAR4 >> VAR8) & 3;
    if (!(VAR4 & VAR9) || !(VAR4 & VAR10))
    {
        if (VAR3 < VAR2)
        {
            FUN2(VAR5, VAR1, 0, 0, 0, 0);
        }
    }
}