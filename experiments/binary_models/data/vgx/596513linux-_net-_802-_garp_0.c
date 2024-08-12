static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
const struct VAR5 *VAR6;

if (!FUN2(VAR4, sizeof(*VAR6)))
return -1;
VAR6 = (struct VAR5 *)VAR4->VAR7;
if (VAR6->VAR8 == 0)
return -1;
FUN3(VAR4, sizeof(*VAR6));

while (VAR4->VAR9 > 0) {
if (FUN4(VAR2, VAR4, VAR6->VAR8) < 0)
return -1;
if (FUN5(VAR4) < 0)
break;
}
return 0;
}