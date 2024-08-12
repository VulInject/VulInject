static enum VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5, u32 VAR6)
{
enum ice_ddp_state VAR7 = VAR8;
struct VAR9 *VAR10;
enum ice_aq_err VAR11;
u32 VAR12, VAR13, VAR14;
int VAR15;

if (!VAR5 || !VAR6)
return VAR16;


VAR10 = (struct VAR9 *)VAR5;
if (FUN2(VAR10->VAR17[0].VAR18) & VAR19)
return VAR8;

VAR15 = FUN3(VAR3, VAR20);
if (VAR15) {
if (VAR15 == -VAR21)
return VAR22;
return FUN4(VAR3->VAR23.VAR24);
}

for (VAR14 = 0; VAR14 < VAR6; VAR14++) {
bool VAR25 = ((VAR14 + 1) == VAR6);

if (!VAR25) {

VAR10 = (struct VAR9 *)(VAR5 + VAR14 + 1);


if (FUN5(VAR10->VAR26))
if (FUN2(VAR10->VAR17[0].VAR18) &
VAR19)
VAR25 = true;
}

VAR10 = (struct VAR9 *)(VAR5 + VAR14);

VAR15 = FUN6(VAR3, VAR10, VAR27, VAR25,
&VAR12, &VAR13, NULL);


if (VAR15) {
FUN7(VAR3, VAR28,
"",
VAR15, VAR12, VAR13);
VAR11 = VAR3->VAR23.VAR24;
VAR7 = FUN4(VAR11);
break;
}

if (VAR25)
break;
}

if (!VAR15) {
VAR15 = FUN8(VAR3);
if (VAR15)
FUN7(VAR3, VAR28,
"", VAR15);
}

FUN9(VAR3);

return VAR7;
}