static inline struct VAR1 FUN1(const VAR2 *VAR3, const struct VAR1 *VAR4)
{
    const struct rgbvec VAR5 = {VAR4->VAR6 - FUN2(VAR4->VAR6), VAR4->VAR7 - FUN2(VAR4->VAR7), VAR4->VAR8 - FUN2(VAR4->VAR8)};
    const struct rgbvec VAR9 = VAR3->VAR10[FUN2(VAR4->VAR6)][FUN2(VAR4->VAR7)][FUN2(VAR4->VAR8)];
    const struct rgbvec VAR11 = VAR3->VAR10[FUN2(VAR4->VAR6)][FUN2(VAR4->VAR7)][FUN3(VAR4->VAR8)];
    const struct rgbvec VAR12 = VAR3->VAR10[FUN2(VAR4->VAR6)][FUN3(VAR4->VAR7)][FUN2(VAR4->VAR8)];
    const struct rgbvec VAR13 = VAR3->VAR10[FUN2(VAR4->VAR6)][FUN3(VAR4->VAR7)][FUN3(VAR4->VAR8)];
    const struct rgbvec VAR14 = VAR3->VAR10[FUN3(VAR4->VAR6)][FUN2(VAR4->VAR7)][FUN2(VAR4->VAR8)];
    const struct rgbvec VAR15 = VAR3->VAR10[FUN3(VAR4->VAR6)][FUN2(VAR4->VAR7)][FUN3(VAR4->VAR8)];
    const struct rgbvec VAR16 = VAR3->VAR10[FUN3(VAR4->VAR6)][FUN3(VAR4->VAR7)][FUN2(VAR4->VAR8)];
    const struct rgbvec VAR17 = VAR3->VAR10[FUN3(VAR4->VAR6)][FUN3(VAR4->VAR7)][FUN3(VAR4->VAR8)];
    const struct rgbvec VAR18 = FUN4(&VAR9, &VAR14, VAR5.VAR6);
    const struct rgbvec VAR19 = FUN4(&VAR12, &VAR16, VAR5.VAR6);
    const struct rgbvec VAR20 = FUN4(&VAR11, &VAR15, VAR5.VAR6);
    const struct rgbvec VAR21 = FUN4(&VAR13, &VAR17, VAR5.VAR6);
    const struct rgbvec VAR22 = FUN4(&VAR18, &VAR19, VAR5.VAR7);
    const struct rgbvec VAR23 = FUN4(&VAR20, &VAR21, VAR5.VAR7);
    const struct rgbvec VAR24 = FUN4(&VAR22, &VAR23, VAR5.VAR8);
    return VAR24;
}