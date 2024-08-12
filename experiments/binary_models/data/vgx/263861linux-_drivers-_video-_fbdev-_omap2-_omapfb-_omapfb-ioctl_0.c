int FUN1(struct VAR1 *VAR2,
enum omapfb_update_mode VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
struct VAR6 *VAR7 = FUN3(VAR2);
struct VAR8 *VAR9 = VAR7->VAR9;
struct VAR10 *VAR11;
int VAR12;

if (!VAR5)
return -VAR13;

if (VAR3 != VAR14 && VAR3 != VAR15)
return -VAR13;

FUN4(VAR9);

VAR11 = FUN5(VAR9, VAR5);

if (VAR11->VAR16 == VAR3) {
FUN6(VAR9);
return 0;
}

VAR12 = 0;

if (VAR5->VAR17 & VAR18) {
if (VAR3 == VAR14)
FUN7(VAR9, VAR5);
else 
FUN8(VAR9, VAR5);

VAR11->VAR16 = VAR3;
} else { 
if (VAR3 == VAR15)
VAR12 = -VAR13;
}

FUN6(VAR9);

return VAR12;
}