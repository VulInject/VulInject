static const char *
FUN1(const VAR1 *VAR2)
{
const VAR3 *VAR4 = VAR2->VAR5->VAR6->VAR7; 
char *VAR8 = NULL;
const char *VAR9 = VAR2->VAR10;
enum action_tasks VAR11 = VAR12;

if (FUN2(VAR2->VAR10, VAR13,
VAR14, NULL)) {

FUN3(FUN4(VAR2->VAR15, NULL, &VAR8, NULL),
return FUN5(VAR12));
VAR9 = strstr(VAR8, "");
FUN3(VAR9 != NULL, return FUN5(VAR12));
VAR9 += strlen("");
}
VAR11 = FUN6(VAR4, VAR9);
free(VAR8);
return FUN5(VAR11);
}