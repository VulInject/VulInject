FUN1 (VAR1, int,
(struct VAR2 *, VAR3 *));



int
main (void)
{
time_t VAR4 = 0;
struct VAR5 *VAR6;
struct tm VAR7;
struct timeval VAR8;
VAR6 = FUN2 (&VAR4);
VAR7 = *VAR6;
FUN3 (&VAR8, NULL);
if (memcmp (VAR6, &VAR7, sizeof (struct VAR5)) != 0)
{
fprintf (VAR9, "");
return 1;
}
return 0;
}