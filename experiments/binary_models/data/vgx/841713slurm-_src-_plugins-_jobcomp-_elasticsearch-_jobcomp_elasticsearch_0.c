extern void *FUN1(void *VAR1)
{
ListIterator VAR2;
struct VAR3 *VAR4 = NULL;
struct timespec VAR5 = {0, 0};
time_t VAR6;


FUN2(&VAR7);
VAR5.VAR8 = FUN3(NULL) + VAR9;
FUN4(&VAR10, &VAR7, &VAR5);
FUN5(&VAR7);

while (!VAR11) {
int VAR12 = 0, VAR13 = 0, VAR14 = 0;
sleep(1);
VAR2 = FUN6(VAR15);
while ((VAR4 = (struct VAR3 *)FUN7(VAR2)) &&
!VAR11) {
VAR6 = FUN3(NULL);
if ((VAR4->VAR16 == 0) ||
(FUN8(VAR6, VAR4->VAR16) >=
VAR9)) {
if ((FUN9(VAR4->VAR17) ==
VAR18)) {
FUN10(VAR2);
VAR12++;
} else {
VAR4->VAR16 = VAR6;
VAR13++;
}
} else
VAR14++;
}
FUN11(VAR2);
if ((VAR12 || VAR13))
FUN12(VAR19, "",
VAR12, VAR13,
VAR14);
}
return NULL;
}