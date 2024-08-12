static void
FUN1(
VAR1 *VAR2,
VAR3 *VAR4,
uint32_t VAR5)
{
VAR6 *VAR7 = &VAR2->VAR7;
hrtime_t VAR8;
uint8_t VAR9[20];
SHA1_CTX VAR10;

VAR8 = FUN2();

FUN3(&VAR10, sizeof (VAR11));
FUN4(&VAR10);
FUN5(&VAR10, (void *) &VAR7->VAR12.VAR13,
sizeof (VAR14));
FUN5(&VAR10, (void *) &VAR8, sizeof (VAR15));
FUN6((void *) VAR9, &VAR10);
bcopy((void *) &VAR9[0], (void *) &VAR4[0], VAR5);

return;

}