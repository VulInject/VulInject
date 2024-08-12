int
FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4,
libvarpd_dirwalk_f VAR5, void *VAR6)
{
int VAR7;
size_t VAR8;
char *VAR9, *VAR10;
VAR11 *VAR12;
struct VAR13 *VAR14;
assert(VAR2 != NULL && VAR3 != NULL);

if (asprintf(&VAR9, "", VAR3, FUN2()) == -1)
return (VAR15);

if ((VAR12 = FUN3(VAR9)) == NULL) {
VAR7 = VAR15;
return (VAR7);
}

VAR8 = strlen(VAR4);
for (;;) {
size_t VAR16;

VAR15 = 0;
VAR14 = FUN4(VAR12);
if (VAR14 == NULL) {
VAR7 = VAR15;
break;
}

VAR16 = strlen(VAR14->VAR17);
if (VAR16 <= VAR8)
continue;

if (strcmp(VAR4, VAR14->VAR17 + (VAR16 - VAR8)) != 0)
continue;

if (asprintf(&VAR10, "", VAR9, VAR14->VAR17) == -1) {
VAR7 = VAR15;
break;
}

if (FUN5(VAR2, VAR10, VAR6) != 0) {
free(VAR10);
VAR7 = 0;
break;
}

free(VAR10);
}

(void) FUN6(VAR12);
free(VAR9);
return (VAR7);
}