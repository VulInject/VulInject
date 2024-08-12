static int FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6 = FUN2(VAR4->VAR7);
    if (!(VAR4->VAR8 & VAR9))
    {
        VAR4->VAR10[VAR11] = VAR4->VAR10[VAR12] = VAR4->VAR10[VAR13] = VAR4->VAR10[VAR14] = 0;
        VAR4->VAR15 = false;
    }
    VAR4->VAR16 = 0;
    VAR4->VAR17 = false;
    VAR6->VAR18 = (VAR4->VAR10[VAR19] & VAR20) == 0;
    if (FUN3(VAR4) && !(VAR4->VAR21[VAR22] & VAR23))
    {
        VAR6->VAR18 = false;
        FUN4(VAR4->VAR24, FUN5(VAR25) + 500);
    }
    return 0;
}