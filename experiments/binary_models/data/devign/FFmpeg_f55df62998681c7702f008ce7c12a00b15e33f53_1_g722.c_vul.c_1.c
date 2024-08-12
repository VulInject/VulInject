static void FUN1(struct VAR1 *VAR2, const int VAR3)
{
    int VAR4[2], VAR5, VAR6;
    const int VAR7 = VAR2->VAR8 + VAR3 < 0;
    VAR4[0] = VAR9[VAR7 != VAR2->VAR10[0]];
    VAR4[1] = VAR9[VAR7 == VAR2->VAR10[1]];
    VAR2->VAR10[1] = VAR2->VAR10[0];
    VAR2->VAR10[0] = VAR7;
    VAR2->VAR11[1] = FUN2((VAR4[0] * FUN2(VAR2->VAR11[0], -8191, 8191) >> 5) + (VAR4[1] << 7) + (VAR2->VAR11[1] * 127 >> 7), -12288, 12288);
    VAR5 = 15360 - VAR2->VAR11[1];
    VAR2->VAR11[0] = FUN2(-192 * VAR4[0] + (VAR2->VAR11[0] * 255 >> 8), -VAR5, VAR5);
    FUN3(VAR3, VAR2);
    VAR6 = FUN4((VAR2->VAR12 + VAR3) << 1);
    VAR2->VAR12 = FUN4(VAR2->VAR8 + (VAR2->VAR11[0] * VAR6 >> 15) + (VAR2->VAR11[1] * VAR2->VAR13 >> 15));
    VAR2->VAR13 = VAR6;
}