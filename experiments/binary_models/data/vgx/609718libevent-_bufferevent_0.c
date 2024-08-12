void
FUN1(struct VAR1 *VAR2,
int VAR3, int VAR4)
{
struct timeval VAR5, VAR6;
struct VAR7 *VAR8 = NULL, *VAR9 = NULL;

memset(&VAR5, 0, sizeof(VAR5));
memset(&VAR6, 0, sizeof(VAR6));

if (VAR3) {
VAR5.VAR10 = VAR3;
VAR8 = &VAR5;
}
if (VAR4) {
VAR6.VAR10 = VAR4;
VAR9 = &VAR6;
}

FUN2(VAR2, VAR8, VAR9);
}