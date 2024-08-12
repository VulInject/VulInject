static inline void FUN1(VAR1)(VAR2 *VAR3, const VAR4 *VAR5, const VAR4 *VAR6, const VAR4 *VAR7, const VAR4 *VAR8, VAR9 *VAR10, int VAR11, int VAR12, enum PixelFormat VAR13, int VAR14, int VAR15)
{
    const int VAR16 = 0;
    int VAR17;
    const VAR4 *VAR18 = VAR5;
    const int VAR19 = 4096;
    if (VAR14 & VAR20)
    {
        VAR3->FUN2(VAR3, VAR5, VAR5, VAR6, VAR7, VAR8, VAR8, VAR10, VAR11, 0, VAR12, VAR15);
        return;
    }
    if (VAR12 < 2048)
    {
        FUN3(VAR21, FUN4(void, 0), VAR22, VAR23)
    }
    else
    {
        FUN3(VAR24, FUN5(void, 0), VAR22, VAR23)
    }
}