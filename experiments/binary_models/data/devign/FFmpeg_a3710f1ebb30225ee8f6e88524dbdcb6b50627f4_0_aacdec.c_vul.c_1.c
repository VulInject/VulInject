static VAR1 *FUN1(VAR2 *VAR3, int VAR4, int VAR5)
{
    if (!VAR3->VAR6[1].VAR7.VAR8)
    {
        return VAR3->VAR9[VAR4][VAR5];
    }
    if (!VAR3->VAR10 && VAR4 == VAR11 && VAR3->VAR6[1].VAR7.VAR8 == 1)
    {
        uint8_t VAR12[VAR13 * 4][3];
        int VAR14;
        FUN2(VAR3);
        if (FUN3(VAR3->VAR15, VAR12, &VAR14, 2) < 0)
            return NULL;
        if (FUN4(VAR3, VAR12, VAR14, 2, VAR16) < 0)
            return NULL;
        VAR3->VAR6[1].VAR7.VAR8 = 2;
    }
    if (!VAR3->VAR10 && VAR4 == VAR17 && VAR3->VAR6[1].VAR7.VAR8 == 2 && 0)
    {
        uint8_t VAR12[VAR13 * 4][3];
        int VAR14;
        FUN2(VAR3);
        FUN5(VAR3->VAR15, VAR18, "");
        if (FUN3(VAR3->VAR15, VAR12, &VAR14, 1) < 0)
            return NULL;
        if (FUN4(VAR3, VAR12, VAR14, 1, VAR16) < 0)
            return NULL;
        VAR3->VAR6[1].VAR7.VAR8 = 1;
    }
    switch (VAR3->VAR6[1].VAR7.VAR8)
    {
    case 7:
        if (VAR3->VAR10 == 3 && VAR4 == VAR11)
        {
            VAR3->VAR10++;
            return VAR3->VAR9[VAR11][VAR5] = VAR3->VAR19[VAR11][2];
        }
    case 6:
        if (VAR3->VAR10 == VAR20[VAR3->VAR6[1].VAR7.VAR8] - 1 && (VAR4 == VAR21 || VAR4 == VAR17))
        {
            VAR3->VAR10++;
            return VAR3->VAR9[VAR4][VAR5] = VAR3->VAR19[VAR21][0];
        }
    case 5:
        if (VAR3->VAR10 == 2 && VAR4 == VAR11)
        {
            VAR3->VAR10++;
            return VAR3->VAR9[VAR11][VAR5] = VAR3->VAR19[VAR11][1];
        }
    case 4:
        if (VAR3->VAR10 == 2 && VAR3->VAR6[1].VAR7.VAR8 == 4 && VAR4 == VAR17)
        {
            VAR3->VAR10++;
            return VAR3->VAR9[VAR17][VAR5] = VAR3->VAR19[VAR17][1];
        }
    case 3:
    case 2:
        if (VAR3->VAR10 == (VAR3->VAR6[1].VAR7.VAR8 != 2) && VAR4 == VAR11)
        {
            VAR3->VAR10++;
            return VAR3->VAR9[VAR11][VAR5] = VAR3->VAR19[VAR11][0];
        }
        else if (VAR3->VAR6[1].VAR7.VAR8 == 2)
        {
            return NULL;
        }
    case 1:
        if (!VAR3->VAR10 && VAR4 == VAR17)
        {
            VAR3->VAR10++;
            return VAR3->VAR9[VAR17][VAR5] = VAR3->VAR19[VAR17][0];
        }
    default:
        return NULL;
    }