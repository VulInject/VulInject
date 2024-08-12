static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR7;
    int VAR8 = 2 << VAR6->VAR9;
    int VAR10 = 3 - VAR6->VAR9;
    int VAR11 = 16 / VAR8;
    int VAR12 = 0;
    int VAR13 = 0;
    int VAR14 = VAR6->VAR15;
    int VAR16 = VAR6->VAR17;
    int VAR18, VAR19, VAR20, VAR21, VAR22, VAR23;
    int VAR24[4][2];
    int VAR25[2][2];
    const int VAR26[4][2] = {{0, 0}, {VAR6->VAR15, 0}, {0, VAR6->VAR17}, {VAR6->VAR15, VAR6->VAR17}};
    int VAR27[4][2] = {{0, 0}, {0, 0}, {0, 0}, {0, 0}};
    if (VAR14 <= 0 || VAR16 <= 0)
        return VAR28;
    for (VAR19 = 0; VAR19 < VAR2->VAR29; VAR19++)
    {
        int VAR30;
        int VAR31 = 0, VAR32 = 0;
        VAR30 = FUN2(VAR4, VAR33.VAR34, VAR35, 3);
        if (VAR30)
            VAR31 = FUN3(VAR4, VAR30);
        if (!(VAR2->VAR36 == 500 && VAR2->VAR37 == 413))
            FUN4(VAR4, "");
        VAR30 = FUN2(VAR4, VAR33.VAR34, VAR35, 3);
        if (VAR30)
            VAR32 = FUN3(VAR4, VAR30);
        FUN4(VAR4, "");
        VAR2->VAR38[VAR19][0] = VAR27[VAR19][0] = VAR31;
        VAR2->VAR38[VAR19][1] = VAR27[VAR19][1] = VAR32;
    }
    for (; VAR19 < 4; VAR19++)
        VAR2->VAR38[VAR19][0] = VAR2->VAR38[VAR19][1] = 0;
    while ((1 << VAR12) < VAR14)
        VAR12++;
    while ((1 << VAR13) < VAR16)
        VAR13++;
    VAR20 = 1 << VAR12;
    VAR21 = 1 << VAR13;
    if (VAR2->VAR36 == 500 && VAR2->VAR37 == 413)
    {
        VAR24[0][0] = VAR8 * VAR26[0][0] + VAR27[0][0];
        VAR24[0][1] = VAR8 * VAR26[0][1] + VAR27[0][1];
        VAR24[1][0] = VAR8 * VAR26[1][0] + VAR27[0][0] + VAR27[1][0];
        VAR24[1][1] = VAR8 * VAR26[1][1] + VAR27[0][1] + VAR27[1][1];
        VAR24[2][0] = VAR8 * VAR26[2][0] + VAR27[0][0] + VAR27[2][0];
        VAR24[2][1] = VAR8 * VAR26[2][1] + VAR27[0][1] + VAR27[2][1];
    }
    else
    {
        VAR24[0][0] = (VAR8 >> 1) * (2 * VAR26[0][0] + VAR27[0][0]);
        VAR24[0][1] = (VAR8 >> 1) * (2 * VAR26[0][1] + VAR27[0][1]);
        VAR24[1][0] = (VAR8 >> 1) * (2 * VAR26[1][0] + VAR27[0][0] + VAR27[1][0]);
        VAR24[1][1] = (VAR8 >> 1) * (2 * VAR26[1][1] + VAR27[0][1] + VAR27[1][1]);
        VAR24[2][0] = (VAR8 >> 1) * (2 * VAR26[2][0] + VAR27[0][0] + VAR27[2][0]);
        VAR24[2][1] = (VAR8 >> 1) * (2 * VAR26[2][1] + VAR27[0][1] + VAR27[2][1]);
    }
    VAR25[0][0] = 16 * (VAR26[0][0] + VAR20) + FUN5(((VAR14 - VAR20) * (VAR11 * VAR24[0][0] - 16 * VAR26[0][0]) + VAR20 * (VAR11 * VAR24[1][0] - 16 * VAR26[1][0])), VAR14);
    VAR25[0][1] = 16 * VAR26[0][1] + FUN5(((VAR14 - VAR20) * (VAR11 * VAR24[0][1] - 16 * VAR26[0][1]) + VAR20 * (VAR11 * VAR24[1][1] - 16 * VAR26[1][1])), VAR14);
    VAR25[1][0] = 16 * VAR26[0][0] + FUN5(((VAR16 - VAR21) * (VAR11 * VAR24[0][0] - 16 * VAR26[0][0]) + VAR21 * (VAR11 * VAR24[2][0] - 16 * VAR26[2][0])), VAR16);
    VAR25[1][1] = 16 * (VAR26[0][1] + VAR21) + FUN5(((VAR16 - VAR21) * (VAR11 * VAR24[0][1] - 16 * VAR26[0][1]) + VAR21 * (VAR11 * VAR24[2][1] - 16 * VAR26[2][1])), VAR16);
    switch (VAR2->VAR29)
    {
    case 0:
        VAR6->VAR39[0][0] = VAR6->VAR39[0][1] = VAR6->VAR39[1][0] = VAR6->VAR39[1][1] = 0;
        VAR6->VAR40[0][0] = VAR8;
        VAR6->VAR40[0][1] = VAR6->VAR40[1][0] = 0;
        VAR6->VAR40[1][1] = VAR8;
        VAR2->VAR41[0] = VAR2->VAR41[1] = 0;
        break;
    case 1:
        VAR6->VAR39[0][0] = VAR24[0][0] - VAR8 * VAR26[0][0];
        VAR6->VAR39[0][1] = VAR24[0][1] - VAR8 * VAR26[0][1];
        VAR6->VAR39[1][0] = ((VAR24[0][0] >> 1) | (VAR24[0][0] & 1)) - VAR8 * (VAR26[0][0] / 2);
        VAR6->VAR39[1][1] = ((VAR24[0][1] >> 1) | (VAR24[0][1] & 1)) - VAR8 * (VAR26[0][1] / 2);
        VAR6->VAR40[0][0] = VAR8;
        VAR6->VAR40[0][1] = VAR6->VAR40[1][0] = 0;
        VAR6->VAR40[1][1] = VAR8;
        VAR2->VAR41[0] = VAR2->VAR41[1] = 0;
        break;
    case 2:
        VAR6->VAR39[0][0] = (VAR24[0][0] << (VAR12 + VAR10)) + (-VAR11 * VAR24[0][0] + VAR25[0][0]) * (-VAR26[0][0]) + (VAR11 * VAR24[0][1] - VAR25[0][1]) * (-VAR26[0][1]) + (1 << (VAR12 + VAR10 - 1));
        VAR6->VAR39[0][1] = (VAR24[0][1] << (VAR12 + VAR10)) + (-VAR11 * VAR24[0][1] + VAR25[0][1]) * (-VAR26[0][0]) + (-VAR11 * VAR24[0][0] + VAR25[0][0]) * (-VAR26[0][1]) + (1 << (VAR12 + VAR10 - 1));
        VAR6->VAR39[1][0] = ((-VAR11 * VAR24[0][0] + VAR25[0][0]) * (-2 * VAR26[0][0] + 1) + (VAR11 * VAR24[0][1] - VAR25[0][1]) * (-2 * VAR26[0][1] + 1) + 2 * VAR20 * VAR11 * VAR24[0][0] - 16 * VAR20 + (1 << (VAR12 + VAR10 + 1)));
        VAR6->VAR39[1][1] = ((-VAR11 * VAR24[0][1] + VAR25[0][1]) * (-2 * VAR26[0][0] + 1) + (-VAR11 * VAR24[0][0] + VAR25[0][0]) * (-2 * VAR26[0][1] + 1) + 2 * VAR20 * VAR11 * VAR24[0][1] - 16 * VAR20 + (1 << (VAR12 + VAR10 + 1)));
        VAR6->VAR40[0][0] = (-VAR11 * VAR24[0][0] + VAR25[0][0]);
        VAR6->VAR40[0][1] = (+VAR11 * VAR24[0][1] - VAR25[0][1]);
        VAR6->VAR40[1][0] = (-VAR11 * VAR24[0][1] + VAR25[0][1]);
        VAR6->VAR40[1][1] = (-VAR11 * VAR24[0][0] + VAR25[0][0]);
        VAR2->VAR41[0] = VAR12 + VAR10;
        VAR2->VAR41[1] = VAR12 + VAR10 + 2;
        break;
    case 3:
        VAR18 = FUN6(VAR12, VAR13);
        VAR22 = VAR20 >> VAR18;
        VAR23 = VAR21 >> VAR18;
        VAR6->VAR39[0][0] = (VAR24[0][0] << (VAR12 + VAR13 + VAR10 - VAR18)) + (-VAR11 * VAR24[0][0] + VAR25[0][0]) * VAR23 * (-VAR26[0][0]) + (-VAR11 * VAR24[0][0] + VAR25[1][0]) * VAR22 * (-VAR26[0][1]) + (1 << (VAR12 + VAR13 + VAR10 - VAR18 - 1));
        VAR6->VAR39[0][1] = (VAR24[0][1] << (VAR12 + VAR13 + VAR10 - VAR18)) + (-VAR11 * VAR24[0][1] + VAR25[0][1]) * VAR23 * (-VAR26[0][0]) + (-VAR11 * VAR24[0][1] + VAR25[1][1]) * VAR22 * (-VAR26[0][1]) + (1 << (VAR12 + VAR13 + VAR10 - VAR18 - 1));
        VAR6->VAR39[1][0] = (-VAR11 * VAR24[0][0] + VAR25[0][0]) * VAR23 * (-2 * VAR26[0][0] + 1) + (-VAR11 * VAR24[0][0] + VAR25[1][0]) * VAR22 * (-2 * VAR26[0][1] + 1) + 2 * VAR20 * VAR23 * VAR11 * VAR24[0][0] - 16 * VAR20 * VAR23 + (1 << (VAR12 + VAR13 + VAR10 - VAR18 + 1));
        VAR6->VAR39[1][1] = (-VAR11 * VAR24[0][1] + VAR25[0][1]) * VAR23 * (-2 * VAR26[0][0] + 1) + (-VAR11 * VAR24[0][1] + VAR25[1][1]) * VAR22 * (-2 * VAR26[0][1] + 1) + 2 * VAR20 * VAR23 * VAR11 * VAR24[0][1] - 16 * VAR20 * VAR23 + (1 << (VAR12 + VAR13 + VAR10 - VAR18 + 1));
        VAR6->VAR40[0][0] = (-VAR11 * VAR24[0][0] + VAR25[0][0]) * VAR23;
        VAR6->VAR40[0][1] = (-VAR11 * VAR24[0][0] + VAR25[1][0]) * VAR22;
        VAR6->VAR40[1][0] = (-VAR11 * VAR24[0][1] + VAR25[0][1]) * VAR23;
        VAR6->VAR40[1][1] = (-VAR11 * VAR24[0][1] + VAR25[1][1]) * VAR22;
        VAR2->VAR41[0] = VAR12 + VAR13 + VAR10 - VAR18;
        VAR2->VAR41[1] = VAR12 + VAR13 + VAR10 - VAR18 + 2;
        break;
    }
    if (VAR6->VAR40[0][0] == VAR8 << VAR2->VAR41[0] && VAR6->VAR40[0][1] == 0 && VAR6->VAR40[1][0] == 0 && VAR6->VAR40[1][1] == VAR8 << VAR2->VAR41[0])
    {
        VAR6->VAR39[0][0] >>= VAR2->VAR41[0];
        VAR6->VAR39[0][1] >>= VAR2->VAR41[0];
        VAR6->VAR39[1][0] >>= VAR2->VAR41[1];
        VAR6->VAR39[1][1] >>= VAR2->VAR41[1];
        VAR6->VAR40[0][0] = VAR8;
        VAR6->VAR40[0][1] = 0;
        VAR6->VAR40[1][0] = 0;
        VAR6->VAR40[1][1] = VAR8;
        VAR2->VAR41[0] = 0;
        VAR2->VAR41[1] = 0;
        VAR6->VAR42 = 1;
    }
    else
    {
        int VAR43 = 16 - VAR2->VAR41[0];
        int VAR44 = 16 - VAR2->VAR41[1];
        for (VAR19 = 0; VAR19 < 2; VAR19++)
        {
            VAR6->VAR39[0][VAR19] <<= VAR43;
            VAR6->VAR39[1][VAR19] <<= VAR44;
            VAR6->VAR40[0][VAR19] <<= VAR43;
            VAR6->VAR40[1][VAR19] <<= VAR43;
            VAR2->VAR41[VAR19] = 16;
        }
        VAR6->VAR42 = VAR2->VAR29;
    }
    return 0;
}