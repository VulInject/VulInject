static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;
struct VAR5 *VAR6 = VAR2->VAR7;
struct VAR8 *VAR9 = &VAR10[VAR6->VAR11->VAR12];

FUN2("",
(VAR13)VAR4->VAR14, VAR4->VAR15);

if (VAR2->VAR16 == VAR17) {
FUN3(VAR18) = (unsigned long)VAR4->VAR19;
FUN3(VAR20) = VAR4->VAR15;
} else {
FUN3(VAR21) = (unsigned long)VAR4->VAR19;
FUN3(VAR22) = VAR4->VAR15;
}

return 0;
}