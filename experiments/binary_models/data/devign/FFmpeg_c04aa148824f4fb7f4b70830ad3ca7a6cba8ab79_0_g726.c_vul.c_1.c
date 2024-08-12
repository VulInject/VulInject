static VAR1 FUN1(VAR2 *VAR3, int VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    Float11 VAR16;
    int VAR17 = VAR4 >> (VAR3->VAR18 - 1);
    VAR5 = FUN2(VAR3, VAR4);
    VAR11 = (VAR3->VAR19 >> 15);
    VAR12 = (VAR3->VAR19 >> 10) & 0x1f;
    VAR13 = (VAR11 > 9) ? 0x1f << 10 : (0x20 + VAR12) << VAR11;
    VAR10 = (VAR3->VAR20 == 1 && VAR5 > ((3 * VAR13) >> 2));
    if (VAR17)
        VAR5 = -VAR5;
    VAR6 = (VAR1)(VAR3->VAR21 + VAR5);
    VAR7 = (VAR3->VAR22 + VAR5) ? FUN3(VAR3->VAR22 + VAR5) : 0;
    VAR15 = VAR5 ? FUN3(VAR5) : 0;
    if (VAR10)
    {
        VAR3->VAR23[0] = 0;
        VAR3->VAR23[1] = 0;
        for (VAR9 = 0; VAR9 < 6; VAR9++)
            VAR3->VAR24[VAR9] = 0;
    }
    else
    {
        VAR8 = FUN4((-VAR3->VAR23[0] * VAR3->VAR25[0] * VAR7) >> 5, 8);
        VAR3->VAR23[1] += 128 * VAR7 * VAR3->VAR25[1] + VAR8 - (VAR3->VAR23[1] >> 7);
        VAR3->VAR23[1] = FUN5(VAR3->VAR23[1], -12288, 12288);
        VAR3->VAR23[0] += 64 * 3 * VAR7 * VAR3->VAR25[0] - (VAR3->VAR23[0] >> 8);
        VAR3->VAR23[0] = FUN5(VAR3->VAR23[0], -(15360 - VAR3->VAR23[1]), 15360 - VAR3->VAR23[1]);
        for (VAR9 = 0; VAR9 < 6; VAR9++)
            VAR3->VAR24[VAR9] += 128 * VAR15 * FUN3(-VAR3->VAR5[VAR9].VAR26) - (VAR3->VAR24[VAR9] >> 8);
    }
    VAR3->VAR25[1] = VAR3->VAR25[0];
    VAR3->VAR25[0] = VAR7 ? VAR7 : 1;
    VAR3->VAR27[1] = VAR3->VAR27[0];
    FUN6(VAR6, &VAR3->VAR27[0]);
    for (VAR9 = 5; VAR9 > 0; VAR9--)
        VAR3->VAR5[VAR9] = VAR3->VAR5[VAR9 - 1];
    FUN6(VAR5, &VAR3->VAR5[0]);
    VAR3->VAR5[0].VAR26 = VAR17;
    VAR3->VAR20 = VAR3->VAR23[1] < -11776;
    VAR3->VAR28 += (VAR3->VAR29.VAR30[VAR4] << 4) + ((-VAR3->VAR28) >> 5);
    VAR3->VAR31 += (VAR3->VAR29.VAR30[VAR4] << 4) + ((-VAR3->VAR31) >> 7);
    if (VAR10)
        VAR3->VAR32 = 256;
    else
    {
        VAR3->VAR32 += (-VAR3->VAR32) >> 4;
        if (VAR3->VAR33 <= 1535 || VAR3->VAR20 || FUN7((VAR3->VAR28 << 2) - VAR3->VAR31) >= (VAR3->VAR31 >> 3))
            VAR3->VAR32 += 0x20;
    }
    VAR3->VAR34 = FUN5(VAR3->VAR33 + VAR3->VAR29.VAR35[VAR4] + ((-VAR3->VAR33) >> 5), 544, 5120);
    VAR3->VAR19 += VAR3->VAR34 + ((-VAR3->VAR19) >> 6);
    VAR14 = (VAR3->VAR32 >= 256) ? 1 << 6 : VAR3->VAR32 >> 2;
    VAR3->VAR33 = (VAR3->VAR19 + (VAR3->VAR34 - (VAR3->VAR19 >> 6)) * VAR14) >> 6;
    VAR3->VAR21 = 0;
    for (VAR9 = 0; VAR9 < 6; VAR9++)
        VAR3->VAR21 += FUN8(FUN6(VAR3->VAR24[VAR9] >> 2, &VAR16), &VAR3->VAR5[VAR9]);
    VAR3->VAR22 = VAR3->VAR21 >> 1;
    for (VAR9 = 0; VAR9 < 2; VAR9++)
        VAR3->VAR21 += FUN8(FUN6(VAR3->VAR23[VAR9] >> 2, &VAR16), &VAR3->VAR27[VAR9]);
    VAR3->VAR21 >>= 1;
    return FUN5(VAR6 << 2, -0xffff, 0xffff);
}