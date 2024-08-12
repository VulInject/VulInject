int FUN1(struct VAR1 *VAR2,
u32 VAR3, const void *VAR4, u32 VAR5)
{
u8 VAR6[4] = {};
u32 VAR7 = FUN2(VAR5, 4);
u32 VAR8 = VAR5 - VAR7;
int VAR9;

FUN3(VAR2, VAR10,
"",
VAR3, VAR4, VAR5);

VAR9 = FUN4(VAR2, VAR3);
if (VAR9)
return VAR9;


if (VAR8 > 0)
memcpy(VAR6, VAR4 + VAR7, VAR8);

VAR9 = FUN5(VAR2, VAR4, VAR7);
if (VAR9)
return VAR9;

if (VAR8 > 0)
VAR9 = FUN5(VAR2, VAR6, 4);

if (VAR9 != 0)
return VAR9;


VAR9 = FUN4(VAR2, 0x00);

return VAR9;
}