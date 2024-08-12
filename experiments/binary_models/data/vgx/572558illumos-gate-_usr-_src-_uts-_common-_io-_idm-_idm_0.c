VAR1
FUN1(VAR2 *VAR3)
{

idm_transport_type_t	VAR4, VAR5;
VAR6		*VAR7;
int			VAR8 = VAR9;

FUN2(&VAR3->VAR10);
if (VAR3->VAR11 == 0) {

for (VAR4 = 0; VAR4 < VAR12; VAR4++) {
VAR7 = &VAR13[VAR4];
if (VAR7->VAR14 == NULL) {

continue;
}

FUN3(&VAR3->VAR10);
VAR8 = VAR7->VAR14->FUN4(VAR3);
FUN2(&VAR3->VAR10);
if (VAR8 != VAR9) {
VAR5 = VAR4;
break;
}
}
if (VAR8 != VAR9) {

for (VAR4 = 0; VAR4 < VAR5; VAR4++) {
VAR7 = &VAR13[VAR4];
if (VAR7->VAR14 == NULL) {

continue;
}

FUN3(&VAR3->VAR10);
VAR7->VAR14->FUN5(VAR3);
FUN2(&VAR3->VAR10);
}
} else {

VAR3->VAR11 = 1;
}
} else {

VAR3->VAR11++;
}
FUN3(&VAR3->VAR10);

return (VAR8);
}