int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6);
extern const uint8_t VAR7[256];
void FUN2(VAR8 *VAR9, const VAR10 *VAR11, int VAR12);
static av_always_inline unsigned int FUN3(VAR8 *VAR9)
{
    int VAR13 = VAR7[VAR9->VAR14];
    int VAR15 = VAR9->VAR15;
    unsigned int VAR16 = VAR9->VAR16;
    VAR9->VAR14 <<= VAR13;
    VAR16 <<= VAR13;
    VAR15 += VAR13;
    if (VAR15 >= 0 && VAR9->VAR17 < VAR9->VAR18)
    {
        VAR16 |= FUN4(&VAR9->VAR17) << VAR15;
        VAR15 -= 16;
    }
    VAR9->VAR15 = VAR15;
    return VAR16;
}