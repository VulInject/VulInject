static int
FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5, size_t VAR6)
{
VAR7 *VAR8;
int VAR9;

if (FUN2((char *)VAR5, VAR6, &VAR8, 0)) {
FUN3(VAR2, "");
return (1);
}

VAR9 = FUN4(VAR2, VAR8, VAR4->VAR10);
if (VAR9 == VAR11) {
FUN5(VAR2, "");
FUN6(VAR12.VAR13.VAR14.VAR15);
FUN7(VAR8);
return (0);
} else if (VAR9 == VAR16) {
FUN5(VAR2, "", strerror(VAR17));
FUN6(VAR12.VAR18.VAR14.VAR15);

}

(void) pthread_mutex_lock(&VAR4->VAR19);
(void) pthread_mutex_lock(&VAR20);
if (!VAR21) {
(void) pthread_mutex_unlock(&VAR20);
if (VAR4->VAR22 == VAR23) {
FUN8(VAR2, VAR4->VAR24, VAR8, 0);
VAR9 = 0;
} else if (VAR4->VAR22 == VAR25) {
FUN9(VAR2, VAR4->VAR24);
if (VAR4->VAR26) {
FUN10(VAR2, VAR4->VAR27);
VAR4->VAR26 = 0;
}
VAR4->VAR22 = VAR23;
FUN5(VAR2, "",
VAR4->VAR10);
FUN8(VAR2, VAR4->VAR24, VAR8, 0);
VAR9 = 0;
} else {
FUN5(VAR2, "",
VAR4->VAR22);
FUN7(VAR8);

VAR9 = 2;
}
} else {
(void) pthread_mutex_unlock(&VAR20);
FUN5(VAR2, "");
FUN7(VAR8);

VAR9 = 3;
}

(void) pthread_mutex_unlock(&VAR4->VAR19);

return (VAR9);
}