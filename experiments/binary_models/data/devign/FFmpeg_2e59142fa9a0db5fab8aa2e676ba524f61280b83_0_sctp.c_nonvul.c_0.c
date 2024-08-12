static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9;
    if (!(VAR2->VAR10 & VAR11))
    {
        VAR9 = FUN2(VAR7->VAR12, 1);
        if (VAR9 < 0)
            return VAR9;
    }
    if (VAR7->VAR13)
    {
        struct sctp_sndrcvinfo VAR14 = {0};
        VAR14.VAR15 = FUN3(VAR4);
        if (VAR14.VAR15 > VAR7->VAR13)
        {
            FUN4(VAR2, VAR16, "");
            return FUN5(VAR17);
        }
        VAR9 = FUN6(VAR7->VAR12, VAR4 + 2, VAR5 - 2, &VAR14, VAR18);
    }
    else
        VAR9 = send(VAR7->VAR12, VAR4, VAR5, 0);
    return VAR9 < 0 ? FUN7() : VAR9;
}