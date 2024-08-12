VAR1
FUN1(VAR2 *VAR3, VAR4 *VAR5, void *VAR6)
{
kid_t VAR7;

if (VAR5->VAR8 == NULL && VAR5->VAR9 > 0) {
FUN2(&VAR5->VAR8, VAR5->VAR9, 0);
if (VAR5->VAR8 == NULL)
return (-1);
}
if (VAR6 != NULL) {
(void) memcpy(VAR5->VAR8, VAR6, VAR5->VAR9);
if (VAR5->VAR10 == VAR11) {
VAR12 *VAR13 = VAR6;
VAR12 *VAR14 = FUN3(VAR5);
uint_t VAR15;

for (VAR15 = 0; VAR15 < VAR5->VAR16; VAR15++, VAR13++, VAR14++) {
if (VAR14->VAR17 != VAR18)
continue;
if (FUN4(VAR14) == NULL)
continue;

FUN4(VAR14) =
(char *)VAR5->VAR8 +
(FUN4(VAR13) - (char *)VAR6);
}
}

}
while ((VAR7 = (VAR1)FUN5(VAR3->VAR19, VAR20, VAR5)) == -1) {
if (VAR21 == VAR22) {
(void) FUN6(NULL, 0, 100);	
continue;			
}
break;
}
return (VAR7);
}