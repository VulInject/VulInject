static inline VAR1 *
FUN1(VAR2 *VAR3, VAR1 *VAR4)
{
VAR1 *VAR5;

FUN2(&VAR3->VAR6);
if (VAR3->VAR7 == VAR4) {
FUN3(30, ""
"", VAR4);
VAR3->VAR7 = VAR4->VAR8;
} else {
VAR5 = VAR3->VAR7;
while (VAR5 != NULL) {
if (VAR5->VAR8 == VAR4) {
FUN3(30, ""
"", VAR4);
VAR5->VAR8 = VAR4->VAR8;
break;
}
VAR5 = VAR5->VAR8;
}
if (VAR5 == NULL)
VAR4 = NULL;
}
FUN4(&VAR3->VAR6);
return (VAR4);
}