void *FUN1(void *VAR1)
{
if (VAR1 == NULL) {
FUN2(VAR2,
"",
VAR3);

return NULL;
}

FUN2(VAR4, "",
VAR3, FUN3(NULL), FUN4());

VAR5 *VAR6 =
(VAR5 *)VAR1;

while (VAR6->VAR7) {

pthread_mutex_lock(
&(VAR6->VAR8));


while (!VAR6->VAR9) {
FUN5(
&(VAR6->VAR10),
&(VAR6->VAR8));
}

VAR11 *VAR12 = FUN6(
VAR6->VAR13);
while (VAR12 != NULL) {
if (VAR12->VAR14 == NULL) {
FUN2(
VAR15,
"",
VAR3, FUN3(NULL), FUN4(),
(VAR12->VAR16
!= VAR17)
? ""
: "");
FUN7(VAR18, VAR12);
VAR12 = FUN6(
VAR6
->VAR13);
continue;
}


FUN2(
VAR19,
"",
VAR3, VAR12->VAR14);
pthread_mutex_lock(
&(VAR6->VAR20));
if (FUN8(
VAR6->VAR21,
VAR12->VAR14)
== NULL) {
FUN2(
VAR15,
"",
VAR3, FUN3(NULL), FUN4(),
(VAR12->VAR16
!= VAR17)
? ""
: "");
FUN7(VAR18, VAR12);
VAR12 = FUN6(
VAR6
->VAR13);
pthread_mutex_unlock(
&(VAR6
->VAR20));
continue;
}

if (VAR12->VAR16 != VAR17) {
FUN9(VAR12);
}

if (VAR12->VAR22 != NULL) {
FUN10(VAR12);
}

FUN7(VAR18, VAR12);
VAR12 = FUN6(
VAR6->VAR13);

pthread_mutex_unlock(
&(VAR6->VAR20));
}

VAR6->VAR9 = false;
pthread_mutex_unlock(
&(VAR6->VAR8));
}

FUN2(VAR4, "",
VAR3, FUN3(NULL), FUN4());

return NULL;
}