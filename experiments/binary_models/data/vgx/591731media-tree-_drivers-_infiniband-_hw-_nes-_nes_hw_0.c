int FUN1(struct VAR1 *VAR2, u32 VAR3,
u32 VAR4, u32 VAR5)
{
struct VAR6 *VAR7 = VAR2->VAR7;
struct VAR8 *VAR9;
struct VAR10 *VAR11;
int VAR12 = 0;
u16 VAR13;


VAR11 = FUN2(VAR7);
if (VAR11 == NULL) {
FUN3(VAR14, "");
return -VAR15;
}
VAR11->VAR16 = 1;
VAR9 = &VAR11->VAR9;

FUN3(VAR14, "",
(VAR5 == VAR17) ? "" : "",
VAR3, VAR3, VAR4);

FUN4(VAR9, VAR7);
FUN5(VAR9->VAR18, VAR19, (VAR20 |
((VAR5 == VAR17) ? VAR21 : 0)));
FUN5(VAR9->VAR18, VAR22,
((VAR4 << VAR23) | VAR3));

FUN3(VAR14, "");

FUN6(&VAR11->VAR24, 2);
FUN7(VAR7, VAR11);

if (VAR5 == VAR17)
VAR12 = FUN8(VAR11->VAR25, (VAR11->VAR26 != 0),
VAR27);
FUN3(VAR14, "",
VAR12, VAR11->VAR13, VAR11->VAR28);
VAR13 = VAR11->VAR13;

FUN9(VAR7, VAR11);

if (!VAR12)
return -VAR29;
else if (VAR13)
return -VAR30;
else
return 0;
}