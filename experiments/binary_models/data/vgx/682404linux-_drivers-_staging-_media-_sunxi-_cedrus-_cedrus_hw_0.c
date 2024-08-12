static VAR1 FUN1(int VAR2, void *VAR3)
{
struct VAR4 *VAR5 = VAR3;
struct VAR6 *VAR7;
enum vb2_buffer_state VAR8;
enum cedrus_irq_status VAR9;


if (!FUN2(&VAR5->VAR10))
return VAR11;

VAR7 = FUN3(VAR5->VAR12);
if (!VAR7) {
FUN4(&VAR5->VAR13,
"");
return VAR14;
}

VAR9 = VAR7->VAR15->FUN5(VAR7);
if (VAR9 == VAR16)
return VAR14;

VAR7->VAR15->FUN6(VAR7);
VAR7->VAR15->FUN7(VAR7);

if (VAR9 == VAR17)
VAR8 = VAR18;
else
VAR8 = VAR19;

FUN8(VAR7->VAR5->VAR12, VAR7->VAR20.VAR21,
VAR8);

return VAR11;
}