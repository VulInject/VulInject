static int FUN1 (const char *VAR1, struct VAR2 *VAR3, char *VAR4,
size_t VAR5, struct VAR2 **VAR6)
{
VAR7;
int VAR8;

VAR9;

while (1) {
VAR8 = FUN2(VAR1, VAR3, VAR4, VAR5, VAR6);
if (VAR8 == VAR10)
continue;
if (VAR8 != 0)
*VAR6 = NULL;
break;
}

FUN3(VAR11);

return (VAR8);
}