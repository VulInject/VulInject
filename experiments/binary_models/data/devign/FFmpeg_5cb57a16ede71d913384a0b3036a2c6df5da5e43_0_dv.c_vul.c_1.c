int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int64_t VAR8)
{
    int VAR9, VAR10;
    VAR5 *VAR11[4] = {0};
    if (VAR7 < VAR12 || !(VAR2->VAR13 = FUN2(VAR2->VAR13, VAR6, VAR7)) || VAR7 < VAR2->VAR13->VAR14)
    {
        return -1;
    }
    VAR9 = FUN3(VAR2, VAR6);
    for (VAR10 = 0; VAR10 < VAR2->VAR15; VAR10++)
    {
        VAR2->VAR16[VAR10].VAR8 = VAR8;
        VAR2->VAR16[VAR10].VAR9 = VAR9;
        VAR2->VAR16[VAR10].VAR17 = VAR2->VAR18 * 30000 * 8 / VAR2->VAR19[VAR10]->VAR20->VAR21;
        VAR11[VAR10] = VAR2->VAR22[VAR10];
    }
    FUN4(VAR6, VAR11, VAR2->VAR13);
    if (VAR2->VAR13->VAR23 == 720)
    {
        if (VAR6[1] & 0x0C)
        {
            VAR2->VAR16[2].VAR9 = VAR2->VAR16[3].VAR9 = 0;
        }
        else
        {
            VAR2->VAR16[0].VAR9 = VAR2->VAR16[1].VAR9 = 0;
            VAR2->VAR18 += VAR9;
        }
    }
    else
    {
        VAR2->VAR18 += VAR9;
    }
    VAR9 = FUN5(VAR2, VAR6);
    FUN6(VAR4);
    VAR4->VAR24 = VAR6;
    VAR4->VAR8 = VAR8;
    VAR4->VAR9 = VAR9;
    VAR4->VAR25 |= VAR26;
    VAR4->VAR27 = VAR2->VAR28->VAR29;
    VAR4->VAR17 = VAR2->VAR30;
    VAR2->VAR30++;
    return VAR9;
}