static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7, int VAR8)
{
    VAR9 *VAR10 = &VAR4->VAR11.VAR12;
    int VAR13;
    if (VAR8)
    {
        memcpy(VAR10->VAR14, VAR6, VAR7);
        VAR10->VAR15 = VAR7;
        VAR10->VAR16 = -1;
        VAR10->VAR17 = 0;
    }
    else
    {
        if (VAR10->VAR17)
            return;
        VAR13 = 4096 - VAR10->VAR15;
        if (VAR7 < VAR13)
            VAR13 = VAR7;
        memcpy(VAR10->VAR14 + VAR10->VAR15, VAR6, VAR13);
        VAR10->VAR15 += VAR13;
    }
    if (VAR10->VAR16 == -1 && VAR10->VAR15 >= 3)
    {
        VAR13 = (FUN2(VAR10->VAR14 + 1) & 0xfff) + 3;
        if (VAR13 > 4096)
            return;
        VAR10->VAR16 = VAR13;
    }
    if (VAR10->VAR16 != -1 && VAR10->VAR15 >= VAR10->VAR16)
    {
        int VAR18 = 1;
        VAR10->VAR17 = 1;
        if (VAR10->VAR19)
        {
            VAR18 = !FUN3(FUN4(VAR20), -1, VAR10->VAR14, VAR10->VAR16);
            if (VAR18)
            {
                VAR2->VAR21[VAR4->VAR22] = 100;
            }
            else if (VAR2->VAR21[VAR4->VAR22] > -10)
            {
                VAR2->VAR21[VAR4->VAR22]--;
            }
            else
                VAR18 = 2;
        }
        if (VAR18)
            VAR10->FUN5(VAR4, VAR10->VAR14, VAR10->VAR16);
    }
}