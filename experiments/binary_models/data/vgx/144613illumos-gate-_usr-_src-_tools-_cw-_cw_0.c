static void
FUN1(struct VAR1 *VAR2)
{
static int VAR3;

if (VAR3++)
return;


FUN2(VAR2, "");
FUN2(VAR2, "");
}