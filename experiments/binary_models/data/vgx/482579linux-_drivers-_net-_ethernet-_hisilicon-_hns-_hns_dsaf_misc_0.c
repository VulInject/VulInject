static VAR1 FUN1(struct VAR2 *VAR3)
{
u32 VAR4;
u32 VAR5;
bool VAR6 = FUN2(VAR3->VAR7->VAR8);
int VAR9 = VAR3->VAR9;
phy_interface_t VAR10;

if (VAR6) {
if (FUN3(VAR3->VAR7))
return VAR11;

if (VAR9 >= 0 && VAR9 <= 3)
VAR5 = VAR12;
else
VAR5 = VAR13;
} else {
if (!FUN3(VAR3->VAR7) && VAR9 <= 3)
VAR5 = VAR14;
else
VAR5 = VAR15;
}

VAR4 = FUN4(VAR3->VAR7, VAR5);
if (FUN5(VAR4, VAR3->VAR16))
VAR10 = VAR17;
else
VAR10 = VAR11;

return VAR10;
}