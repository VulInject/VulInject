int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;
struct VAR5 *VAR6 = FUN2(VAR2->VAR7);
struct VAR5 *VAR8;
struct VAR1 *VAR9;
struct VAR10 *VAR11;

FUN3(VAR12, "",
VAR6->VAR13, VAR6->VAR14);

if (VAR6->VAR14 & VAR15) {
VAR11 = &VAR4->VAR16;

FUN4(&VAR4->VAR17);
FUN5(VAR9, VAR11,
VAR18) {
VAR8 = FUN2(VAR9->VAR7);

if (VAR9->VAR19 !=
FUN6(VAR6->VAR20.VAR21))
continue;

FUN3(VAR12,
"",
FUN6(VAR6->VAR20.VAR21),
FUN7(VAR8->VAR22));
VAR9->VAR23 = VAR24;
if (VAR9->VAR25)
VAR9->FUN8(VAR9->VAR26);
break;
}
FUN9(&VAR4->VAR17);
} else {
VAR11 = &VAR4->VAR27;

FUN4(&VAR4->VAR17);
FUN5(VAR9, VAR11, VAR28) {
VAR8 = FUN2(VAR9->VAR7);

if (VAR8->VAR13 != VAR6->VAR13 ||
VAR9 == VAR2)
continue;

FUN3(VAR12,
"",
FUN6(VAR6->VAR13),
FUN7(VAR8->VAR22));
VAR9->VAR23 = VAR24;
break;
}
FUN9(&VAR4->VAR17);
}


VAR2->VAR29 = 1;
return 0;
}