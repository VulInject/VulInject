static void FUN1(struct VAR1 *VAR2)
{
    int64_t VAR3, VAR4 = 1, VAR5 = 1000;
    static const int VAR6[8] = {1, 2, 4, 8, 12, 16, 20, 24};
    if (~VAR2->VAR7 & (1 << 6))
        VAR3 = 0;
    else if (VAR2->VAR7 & (1 << 7))
        VAR3 = VAR4;
    else
    {
        VAR4 = FUN2(VAR5, VAR6[VAR2->VAR7 & 7], 256 / 32);
        VAR3 = (VAR2->VAR8 && VAR2->VAR9) ? FUN2(VAR5, VAR6[(VAR2->VAR7 >> 3) & 7], 256) : 0;
    }
    FUN3(VAR2->VAR10);
    if (VAR3 == VAR4 && VAR2->VAR3 < VAR2->VAR4)
        FUN4("", VAR11);
    else if (VAR3 == 0 && VAR2->VAR3)
        FUN4("", VAR11);
    else if (VAR3 && (VAR3 != VAR2->VAR3 || VAR4 != VAR2->VAR4))
    {
        VAR2->VAR12 = 0;
        VAR2->VAR3 = VAR3;
        VAR2->VAR4 = VAR4;
        FUN5(VAR2);
        return;
    }
    VAR2->VAR3 = VAR3;
    VAR2->VAR4 = VAR4;
}