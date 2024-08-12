static void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    static int VAR6 = 1;
    VAR7 *VAR8 = &VAR2->VAR9[VAR3];
    VAR8->VAR2 = VAR2;
    VAR8->VAR3 = VAR3;
    VAR8->VAR6 = VAR6++;
    VAR8->VAR10 = FUN2(VAR8->VAR11, VAR12 * 512 + 4);
    VAR8->VAR13 = VAR12 * 512 + 4;
    VAR8->VAR14 = FUN2(VAR8->VAR11, 512);
    VAR8->VAR15 = FUN3(VAR16, VAR17, VAR8);
    if (VAR5)
    {
        FUN4(VAR8, VAR5, NULL);
    }
    else
    {
        FUN5(VAR8);
    }
}