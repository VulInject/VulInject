static int FUN1(struct VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    union xenkbd_in_event VAR6;
    memset(&VAR6, 0, VAR7);
    VAR6.VAR8 = VAR9;
    VAR6.VAR10.VAR3 = VAR3;
    VAR6.VAR10.VAR4 = VAR4;
    VAR6.VAR10.VAR11 = VAR5;
    return FUN2(VAR2, &VAR6);
}