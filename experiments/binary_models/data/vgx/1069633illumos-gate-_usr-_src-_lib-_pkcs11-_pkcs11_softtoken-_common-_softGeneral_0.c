static VAR1
FUN1(boolean_t VAR2, CK_VOID_PTR VAR3)
{
CK_RV VAR4 = VAR5;
struct VAR6 *VAR7, *VAR8;
struct VAR9 *VAR10, *VAR11;

if (!VAR12) {
return (VAR13);
}


if (VAR3 != NULL) {
return (VAR14);
}

(void) pthread_mutex_lock(&VAR15);

VAR16 = 1;
(void) pthread_mutex_unlock(&VAR15);


VAR4 = FUN2(VAR2);

(void) pthread_mutex_lock(&VAR15);

VAR16 = 0;
(void) pthread_mutex_unlock(&VAR15);

VAR12 = VAR17;
VAR18 = 0;



(void) pthread_mutex_destroy(&VAR19);


(void) pthread_mutex_destroy(&VAR15);


FUN3(VAR20);
(void) pthread_mutex_destroy(&VAR21.VAR22);
(void) pthread_mutex_destroy(&VAR21.VAR23);
(void) FUN4();


VAR7 = VAR24.VAR25;
while (VAR7 != NULL) {
VAR8 = VAR7->VAR26;
free(VAR7);
VAR7 = VAR8;
}

VAR21.VAR27 = VAR28;
(void) pthread_mutex_destroy(&VAR24.VAR29);

VAR10 = VAR30.VAR25;
while (VAR10 != NULL) {
VAR11 = VAR10->VAR26;
free(VAR10);
VAR10 = VAR11;
}
(void) pthread_mutex_destroy(&VAR30.VAR31);

return (VAR4);
}