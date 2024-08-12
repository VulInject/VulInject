static int FUN1(VAR1 *VAR2, int VAR3)
{
    unsigned int VAR4 = FUN2(VAR2, 1, FUN3(VAR2));
    return (VAR4 << VAR3) | FUN4(VAR2, VAR3);
}