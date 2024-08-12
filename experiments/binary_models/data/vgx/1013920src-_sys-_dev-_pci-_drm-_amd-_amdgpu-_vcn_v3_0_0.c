static VAR1 FUN1(struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = VAR3->VAR5;

if (VAR3 == &VAR5->VAR6.VAR7[VAR3->VAR8].VAR9[0]) {
if (VAR3->VAR10)
return *VAR3->VAR11;
else
return FUN2(VAR12, VAR3->VAR8, VAR13);
} else {
if (VAR3->VAR10)
return *VAR3->VAR11;
else
return FUN2(VAR12, VAR3->VAR8, VAR14);
}
}