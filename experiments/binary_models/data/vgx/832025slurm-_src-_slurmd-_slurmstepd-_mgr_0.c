static struct VAR1 * FUN1 (int VAR2)
{
struct VAR1 *VAR3;

if (!(VAR3 = FUN2 (VAR2)))
return (NULL);

if ((VAR3->VAR4 = FUN3 ()) < 0) {
FUN4 (VAR3);
return (NULL);
}

if (VAR3->VAR4 == 0) {
close (VAR3->VAR5);
VAR3->VAR5 = -1;
} else {
close (VAR3->VAR6);
VAR3->VAR6 = -1;
}
return (VAR3);
}