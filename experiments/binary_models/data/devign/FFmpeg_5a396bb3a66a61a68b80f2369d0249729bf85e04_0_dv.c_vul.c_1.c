int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    int VAR8, VAR9;
    VAR5 *VAR10[4] = {0};
    if (VAR7 < VAR11 || !(VAR2->VAR12 = FUN2(VAR2->VAR12, VAR6, VAR7)) || VAR7 < VAR2->VAR12->VAR13)
    {
        return -1;
    }
    VAR8 = FUN3(VAR2, VAR6);
    for (VAR9 = 0; VAR9 < VAR2->VAR14; VAR9++)
    {
        VAR2->VAR15[VAR9].VAR8 = VAR8;
        VAR2->VAR15[VAR9].VAR16 = VAR2->VAR17 * 30000 * 8 / VAR2->VAR18[VAR9]->VAR19->VAR20;
        VAR10[VAR9] = VAR2->VAR21[VAR9];
    }
    FUN4(VAR6, VAR10, VAR2->VAR12);
    if (VAR2->VAR12->VAR22 == 720)
    {
        if (VAR6[1] & 0x0C)
        {
            VAR2->VAR15[2].VAR8 = VAR2->VAR15[3].VAR8 = 0;
        }
        else
        {
            VAR2->VAR15[0].VAR8 = VAR2->VAR15[1].VAR8 = 0;
            VAR2->VAR17 += VAR8;
        }
    }
    else
    {
        VAR2->VAR17 += VAR8;
    }
    VAR8 = FUN5(VAR2, VAR6);
    FUN6(VAR4);
    VAR4->VAR23 = VAR6;
    VAR4->VAR8 = VAR8;
    VAR4->VAR24 |= VAR25;
    VAR4->VAR26 = VAR2->VAR27->VAR28;
    VAR4->VAR16 = VAR2->VAR29;
    VAR2->VAR29++;
    return VAR8;
}