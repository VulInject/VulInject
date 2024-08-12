static int FUN1(struct VAR1 *VAR2)
{
struct VAR1 *VAR3;
const char *VAR4;
int VAR5 = 0;

FUN2(VAR2);

VAR3 = FUN3(VAR2, VAR6);
while (VAR3) {
if (!FUN4(VAR3, "",
&VAR4)) {
VAR5 = -VAR7;
break;
}
VAR3 = FUN3(VAR3,
VAR6);
}

FUN5(VAR3);

if (VAR5)
FUN6("",
VAR3);

return VAR5;
}