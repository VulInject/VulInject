static int FUN1(struct VAR1 *VAR2)
{
int VAR3;
int VAR4;
int VAR5;

for (VAR3 = 0; VAR3 < 16; VAR3++) {
FUN2(VAR2, VAR6);
FUN3(VAR2, 0);
FUN3(VAR2, VAR3);
VAR4 = FUN4(VAR2, &VAR5);

if (VAR4)
break;
}

FUN5(VAR2);
FUN5(VAR2);

return VAR3;
}

static const struct VAR7 *VAR8[] = {
&VAR9,
&VAR10,
&VAR11,
&VAR12,
&VAR13
};