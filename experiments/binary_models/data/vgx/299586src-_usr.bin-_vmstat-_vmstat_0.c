void
FUN1(void)
{
int VAR1[4], VAR2, VAR3;
long VAR4 = 0, VAR5 = 0;
struct kinfo_pool VAR6;
size_t VAR7;

VAR1[0] = VAR8;
VAR1[1] = VAR9;
VAR1[2] = VAR10;
VAR7 = sizeof(VAR2);
if (FUN2(VAR1, 3, &VAR2, &VAR7, NULL, 0) == -1) {
FUN3("");
return;
}

for (VAR3 = 1; VAR2; VAR3++) {
char VAR11[32];

VAR1[0] = VAR8;
VAR1[1] = VAR9;
VAR1[2] = VAR12;
VAR1[3] = VAR3;
VAR7 = sizeof(VAR6);
if (FUN2(VAR1, 4, &VAR6, &VAR7, NULL, 0) == -1) {
if (VAR13 == VAR14)
continue;
FUN3("");
return;
}
VAR2--;
VAR1[2] = VAR15;
VAR7 = sizeof(VAR11);
if (FUN2(VAR1, 4, &VAR11, &VAR7, NULL, 0) == -1) {
FUN3("");
return;
}
FUN4(&VAR6, VAR11);

VAR5 += (VAR6.VAR16 - VAR6.VAR17) * VAR6.VAR18;
VAR4 += VAR6.VAR19 * VAR6.VAR20;
}

VAR5 /= 1024;
VAR4 /= 1024;
FUN5("",
VAR5, VAR4, (double)(100 * VAR5) / VAR4);
}