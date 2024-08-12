static VAR1 FUN1(struct VAR2 *VAR3,
size_t size_bits VAR4)
{
TEE_Result VAR5 = VAR6;
struct VAR7 *VAR8 = NULL;
size_t VAR9 = 0;


if (!VAR3) {
FUN2("");
return VAR10;
}

VAR9 = FUN3(VAR3->VAR11);

VAR8 = FUN4(VAR12);
if (VAR8)
VAR5 = VAR8->FUN5(VAR3, VAR9);

FUN2("" VAR13,
VAR9, VAR5);

return VAR5;
}