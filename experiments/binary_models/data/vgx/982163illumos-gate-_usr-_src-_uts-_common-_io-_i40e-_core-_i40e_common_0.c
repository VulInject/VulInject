static enum VAR1 FUN1(struct VAR2 *VAR3,
u32 VAR4)
{
u32 VAR5, VAR6 = 0;

for (VAR5 = 0; VAR5 < VAR4; VAR5++) {
VAR6 = FUN2(VAR3, VAR7);
if (!(VAR6 & VAR8))
return VAR9;
FUN3(100);
}

FUN4("");
FUN5("", VAR6);

return VAR10;
}