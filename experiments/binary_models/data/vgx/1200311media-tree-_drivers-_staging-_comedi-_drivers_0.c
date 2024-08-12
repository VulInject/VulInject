unsigned int FUN1(struct VAR1 *VAR2,
unsigned int VAR3)
{
if (VAR3 == 0) {
unsigned int VAR4 = FUN2(VAR2);

VAR3 = VAR4 / FUN3(VAR2);
}
return FUN4(VAR2, VAR3);
}