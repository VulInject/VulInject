static struct VAR1 *FUN1(pid_t VAR2, const struct VAR3 *VAR4,
void **VAR5, VAR6 *VAR7)
{
struct VAR1 *VAR8;
void *VAR9;
size_t VAR10 = sizeof *VAR8;
struct iovec VAR11;

while (1) {
if (*VAR7 < VAR10) {
VAR9 = realloc(*VAR5, VAR10);
if (!VAR9) {
VAR12 = VAR13;
goto VAR14;
}

*VAR5 = VAR9;
*VAR7 = VAR10;
}

VAR11.VAR15 = *VAR5;
VAR11.VAR16 = VAR10;
if (FUN2(VAR17, VAR2, VAR4->VAR18, &VAR11))
goto VAR14;

VAR8 = *VAR5;
if (VAR8->VAR7 <= VAR10)
break;

VAR10 = VAR8->VAR7;
}

return VAR8;

VAR14:
return NULL;
}