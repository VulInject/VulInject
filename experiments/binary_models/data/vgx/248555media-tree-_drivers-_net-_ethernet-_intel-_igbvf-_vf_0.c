static VAR1 FUN1(struct VAR2 *VAR3, u32 VAR4, VAR5 *VAR6)
{
struct VAR7 *VAR8 = &VAR3->VAR8;
u32 VAR9[3], VAR10;
VAR5 *VAR11 = (VAR5 *)(&VAR9[1]);
s32 VAR12;

memset(VAR9, 0, sizeof(VAR9));
VAR9[0] |= VAR4;
VAR9[0] |= VAR13;
VAR10 = VAR9[0];

if (VAR6)
memcpy(VAR11, VAR6, VAR14);

VAR12 = VAR8->VAR15.FUN2(VAR3, VAR9, 3);

if (!VAR12)
VAR12 = VAR8->VAR15.FUN3(VAR3, VAR9, 3);

VAR9[0] &= ~VAR16;

if (!VAR12) {
VAR9[0] &= ~VAR16;

if (VAR9[0] == (VAR10 | VAR17))
return -VAR18;
}

return VAR12;
}