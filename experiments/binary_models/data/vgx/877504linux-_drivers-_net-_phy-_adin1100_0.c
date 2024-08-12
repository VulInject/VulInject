static int FUN1(struct VAR1 *VAR2)
{
u16 VAR3;
int VAR4;
int VAR5;

VAR5 = FUN2(VAR2, VAR6, VAR7);
if (VAR5 < 0)
return VAR5;
else if (!(VAR5 & VAR8))
return 0;

VAR5 = FUN2(VAR2, VAR7, VAR9);
if (VAR5 < 0)
return VAR5;

VAR3 = 0xFFFF & VAR5;
for (VAR4 = 0; VAR4 < FUN3(VAR10); VAR4++) {
if (VAR3 >= VAR10[VAR4].VAR11 && VAR3 <= VAR10[VAR4].VAR12)
return VAR4;
}

return -VAR13;
}