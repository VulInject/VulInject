static int FUN1 ( void *VAR1, struct VAR2 *VAR3)

{
char VAR4[VAR5];
int VAR6;
socklen_t VAR7;

FUN2 ("", VAR3->VAR8);
VAR7 = FUN3 (VAR3);
VAR6 = getnameinfo (VAR3, VAR7, VAR4, (VAR9) sizeof (VAR4),
(char *) NULL, 0, VAR10);
if (VAR6) {
int VAR11 = VAR12;
FUN2 ("", VAR6, FUN4 (VAR6));
if (VAR6 == VAR13)
FUN2 ("", VAR11, strerror(VAR11));
} else
FUN2 ("", VAR4);
return 0;
}