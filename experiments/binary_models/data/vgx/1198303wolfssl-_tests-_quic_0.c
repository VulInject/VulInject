static int FUN1(VAR1 *VAR2, WOLFSSL_ENCRYPTION_LEVEL VAR3,
const VAR4 *VAR5, size_t VAR6, int VAR7)
{
int VAR8;

VAR8 = (FUN2(VAR2, VAR3, VAR5, VAR6) == VAR9);
if (!!VAR8 != !VAR7) {
FUN3(VAR2, VAR10);
return 0;
}
return 1;
}