static void *
FUN1(void *VAR1)
{
struct VAR2 *VAR3 = VAR1;
int VAR4;

while (1) {
if ((VAR4 = socket(VAR5, VAR6, 0)) < 0)
FUN2(1, "");
connect(VAR4, (struct VAR7 *)VAR3, sizeof(*VAR3));
close(VAR4);
}

return NULL;
}