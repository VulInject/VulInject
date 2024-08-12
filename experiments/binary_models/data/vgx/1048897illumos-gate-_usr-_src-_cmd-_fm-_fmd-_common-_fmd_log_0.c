void
FUN1(VAR1 *VAR2)
{
ea_object_t VAR3, VAR4;
off64_t VAR5 = 0;
size_t VAR6;
void *VAR7;

(void) pthread_mutex_lock(&VAR2->VAR8);

if (VAR2->VAR9 & VAR10) {
VAR2->VAR9 &= ~VAR10;
VAR5 = VAR2->VAR11;
}

(void) pthread_mutex_unlock(&VAR2->VAR8);


if (VAR5 != 0 && FUN2(&VAR3, VAR12) == 0 &&
FUN3(&VAR4, VAR13, &VAR5, 0) == 0) {

(void) FUN4(&VAR3, &VAR4);
VAR6 = FUN5(&VAR3, NULL, 0);
VAR7 = FUN6(VAR6, VAR14);

(void) FUN5(&VAR3, VAR7, VAR6);
FUN7(VAR2->VAR15 + VAR6 == VAR2->VAR16);

if (FUN8(VAR2->VAR17, VAR7, VAR6, VAR2->VAR15) == VAR6) {
FUN9((VAR18, "", VAR5));
} else {
FUN10(VAR19,
"", VAR2->VAR20);
}

FUN11(VAR7, VAR6);
(void) FUN12(&VAR4, VAR21);
}
}