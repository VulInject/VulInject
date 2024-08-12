struct VAR1 *
FUN1(void)
{
struct VAR1 *VAR2 = NULL;

VAR2 = FUN2(sizeof(*VAR2));
if (!VAR2) goto VAR3;

memset(VAR2, 0, sizeof(*VAR2));

VAR3:
return VAR2;
}