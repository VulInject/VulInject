static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
    int64_t VAR5;
    int64_t VAR6;
    int64_t VAR7;
    int64_t VAR8;
    VAR5 = FUN2(VAR9);
    VAR6 = VAR5 - VAR4->VAR10;
    VAR7 = FUN3(VAR6, VAR2->VAR11, FUN4());
    VAR8 = (VAR7 - VAR4->VAR12) >> VAR2->VAR13;
    if (VAR8 < 0 || VAR8 > 65536)
    {
        fprintf(VAR14, "" VAR15 "", VAR8);
        FUN5(VAR4);
        VAR8 = 0;
    }
    VAR4->VAR12 += VAR8 << VAR2->VAR13;
    return VAR8;
}