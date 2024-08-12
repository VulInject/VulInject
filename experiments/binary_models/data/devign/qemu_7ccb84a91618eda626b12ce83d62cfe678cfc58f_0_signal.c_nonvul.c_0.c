static inline int FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    int VAR5;
    VAR6 *VAR7 = VAR4->VAR8.VAR7;
    FUN2(VAR5, &VAR4->VAR8.VAR9);
    if (VAR5 != VAR10)
        goto VAR11;
    FUN2(VAR2->VAR12[0], &VAR7[0]);
    FUN2(VAR2->VAR12[1], &VAR7[1]);
    FUN2(VAR2->VAR12[2], &VAR7[2]);
    FUN2(VAR2->VAR12[3], &VAR7[3]);
    FUN2(VAR2->VAR12[4], &VAR7[4]);
    FUN2(VAR2->VAR12[5], &VAR7[5]);
    FUN2(VAR2->VAR12[6], &VAR7[6]);
    FUN2(VAR2->VAR12[7], &VAR7[7]);
    FUN2(VAR2->VAR13[0], &VAR7[8]);
    FUN2(VAR2->VAR13[1], &VAR7[9]);
    FUN2(VAR2->VAR13[2], &VAR7[10]);
    FUN2(VAR2->VAR13[3], &VAR7[11]);
    FUN2(VAR2->VAR13[4], &VAR7[12]);
    FUN2(VAR2->VAR13[5], &VAR7[13]);
    FUN2(VAR2->VAR13[6], &VAR7[14]);
    FUN2(VAR2->VAR13[7], &VAR7[15]);
    FUN2(VAR2->VAR14, &VAR7[16]);
    FUN2(VAR5, &VAR7[17]);
    VAR2->VAR15 = (VAR2->VAR15 & 0xff00) | (VAR5 & 0xff);
    return 0;
VAR11:
    return 1;
}