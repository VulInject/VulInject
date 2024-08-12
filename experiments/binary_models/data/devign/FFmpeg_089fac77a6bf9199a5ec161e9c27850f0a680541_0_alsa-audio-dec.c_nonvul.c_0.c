static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR10[0];
    int VAR11;
    snd_htimestamp_t VAR12;
    snd_pcm_uframes_t VAR13;
    if (FUN2(VAR4, VAR6->VAR14) < 0)
    {
        return FUN3(VAR15);
    }
    while ((VAR11 = FUN4(VAR6->VAR16, VAR4->VAR17, VAR4->VAR18 / VAR6->VAR19)) < 0)
    {
        if (VAR11 == -VAR20)
        {
            FUN5(VAR4);
            return FUN3(VAR20);
        }
        if (FUN6(VAR2, VAR11) < 0)
        {
            FUN7(VAR2, VAR21, "", FUN8(VAR11));
            FUN5(VAR4);
            return FUN3(VAR15);
        }
    }
    FUN9(VAR6->VAR16, &VAR13, &VAR12);
    VAR13 += VAR11;
    VAR4->VAR22 = VAR12.VAR23 * 1000000LL + (VAR12.VAR24 * VAR9->VAR25->VAR26 - (VAR27)VAR13 * 1000000000LL + VAR9->VAR25->VAR26 * 500LL) / (VAR9->VAR25->VAR26 * 1000LL);
    VAR4->VAR18 = VAR11 * VAR6->VAR19;
    return 0;
}