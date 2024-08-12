void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    struct VAR5 *VAR6;
    int VAR7, VAR8, VAR9;
    const int VAR10 = VAR2->VAR11 * VAR2->VAR12 + VAR2->VAR13;
    if (VAR2->VAR14)
    {
        FUN2(VAR2->VAR15, VAR16, "");
        return;
    }
    if (!VAR2->VAR17)
    {
        VAR2->VAR18[0] = VAR2->VAR18[1] = VAR2->VAR18[2] = 128 << VAR2->VAR19;
    }
    VAR2->VAR20 = 0;
    VAR2->VAR21.VAR22[VAR10] = VAR2->VAR23;
    VAR6 = (struct VAR5 *)VAR2->VAR21.VAR24.VAR25[2];
    assert(VAR6);
    assert(VAR6->VAR26 == VAR27);
    assert(VAR6->VAR28);
    VAR4 = &VAR6->VAR28[VAR6->VAR29 + VAR6->VAR30];
    VAR4->VAR31 = VAR2->VAR13;
    VAR4->VAR32 = VAR2->VAR11;
    VAR4->VAR33 = VAR2->VAR34;
    if (VAR2->VAR17)
    {
        VAR4->VAR35 = VAR36;
    }
    else
    {
        VAR4->VAR35 = VAR37;
        if (VAR2->VAR38 & VAR39)
        {
            VAR4->VAR35 |= VAR40;
            VAR4->VAR41[0][0][0] = VAR2->VAR42[0][0][0];
            VAR4->VAR41[0][0][1] = VAR2->VAR42[0][0][1];
            VAR4->VAR41[1][0][0] = VAR2->VAR42[0][1][0];
            VAR4->VAR41[1][0][1] = VAR2->VAR42[0][1][1];
        }
        if (VAR2->VAR38 & VAR43)
        {
            VAR4->VAR35 |= VAR44;
            VAR4->VAR41[0][1][0] = VAR2->VAR42[1][0][0];
            VAR4->VAR41[0][1][1] = VAR2->VAR42[1][0][1];
            VAR4->VAR41[1][1][0] = VAR2->VAR42[1][1][0];
            VAR4->VAR41[1][1][1] = VAR2->VAR42[1][1][1];
        }
        switch (VAR2->VAR45)
        {
        case VAR46:
            VAR4->VAR47 = VAR48;
            break;
        case VAR49:
            VAR4->VAR47 = VAR50;
            break;
        case VAR51:
            VAR4->VAR47 = VAR52;
            if (VAR2->VAR53 == VAR54)
            {
                VAR4->VAR41[0][0][1] <<= 1;
                VAR4->VAR41[1][0][1] <<= 1;
                VAR4->VAR41[0][1][1] <<= 1;
                VAR4->VAR41[1][1][1] <<= 1;
            }
            break;
        case VAR55:
            VAR4->VAR47 = VAR56;
            if (VAR2->VAR53 == VAR54)
            {
                VAR4->VAR41[0][0][0] = VAR2->VAR42[0][0][0];
                VAR4->VAR41[0][0][1] = VAR2->VAR42[0][0][1] << 1;
                VAR4->VAR41[0][1][0] = VAR2->VAR42[0][0][0];
                VAR4->VAR41[0][1][1] = VAR2->VAR42[0][0][1] << 1;
                VAR4->VAR41[1][0][0] = VAR2->VAR42[0][2][0];
                VAR4->VAR41[1][0][1] = VAR2->VAR42[0][2][1] << 1;
                VAR4->VAR41[1][1][0] = VAR2->VAR42[0][3][0];
                VAR4->VAR41[1][1][1] = VAR2->VAR42[0][3][1] << 1;
            }
            else
            {
                VAR4->VAR41[0][1][0] = VAR2->VAR42[0][2][0];
                VAR4->VAR41[0][1][1] = VAR2->VAR42[0][2][1];
            }
            break;
        default:
            assert(0);
        }
        VAR4->VAR57 = 0;
        if (VAR2->VAR45 == VAR51 || VAR2->VAR45 == VAR49)
        {
            VAR4->VAR57 |= VAR2->VAR58[0][0];
            VAR4->VAR57 |= VAR2->VAR58[1][0] << 1;
            VAR4->VAR57 |= VAR2->VAR58[0][1] << 2;
            VAR4->VAR57 |= VAR2->VAR58[1][1] << 3;
        }
    }
    VAR4->VAR59 = VAR6->VAR60;
    VAR9 = 6;
    if (VAR2->VAR61 >= 2)
    {
        VAR9 = 4 + (1 << VAR2->VAR61);
    }
    VAR8 = 0;
    for (VAR7 = 0; VAR7 < VAR9; VAR7++)
    {
        VAR8 += VAR8;
        if (VAR2->VAR62[VAR7] >= 0)
            VAR8++;
    }
    if (VAR2->VAR63 & VAR64)
    {
        if (VAR2->VAR17)
        {
            for (VAR7 = 4; VAR7 < VAR9; VAR7++)
            {
                memset(VAR2->VAR65[VAR7], 0, sizeof(*VAR2->VAR65[VAR7]));
                if (!VAR6->VAR66)
                    *VAR2->VAR65[VAR7][0] = 1 << 10;
            }
        }
        else
        {
            VAR8 &= 0xf << (VAR9 - 4);
            VAR9 = 4;
        }
    }
    VAR4->VAR67 = VAR8;
    if (VAR8 == 0)
        VAR4->VAR35 &= ~VAR37;
    for (VAR7 = 0; VAR7 < VAR9; VAR7++)
    {
        if (VAR2->VAR62[VAR7] >= 0)
        {
            if (VAR2->VAR17 && (VAR6->VAR68 || !VAR6->VAR66))
                *VAR2->VAR65[VAR7][0] -= 1 << 10;
            if (!VAR6->VAR68)
            {
                VAR2->VAR69.FUN3(*VAR2->VAR65[VAR7]);
            }
            if (VAR2->VAR15->VAR70 == 1)
            {
                memcpy(&VAR6->VAR71[VAR6->VAR60 * 64], VAR2->VAR65[VAR7], sizeof(*VAR2->VAR65[VAR7]));
            }
            VAR6->VAR60++;
        }
    }
    VAR6->VAR30++;
    assert(VAR6->VAR30 <= VAR6->VAR72);
    assert(VAR6->VAR60 <= VAR6->VAR73);
    if (VAR6->VAR30 == VAR6->VAR72)
        FUN4(VAR2, 0, 0);
}