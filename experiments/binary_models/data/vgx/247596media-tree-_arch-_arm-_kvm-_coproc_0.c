int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct coproc_params VAR5;

VAR5.VAR6 = (FUN2(VAR2) >> 1) & 0xf;
VAR5.VAR7 = (FUN2(VAR2) >> 5) & 0xf;
VAR5.VAR8 = ((FUN2(VAR2) & 1) == 0);
VAR5.VAR9 = true;

VAR5.VAR10 = (FUN2(VAR2) >> 16) & 0xf;
VAR5.VAR11 = 0;
VAR5.VAR12 = (FUN2(VAR2) >> 10) & 0xf;
VAR5.VAR13 = 0;

return FUN3(VAR2, &VAR5);
}