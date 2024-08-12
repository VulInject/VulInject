static int
FUN1(int VAR1, struct VAR2 *VAR3, u_int VAR4, int VAR5, void *VAR6)
{
EFI_STATUS VAR7;

VAR7 = FUN2(VAR1, &VAR3->VAR8, VAR4, VAR5, VAR6);

return ((FUN3(VAR7))? -1 : 0);
}