static int
FUN1(cache_op_t VAR1, cache_type_t VAR2,
char *VAR3, char **VAR4)
{
static VAR5	*VAR6[VAR7];
VAR5		*VAR8, *VAR9, *VAR10;
unsigned long		VAR11;
static rwlock_t		VAR12 = VAR13;
int			VAR14;
static int		VAR15 = 0;

if (VAR16.VAR17 >= VAR18) {
FUN2("");
}
switch (VAR1) {
case VAR19:
if (VAR16.VAR17 >= VAR18) {
FUN2("");
}
(void) FUN3(&VAR12);

for (VAR14 = 0; VAR14 < VAR7; VAR14++) {
VAR6[VAR14] = NULL;
}
VAR15 = 0;

(void) FUN4(&VAR12);
break;

case VAR20:
if (VAR16.VAR17 >= VAR18) {
FUN2("");
}
(void) FUN3(&VAR12);

for (VAR14 = 0; VAR14 < VAR7; VAR14++) {
VAR8 = VAR6[VAR14];
while (VAR8 != NULL) {
VAR8 = FUN5(VAR8);
}
VAR6[VAR14] = NULL;
}
VAR15 = 0;

(void) FUN4(&VAR12);
break;

case VAR21:
if (VAR16.VAR17 >= VAR18) {
FUN2("");
}
if (VAR3 == NULL || VAR4 == NULL || *VAR4 == NULL)
return (-1);
VAR11 = FUN6(VAR3) % VAR7;
(void) FUN3(&VAR12);
VAR9 = VAR6[VAR11];

if (VAR9) {
VAR10 = FUN7(VAR2, VAR3, VAR9);
if (VAR10) {
free(VAR10->VAR4);
VAR10->VAR4 = strdup(*VAR4);
(void) FUN4(&VAR12);
return (VAR22);
}
}

if (VAR15 > VAR23) {
(void) FUN4(&VAR12);
return (-1);
}

VAR10 = (VAR5 *)malloc(sizeof (VAR5));
if (VAR10 == NULL) {
(void) FUN4(&VAR12);
return (VAR24);
}
VAR10->VAR2 = VAR2;
VAR10->VAR3 = strdup(VAR3);
VAR10->VAR4 = strdup(*VAR4);
VAR10->VAR8 = VAR9;
VAR6[VAR11] = VAR10;
VAR15++;
(void) FUN4(&VAR12);
break;

case VAR25:
if (VAR16.VAR17 >= VAR18) {
FUN2("");
}
if (VAR3 == NULL || VAR4 == NULL)
return (-1);
*VAR4 = NULL;
VAR11 = FUN6(VAR3) % VAR7;
(void) FUN8(&VAR12);
VAR9 = VAR6[VAR11];
VAR9 = FUN7(VAR2, VAR3, VAR9);
if (VAR9)
*VAR4 = strdup(VAR9->VAR4);
(void) FUN4(&VAR12);
if (VAR9 == NULL)
return (-1);
break;

case VAR26:
if (VAR16.VAR17 >= VAR18) {
FUN2("");
}
if (VAR4 == NULL)
return (-1);

return (FUN9(VAR23,
VAR15, VAR4));
break;

default:
FUN2(""
"", VAR1);
return (-1);
break;
}
return (VAR22);
}