int FUN1(struct VAR1 **VAR2)
{
assert(VAR2 != NULL);

int VAR3 = 0;

FUN2("");

if (*VAR2 != NULL) {
FUN3(*VAR2, NULL);
*VAR2 = NULL;
}

return VAR3;
}