static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);

while (VAR4->VAR5 < VAR6) {
struct VAR7 *VAR8;

VAR8 = FUN3(sizeof(*VAR8), VAR9);
if (!VAR8)
break;

FUN4(&VAR8->VAR10, &VAR4->VAR11);
VAR4->VAR5++;
}

if (!VAR4->VAR5)
return -VAR12;

return VAR4->VAR5;
}