static void
FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR3)
{
struct ecommunity VAR4;
struct ecommunity VAR5;
struct ecommunity_val VAR6;
struct ecommunity_val VAR7;
bgp_encap_types VAR8;
struct VAR9 *VAR10, *VAR11;
struct VAR12 *VAR13;
struct VAR14 *VAR15;


VAR8 = VAR16;
memset(&VAR4, 0, sizeof(VAR4));
FUN2(VAR8, &VAR6);
VAR4.VAR17 = 1;
VAR4.VAR18 = VAR19;
VAR4.VAR20 = (VAR21 *)VAR6.VAR20;
FUN3(VAR3, FUN4(&VAR4));


FUN5(&VAR7,
false );
VAR5.VAR17 = 1;
VAR5.VAR18 = VAR19;
VAR5.VAR20 = (VAR21 *)VAR7.VAR20;
FUN3(VAR3,
FUN6(FUN7(VAR3),
&VAR5));



if (FUN8(VAR22->VAR23)) {
for (FUN9(VAR22->VAR23,
VAR11, VAR13))
FUN3(
VAR3, FUN6(VAR3->VAR12, VAR13));
} else {
for (FUN9(VAR2->VAR24, VAR10,
VAR15)) {
if (!FUN10(VAR15->VAR25, VAR26))
continue;
for (FUN9(VAR15->VAR27->VAR28,
VAR11, VAR13))
FUN3(
VAR3, FUN6(VAR3->VAR12,
VAR13));
}
}
}