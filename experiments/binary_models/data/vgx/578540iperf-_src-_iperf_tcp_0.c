int
FUN1(struct VAR1 *VAR2)
{
int VAR3;

VAR3 = FUN2(VAR2->socket, VAR2->VAR4, VAR2->VAR5->VAR6, VAR7);

if (VAR3 < 0)
return VAR3;


if (VAR2->VAR8->VAR9 == VAR10) {
VAR2->VAR11->VAR12 += VAR3;
VAR2->VAR11->VAR13 += VAR3;
}
else {
if (VAR2->VAR8->VAR14)
FUN3("", VAR2->VAR8->VAR9);
}

return VAR3;
}