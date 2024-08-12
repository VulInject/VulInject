static int FUN1(void *VAR1, char *VAR2, char *VAR3,
char *VAR4, char *VAR5,
char *VAR6, char *VAR7, char *VAR8,
char *VAR9,
char *VAR10)
{
struct VAR11 *VAR12 = VAR1;
VAR13 *VAR14 = VAR12->VAR14;
char *VAR15 = VAR12->VAR15;


fprintf(VAR14, "");

fprintf(VAR14, ""%VAR16\"", VAR2);
fprintf(VAR14, ""%VAR16\"", VAR3);
fprintf(VAR14, ""%VAR16\"", VAR4);
fprintf(VAR14, ""%VAR16\"", VAR15);
if (VAR5 && VAR5[0])
fprintf(VAR14, ""%VAR16\"", VAR5);
if (VAR6)
fprintf(VAR14, ""%VAR16\"", VAR6);
if (VAR7)
fprintf(VAR14, ""%VAR16\"", VAR7);
if (VAR8)
fprintf(VAR14, ""%VAR16\"", VAR8);
if (VAR9)
fprintf(VAR14, ""%VAR16\"", VAR9);
if (VAR10)
fprintf(VAR14, ""%VAR16\"", VAR10);
fprintf(VAR14, "");

return 0;
}