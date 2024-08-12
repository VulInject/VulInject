static void FUN1(void *VAR1)
{
    struct VAR2 *VAR3 = (struct VAR2 *)VAR1;
    static const int VAR4[8] = {0, 1, 1, 2, 2, 2, -255, -255};
    if (!VAR3->VAR5)
        return;
    if (VAR3->VAR6)
        FUN2("", VAR7);
    VAR3->VAR6 = VAR3->VAR5 << VAR4[(VAR3->VAR8[0] >> 5) & 7];
    FUN3(VAR3);
    FUN4(VAR3->VAR9, FUN5(VAR10) + VAR11);
}