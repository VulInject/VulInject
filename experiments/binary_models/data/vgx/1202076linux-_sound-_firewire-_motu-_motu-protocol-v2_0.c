int FUN1(struct VAR1 *VAR2,
bool VAR3)
{
if (VAR2->VAR4 == &VAR5) {

return 0;
} else if (VAR2->VAR4 == &VAR6) {

return 0;
} else {
__be32 VAR7;
u32 VAR8;
int VAR9;

VAR9 = FUN2(VAR2, VAR10,
&VAR7, sizeof(VAR7));
if (VAR9 < 0)
return VAR9;
VAR8 = FUN3(VAR7);

VAR8 &= ~(VAR11 | VAR12);
if (VAR3)
VAR8 |= VAR11;

if (VAR2->VAR4 == &VAR13)
VAR9 = FUN4(VAR2, &VAR8, VAR3);
else
VAR9 = FUN5(VAR2, &VAR8, VAR3);
if (VAR9 < 0)
return VAR9;

VAR7 = FUN6(VAR8);
return FUN7(VAR2, VAR10,
&VAR7, sizeof(VAR7));
}
}