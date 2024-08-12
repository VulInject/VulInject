VAR1 *FUN1(struct VAR2 *VAR3,
u64 VAR4, u64 VAR5, unsigned int VAR6)
{
unsigned int VAR7 = FUN2(VAR6);
VAR1 *VAR8;

FUN3("", VAR7);




if (VAR6 == 0)
return FUN4(-VAR9);


if (VAR4 + VAR7 > VAR5)
return FUN4(-VAR9);

VAR8 = FUN5(VAR3, VAR4, VAR7);


if (!FUN6(VAR8) && FUN7(VAR8[0]) >= VAR4) {
FUN8(VAR8);
return FUN4(-VAR9);
}

return VAR8;
}


const struct export_operations VAR10 = {
.VAR11 = VAR12,
.VAR13 = VAR14,
.VAR15 = VAR16
};