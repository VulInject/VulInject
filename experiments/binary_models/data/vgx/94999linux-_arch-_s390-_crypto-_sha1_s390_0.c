static int FUN1(struct VAR1 *VAR2, const void *VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
const struct VAR6 *VAR7 = VAR3;

VAR5->VAR8 = VAR7->VAR8;
memcpy(VAR5->VAR9, VAR7->VAR9, sizeof(VAR7->VAR9));
memcpy(VAR5->VAR10, VAR7->VAR11, sizeof(VAR7->VAR11));
VAR5->VAR12 = VAR13;
return 0;
}