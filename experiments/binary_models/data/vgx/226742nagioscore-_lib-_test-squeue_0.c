static void FUN1(VAR1 *VAR2, int (*VAR3)(VAR4 *, void *), void *VAR5)
{
VAR1 *VAR6;
void *VAR7, *VAR8;

VAR6 = FUN2(VAR2->VAR9);
VAR8 = VAR6->VAR10;
memcpy(VAR6, VAR2, sizeof(*VAR2));
VAR6->VAR10 = VAR8;
memcpy(VAR6->VAR10, VAR2->VAR10, (VAR2->VAR9 * sizeof(void *)));

while ((VAR7 = FUN3(VAR6))) {
FUN4(VAR7, VAR5);
}
FUN5(VAR6, 0);
}