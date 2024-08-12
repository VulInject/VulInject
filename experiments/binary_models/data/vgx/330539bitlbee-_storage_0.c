static VAR1 *FUN1(const char *VAR2)
{
VAR3 *VAR4;
VAR1 *VAR5 = NULL;

for (VAR4 = VAR6; VAR4; VAR4 = VAR4->VAR7) {
VAR5 = VAR4->VAR8;
if (strcmp(VAR5->VAR2, VAR2) == 0) {
break;
}
}

if (VAR4 == NULL) {
return NULL;
}

if (VAR5->VAR9) {
VAR5->FUN2();
}

return VAR5;
}