struct VAR1 *FUN1(const char *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR4->VAR7->VAR8, VAR2);
struct VAR9 *VAR10;

if (VAR6) {

FUN3(VAR6);
VAR10 = FUN4(VAR6);
return VAR10->VAR11;
}
return NULL;
}