static int FUN1(struct subchannel_id VAR1, int VAR2, void *VAR3, int VAR4)
{
    struct ccw1 VAR5 = {};
    struct cmd_orb VAR6 = {};
    struct schib VAR7;
    int VAR8;
    FUN2(VAR1, &VAR7);
    VAR7.VAR9.VAR10 = VAR11;
    FUN3(VAR1, &VAR7);
    VAR6.VAR12 = 1;
    VAR6.VAR13 = (VAR14)(long)&VAR5;
    VAR6.VAR15 = 0x80;
    VAR5.VAR16 = VAR2;
    VAR5.VAR17 = (long)VAR3;
    VAR5.VAR18 = VAR4;
    VAR8 = FUN4(VAR1, &VAR6);
    if (!VAR8)
    {
        VAR8 = FUN5(VAR1);
    }
    return VAR8;
}