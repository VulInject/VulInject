int
FUN1(VAR1 *VAR2, recno_t VAR3)
{
DBT VAR4;
recno_t VAR5;
size_t VAR6;
int VAR7;
VAR8 *VAR9;
void *VAR10;

if (VAR2->VAR11.VAR12 < VAR2->VAR13) {
VAR10 = realloc(VAR2->VAR11.VAR4, VAR2->VAR13);
if (VAR10 == NULL)
return (VAR14);
VAR2->VAR11.VAR4 = VAR10;
VAR2->VAR11.VAR12 = VAR2->VAR13;
}
VAR4.VAR4 = VAR2->VAR11.VAR4;
VAR4.VAR12 = VAR2->VAR13;

for (VAR5 = VAR2->VAR15; VAR5 < VAR3;) {
VAR6 = VAR2->VAR13;
for (VAR9 = VAR2->VAR11.VAR4;; *VAR9++ = VAR7)
if ((VAR7 = getc(VAR2->VAR16)) == VAR17 || !--VAR6) {
if (VAR7 != VAR17)
*VAR9 = VAR7;
if (VAR6 != 0)
memset(VAR9, VAR2->VAR18, VAR6);
if (FUN2(VAR2,
VAR5, &VAR4, 0) != VAR19)
return (VAR14);
++VAR5;
break;
}
if (VAR7 == VAR17)
break;
}
if (VAR5 < VAR3) {
FUN3(VAR2, VAR20);
return (VAR21);
}
return (VAR19);
}