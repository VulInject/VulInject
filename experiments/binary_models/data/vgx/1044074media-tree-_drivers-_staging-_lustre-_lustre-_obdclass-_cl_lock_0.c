}
FUN1(VAR1);


int FUN2(const struct VAR2 *VAR3, struct VAR4 *VAR5,
struct VAR6 *VAR7, struct VAR8 *VAR9)
{
const struct VAR10 *VAR11;
int VAR12 = -VAR13;

FUN3(VAR11, &VAR7->VAR14, VAR15) {
if (!VAR11->VAR16->VAR17)
continue;

VAR12 = VAR11->VAR16->FUN4(VAR3, VAR11, VAR5, VAR9);
if (VAR12 != 0)
break;
}
return VAR12;
}