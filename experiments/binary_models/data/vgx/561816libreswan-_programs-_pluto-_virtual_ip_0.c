void FUN1(const char *VAR1,
struct VAR2 *VAR2)
{
FUN2();



int VAR3 = 0;	

for (const char *VAR4 = VAR1; VAR4 != NULL; ) {
const char *VAR5 = strchr(VAR4, '');

if (VAR5 == NULL)
VAR5 = VAR4 + strlen(VAR4);

bool VAR6 = false;
ip_subnet VAR7;	

if (FUN3(FUN4(VAR4, VAR5 - VAR4), &VAR7, &VAR6) == NULL) {
if (VAR6)
VAR8++;
else
VAR9++;
} else {
VAR3++;
}
VAR4 = *VAR5 != '' ? VAR5 + 1 : NULL;
}

if (VAR3 == 0) {

if (VAR8 != 0) {
VAR10 = (VAR11 *)FUN5(
(VAR8 * sizeof(VAR11)),
"");
}
if (VAR9 != 0) {
VAR12 = (VAR11 *)FUN5(
(VAR9 * sizeof(VAR11)),
"");
}



int VAR13 = 0;
int VAR14 = 0;
for (const char *VAR4 = VAR1; VAR4 != NULL; ) {
const char *VAR5 = strchr(VAR4, '');

if (VAR5 == NULL)
VAR5 = VAR4 + strlen(VAR4);

bool VAR6 = false;
ip_subnet VAR7;
if (FUN3(FUN4(VAR4, VAR5 - VAR4),
&VAR7, &VAR6) == NULL) {
if (VAR6) {
VAR10[VAR13++] = VAR7;
} else {
VAR12[VAR14++] = VAR7;
}
}
VAR4 = *VAR5 != '' ? VAR5 + 1 : NULL;
}
} else {
FUN6(VAR15, VAR2,
"", VAR3);
FUN7(VAR10);
VAR10 = NULL;
}
}