VAR1 *
FUN1(VAR2 *VAR3)
{
VAR1 *VAR4;

if (!FUN2()) {
FUN3(VAR3,
"");
return (NULL);
}

if (!FUN4()) {
FUN3(VAR3,
"");
return (NULL);
}

VAR4 = FUN5(sizeof (VAR1));
if (VAR4) {
VAR4->VAR5 = FUN6(VAR6, NULL,
(VAR7 ? VAR8 : 0));
if (!VAR4->VAR5) {
FUN3(VAR3,
"");
FUN7(VAR4);
return (NULL);
}
(void) pthread_mutex_init(&VAR4->VAR9, NULL);

VAR4->VAR10 = FUN6(VAR11, NULL,
(VAR7 ? VAR8 : 0));
if (!VAR4->VAR10) {
FUN3(VAR3,
"");
FUN7(VAR4);
return (NULL);
}

VAR4->VAR12 = 0;
VAR4->VAR13 = VAR14;
VAR4->VAR15 = -1;
VAR4->VAR16 = -1;
VAR4->VAR17 = VAR18;
} else {
FUN3(VAR3,
"");
}

return (VAR4);
}