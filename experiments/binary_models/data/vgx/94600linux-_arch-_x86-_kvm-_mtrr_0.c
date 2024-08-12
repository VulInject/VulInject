VAR1 FUN1(struct VAR2 *VAR3, gfn_t VAR4)
{
struct VAR5 *VAR6 = &VAR3->VAR7.VAR6;
struct mtrr_iter VAR8;
u64 VAR9, VAR10;
int VAR11 = -1;
const int VAR12 = (1 << VAR13)
| (1 << VAR14);

VAR9 = FUN2(VAR4);
VAR10 = VAR9 + VAR15;

FUN3(&VAR8, VAR6, VAR9, VAR10) {
int VAR16 = VAR8.VAR17;



if (VAR11 == -1) {
VAR11 = VAR16;
continue;
}


if (VAR11 == VAR16)
continue;


if (VAR16 == VAR18)
return VAR18;


if (((1 << VAR11) & VAR12) &&
((1 << VAR16) & VAR12)) {
VAR11 = VAR14;
continue;
}




return VAR13;
}

if (VAR8.VAR19)
return FUN4(VAR3);


if (VAR11 == -1)
return FUN5(VAR6);


FUN6(VAR8.VAR20);

return VAR11;
}