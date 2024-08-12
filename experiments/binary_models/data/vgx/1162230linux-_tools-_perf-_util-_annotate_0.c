int FUN1(const struct VAR1 *VAR2, const char *VAR3,
int unset VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7;
unsigned int VAR8;
char *VAR9, *VAR10;
int VAR11 = -1;

VAR9 = strdup(VAR3);
if (!VAR9)
return -VAR12;

VAR10 = strchr(VAR9, '');
if (!VAR10)
goto VAR13;

*VAR10++ = 0;

VAR8 = FUN2(VAR9, VAR10);
if (VAR8 == (unsigned int) -1)
VAR8 = FUN2(VAR10, VAR9);
if (VAR8 != (unsigned int) -1) {
VAR6->VAR14 = VAR8;
VAR11 = 0;
}

VAR13:
free(VAR9);
return VAR11;
}