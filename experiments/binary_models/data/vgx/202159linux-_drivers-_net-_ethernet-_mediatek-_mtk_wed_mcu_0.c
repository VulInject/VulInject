void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = (struct VAR5 *)VAR4->VAR7;

FUN2(VAR4, sizeof(*VAR6));

switch (VAR6->VAR8) {
case VAR9:
FUN3(VAR2->VAR10->VAR11, "", VAR4->VAR7);
break;
case VAR12: {
struct VAR13 *VAR14 = (void *)VAR4->VAR7;
u32 VAR15 = VAR4->VAR16 / sizeof(*VAR14);
int VAR17;

for (VAR17 = 0 ; VAR17 < VAR15 ; VAR17++)
FUN3(VAR2->VAR10->VAR11,
"",
FUN4(VAR14[VAR17].VAR18),
FUN4(VAR14[VAR17].VAR19),
FUN4(VAR14[VAR17].VAR20),
FUN4(VAR14[VAR17].VAR21));
break;
}
case VAR22:
FUN5(VAR2->VAR10->VAR23, VAR4);
break;
default:
break;
}

FUN6(VAR4);
}