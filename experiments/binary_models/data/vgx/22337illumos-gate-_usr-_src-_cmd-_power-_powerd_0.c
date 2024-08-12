static int
FUN1(int VAR1, prom_node_t VAR2,
char *VAR3, char *VAR4, size_t VAR5)
{
union {
char VAR6[VAR7 + sizeof (VAR8)];
struct openpromio VAR9;
} VAR10;
register struct VAR11 *VAR9 = &(VAR10.VAR9);
int	VAR12 = 0;

if (VAR1 == -1) {
return (0);
}

switch (VAR2) {
case VAR13:
(void) memset(VAR10.VAR6, 0, VAR7);
VAR9->VAR14 = VAR7;
if (FUN2(VAR1, VAR15, VAR9) < 0) {
return (0);
}


(void) memset(VAR10.VAR6, 0, VAR7);
do {
VAR9->VAR14 = VAR7;
if (FUN2(VAR1, VAR16, VAR9) < 0) {
return (0);
}
if (strcmp(VAR9->VAR17, VAR3) == 0) {
VAR12++;
break;
}
} while (VAR9->VAR14 > 0);

if (!VAR12) {
return (0);
}
if (VAR12 && VAR4 == NULL) {
return (1);
}
VAR9->VAR14 = VAR7;
if (FUN2(VAR1, VAR18, VAR9) < 0) {
return (0);
}
if (VAR9->VAR14 == 0) {
*VAR4 = '';
} else {
FUN3(VAR4, VAR9->VAR17, VAR5);
}
break;
case VAR19:
FUN3(VAR9->VAR17, VAR3, VAR7);
VAR9->VAR14 = VAR7;
if (FUN2(VAR1, VAR20, VAR9) < 0) {
return (0);
}
if (VAR9->VAR14 == 0) {
return (0);
}
if (VAR4 != NULL) {
FUN3(VAR4, VAR9->VAR17, VAR5);
}
break;
default:
FUN4("");
return (0);
}

return (1);
}