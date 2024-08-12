static char *FUN1(struct VAR1 *VAR2)
{
int VAR3 = 0;
char *this = VAR2->VAR4;

for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++) {
if (this[VAR3] == '') {
this[VAR3] = 0;
FUN2(VAR2, VAR3 + 1);
return this;
}
if (!FUN3(this[VAR3]))
return NULL;
}
return NULL;
}