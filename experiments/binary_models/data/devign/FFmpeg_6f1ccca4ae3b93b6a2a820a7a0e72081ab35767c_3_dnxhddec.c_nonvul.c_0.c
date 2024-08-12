static int FUN1(const VAR1 *VAR2, VAR3 *VAR4, int VAR5);
static int FUN2(const VAR1 *VAR2, VAR3 *VAR4, int VAR5);
static int FUN3(const VAR1 *VAR2, VAR3 *VAR4, int VAR5);
static int FUN4(const VAR1 *VAR2, VAR3 *VAR4, int VAR5);
static int FUN5(const VAR1 *VAR2, VAR3 *VAR4, int VAR5);
static av_cold int FUN6(VAR6 *VAR7)
{
    VAR1 *VAR2 = VAR7->VAR8;
    VAR2->VAR7 = VAR7;
    VAR2->VAR9 = -1;
    VAR7->VAR10 = VAR11;
    VAR7->VAR12 = FUN7(VAR7->VAR13, 16);
    VAR7->VAR14 = FUN7(VAR7->VAR15, 16);
    VAR2->VAR16 = FUN8(VAR7->VAR17, sizeof(VAR3));
    if (!VAR2->VAR16)
        return FUN9(VAR18);
    return 0;
}