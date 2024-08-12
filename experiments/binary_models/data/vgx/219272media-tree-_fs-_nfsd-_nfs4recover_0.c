static char *
FUN1(void)
{
int VAR1;
size_t VAR2;
char *VAR3;

if (VAR4)
return NULL;

VAR2 = strlen(VAR5) +
strlen(FUN2()) + 1;

VAR3 = FUN3(VAR2, VAR6);
if (!VAR3)
return VAR3;

VAR1 = snprintf(VAR3, VAR2, VAR5 "",
FUN2());
if (VAR1 >= VAR2) {

FUN4(VAR3);
return NULL;
}

return VAR3;
}