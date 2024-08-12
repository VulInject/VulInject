static inline VAR1 FUN1(VAR2 *VAR3, int16_t VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    Float11 VAR16;
    VAR5 = FUN2(VAR3, VAR4);
    if (VAR4 >> (VAR3->VAR17->VAR18 - 1))
        VAR5 = -VAR5;
    VAR6 = VAR3->VAR19 + VAR5;
    VAR11 = (VAR3->VAR20 >> 15);
    VAR12 = (VAR3->VAR20 >> 10) & 0x1f;
    VAR13 = (VAR11 > 9) ? 0x1f << 10 : (0x20 + VAR12) << VAR11;
    if (VAR3->VAR21 == 1 && FUN3(VAR5) > ((VAR13 + (VAR13 >> 1)) >> 1))
        VAR10 = 1;
    else
        VAR10 = 0;
    VAR7 = (VAR3->VAR22 + VAR5) ? FUN4(VAR3->VAR22 + VAR5) : 0;
    VAR15 = VAR5 ? FUN4(VAR5) : 0;
    if (VAR10)
    {
        VAR3->VAR23[0] = 0;
        VAR3->VAR23[1] = 0;
        for (VAR9 = 0; VAR9 < 6; VAR9++)
            VAR3->VAR24[VAR9] = 0;
    }
    else
    {
        VAR8 = FUN5((-VAR3->VAR23[0] * VAR3->VAR25[0] * VAR7) >> 5, -256, 255);
        VAR3->VAR23[1] += 128 * VAR7 * VAR3->VAR25[1] + VAR8 - (VAR3->VAR23[1] >> 7);
        VAR3->VAR23[1] = FUN5(VAR3->VAR23[1], -12288, 12288);
        VAR3->VAR23[0] += 64 * 3 * VAR7 * VAR3->VAR25[0] - (VAR3->VAR23[0] >> 8);
        VAR3->VAR23[0] = FUN5(VAR3->VAR23[0], -(15360 - VAR3->VAR23[1]), 15360 - VAR3->VAR23[1]);
        for (VAR9 = 0; VAR9 < 6; VAR9++)
            VAR3->VAR24[VAR9] += 128 * VAR15 * FUN4(-VAR3->VAR5[VAR9].VAR26) - (VAR3->VAR24[VAR9] >> 8);
    }
    VAR3->VAR25[1] = VAR3->VAR25[0];
    VAR3->VAR25[0] = VAR7 ? VAR7 : 1;
    VAR3->VAR27[1] = VAR3->VAR27[0];
    FUN6(VAR6, &VAR3->VAR27[0]);
    for (VAR9 = 5; VAR9 > 0; VAR9--)
        VAR3->VAR5[VAR9] = VAR3->VAR5[VAR9 - 1];
    FUN6(VAR5, &VAR3->VAR5[0]);
    VAR3->VAR5[0].VAR26 = VAR4 >> (VAR3->VAR17->VAR18 - 1);
    VAR3->VAR21 = (VAR10 == 0 && VAR3->VAR23[1] < -11776);
    VAR3->VAR28 += ((VAR3->VAR17->VAR29[VAR4] << 9) - VAR3->VAR28) >> 5;
    VAR3->VAR30 += ((VAR3->VAR17->VAR29[VAR4] << 11) - VAR3->VAR30) >> 7;
    if (VAR10)
        VAR3->VAR31 = 256;
    else if (VAR3->VAR32 > 1535 && !VAR3->VAR21 && (FUN3((VAR3->VAR28 << 2) - VAR3->VAR30) < (VAR3->VAR30 >> 3)))
        VAR3->VAR31 += (-VAR3->VAR31) >> 4;
    else
        VAR3->VAR31 += (0x200 - VAR3->VAR31) >> 4;
    VAR3->VAR33 = FUN5(VAR3->VAR32 + (((VAR3->VAR17->VAR34[VAR4] << 5) - VAR3->VAR32) >> 5), 544, 5120);
    VAR3->VAR20 += VAR3->VAR33 + ((-VAR3->VAR20) >> 6);
    VAR14 = (VAR3->VAR31 >= 256) ? 1 << 6 : VAR3->VAR31 >> 2;
    VAR3->VAR32 = (VAR3->VAR20 + (VAR3->VAR33 - (VAR3->VAR20 >> 6)) * VAR14) >> 6;
    VAR3->VAR19 = 0;
    for (VAR9 = 0; VAR9 < 6; VAR9++)
        VAR3->VAR19 += FUN7(FUN6(VAR3->VAR24[VAR9] >> 2, &VAR16), &VAR3->VAR5[VAR9]);
    VAR3->VAR22 = VAR3->VAR19 >> 1;
    for (VAR9 = 0; VAR9 < 2; VAR9++)
        VAR3->VAR19 += FUN7(FUN6(VAR3->VAR23[VAR9] >> 2, &VAR16), &VAR3->VAR27[VAR9]);
    VAR3->VAR19 >>= 1;
    return FUN5(VAR6 << 2, -0xffff, 0xffff);
}