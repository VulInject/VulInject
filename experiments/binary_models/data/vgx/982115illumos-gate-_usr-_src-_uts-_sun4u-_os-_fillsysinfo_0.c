static void
FUN1(pnode_t VAR1, char *VAR2)
{
struct VAR3 *VAR4;
int VAR5;
uint32_t VAR6;

for (VAR4 = VAR3; VAR4->VAR7; ++VAR4) {
if (strcmp(VAR4->VAR7, VAR2) != 0)
continue;
if (VAR4->VAR8 == VAR9)
return;
if (VAR4->VAR10 != NULL) {
if ((VAR5 = FUN2(VAR1, VAR11)) == -1) {
FUN3(VAR12, "",
VAR2, VAR5);
continue;
}
if (VAR5 != sizeof (VAR6)) {
FUN3(VAR12, ""
"", VAR2);
continue;
}
if (FUN4(VAR1, VAR11,
(VAR13)&VAR6) == -1) {
FUN3(VAR12, "",
VAR2);
continue;
}


*VAR4->VAR10 = (VAR13)(VAR14)VAR6;
FUN5("", VAR2,
(void *)*VAR4->VAR10);
}
if (VAR4->VAR15 != NULL)
(*VAR4->VAR15)(VAR1);

if (VAR4->VAR8 != VAR16)
VAR4->VAR8 = VAR9;
}
}