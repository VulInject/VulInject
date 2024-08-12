static VAR1 FUN1(struct VAR2 *VAR2,
struct VAR3 *VAR4, char *VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);

if ((!VAR7->VAR8) || (!FUN3(VAR7))) {
FUN4(VAR2,
"", VAR9);
return 0;  
}
return sprintf(VAR5, "", FUN5(VAR7));
}