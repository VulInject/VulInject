void FUN1(void)
{
struct VAR1 *VAR2 = (struct VAR1 *)VAR3;
u32 VAR4 = 0;

if (FUN2(&VAR2->VAR5) & VAR6) {
FUN3(VAR7, &VAR2->VAR8);
VAR4 = VAR6;
} else {
FUN4();
FUN5(VAR9, &VAR2->VAR8);
FUN5(VAR10, &VAR2->VAR8);
FUN4();
}


while (!(FUN2(&VAR2->VAR5) & VAR11))
;

FUN6(5); 
FUN3(0, &VAR2->VAR12);


if (FUN7(VAR13))
FUN3((VAR4 | VAR14 | (VAR15 << 8) | VAR16 |
VAR17), &VAR2->VAR5);
else
FUN3((VAR4 | VAR14 | (VAR15 << 8)), &VAR2->VAR5);


while (!(FUN2(&VAR2->VAR5) & VAR18))
;

FUN8();

while (1);
}