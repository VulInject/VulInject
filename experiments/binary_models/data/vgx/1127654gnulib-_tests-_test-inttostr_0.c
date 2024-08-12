char *VAR1 = malloc (FUN1 (VAR2));                       \
char const *VAR3;                                                    \
FUN2 (VAR1);                                                     \
*VAR1 = '';                                                      \
VAR4                                                            \
((FUN3 (VAR2)                                               \
? snprintf (VAR5, sizeof VAR5, "", (VAR6) FUN4 (VAR2)) \
: snprintf (VAR5, sizeof VAR5, "", (VAR7) FUN4 (VAR2))) \
< sizeof VAR5);                                                 \
FUN2 (FUN5 ((VAR3 = FUN6 (FUN4 (VAR2), VAR1)), VAR5));           \
\
FUN2 (! FUN3 (VAR2) || (VAR3 == VAR1 && *VAR3 == ''));            \
VAR4                                                            \
((FUN3 (VAR2)                                               \
? snprintf (VAR5, sizeof VAR5, "", (VAR6) FUN7 (VAR2)) \
: snprintf (VAR5, sizeof VAR5, "", (VAR7) FUN7 (VAR2))) \
< sizeof VAR5);                                                 \
FUN2 (FUN5 ((VAR3 = FUN6 (FUN7 (VAR2), VAR1)), VAR5));           \
\
FUN2 (! FUN8 (VAR2) || FUN3 (VAR2)                         \
|| (VAR3 == VAR1 && FUN9 (*VAR3)));                           \
free (VAR1);                                                       \
}                                                                   \
while (0)

int
main (void)
{
size_t VAR8 = 2;
char *VAR9 = malloc (VAR8);
FUN2 (VAR9);


if (snprintf (VAR9, VAR8, "", (VAR7) 3) == 1
&& VAR9[0] == '' && VAR9[1] == '')
{
FUN10 (int,          VAR10);
FUN10 (unsigned int, VAR11);
FUN10 (VAR12,        VAR13);
FUN10 (VAR7,    VAR14);
FUN10 (VAR6,     VAR15);
free (VAR9);
return 0;
}


free (VAR9);
return 77;
}