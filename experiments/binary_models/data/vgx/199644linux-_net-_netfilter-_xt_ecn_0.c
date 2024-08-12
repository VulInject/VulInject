static bool FUN1(const struct VAR1 *VAR2, struct VAR3 *VAR4)
{
const struct VAR5 *VAR6 = VAR4->VAR7;
struct tcphdr VAR8;
const struct VAR9 *VAR10;


VAR10 = FUN2(VAR2, VAR4->VAR11, sizeof(VAR8), &VAR8);
if (VAR10 == NULL)
return false;

if (VAR6->VAR12 & VAR13) {
if (VAR6->VAR14 & VAR13) {
if (VAR10->VAR15 == 1)
return false;
} else {
if (VAR10->VAR15 == 0)
return false;
}
}

if (VAR6->VAR12 & VAR16) {
if (VAR6->VAR14 & VAR16) {
if (VAR10->VAR17 == 1)
return false;
} else {
if (VAR10->VAR17 == 0)
return false;
}
}

return true;
}