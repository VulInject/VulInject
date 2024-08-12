void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR3 = (VAR3 != 0);
    if (VAR3 != ((VAR2->VAR4 >> 20) & 1))
    {
        FUN2("", VAR3);
        FUN3(VAR2, 0);
        FUN4(VAR2, 1);
        VAR2->VAR4 = 0xffefffff | (VAR3 << 20);
    }
}