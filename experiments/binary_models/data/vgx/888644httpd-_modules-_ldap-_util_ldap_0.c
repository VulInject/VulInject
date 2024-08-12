static apr_status_t FUN1 (void *VAR1)
{
VAR2 *VAR3 = VAR1, *VAR4 = NULL, *VAR5 = NULL;
VAR6 *VAR7;

if (!VAR3) return VAR8;

VAR7 = VAR3->VAR7;

FUN2(VAR3);

FUN3(VAR7->mutex);


for (VAR4=VAR7->VAR9; VAR4; VAR4=VAR4->VAR10) {
if (VAR4 == VAR3) {
if (VAR5) {
VAR5->VAR10 = VAR4->VAR10;
}
else {
VAR7->VAR9 = VAR4->VAR10;
}
break;
}
VAR5 = VAR4;
}

if (VAR3->VAR11) {
free((void*)VAR3->VAR11);
}
if (VAR3->VAR12) {
free((void*)VAR3->VAR12);
}

FUN4(VAR3->VAR13);
FUN4(VAR7->mutex);



FUN5(VAR3->VAR14);

return VAR8;
}