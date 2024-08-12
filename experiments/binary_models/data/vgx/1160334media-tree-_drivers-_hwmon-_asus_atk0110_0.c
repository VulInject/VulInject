static int FUN1(char *VAR1, size_t VAR2, union VAR3 *VAR4)
{
int VAR5 = 0;

switch (VAR4->VAR6) {
case VAR7:
VAR5 = snprintf(VAR1, VAR2, "", VAR4->VAR8.VAR9);
break;
case VAR10:
VAR5 = snprintf(VAR1, VAR2, "", VAR4->VAR11.VAR12);
break;
}

return VAR5;
}