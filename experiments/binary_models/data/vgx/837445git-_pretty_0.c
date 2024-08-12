const char *FUN1(struct VAR1 *VAR2, const char *VAR3,
const char *VAR4)
{
int VAR5 = 1;

for (;;) {
const char *VAR6 = VAR3;
int VAR7 = FUN2(VAR6);

VAR3 += VAR7;
if (!VAR7 || FUN3(VAR6, &VAR7))
break;

if (!VAR2)
continue;
FUN4(VAR2, VAR7 + 2);
if (!VAR5)
FUN5(VAR2, VAR4);
FUN6(VAR2, VAR6, VAR7);
VAR5 = 0;
}
return VAR3;
}