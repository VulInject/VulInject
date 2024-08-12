int FUN1(void *VAR1, size_t VAR2,
unsigned char VAR3,
const void *VAR4, size_t VAR5)
{
struct VAR6 *VAR7 = VAR1;

VAR7->VAR8 = FUN2(VAR4, VAR5);
if (VAR7->VAR8 == VAR9) {
char VAR10[50];

FUN3(VAR4, VAR5, VAR10, sizeof(VAR10));
FUN4("",
(unsigned long)VAR4 - VAR7->VAR11, VAR10);
}
return 0;
}