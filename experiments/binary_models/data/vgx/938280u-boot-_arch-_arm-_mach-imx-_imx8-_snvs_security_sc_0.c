static int FUN1(struct VAR1 *VAR2, u32 VAR3)
{
int VAR4 = 0;
u32 VAR5;

FUN2("", VAR6);

for (VAR5 = 0; VAR5 < VAR3; VAR5++) {
FUN2("", VAR5, VAR2[VAR5].VAR7,
VAR2[VAR5].VAR8);
FUN3(VAR2[VAR5].VAR7, 3 << 30 | VAR2[VAR5].VAR8);
if (VAR4 != VAR9)
goto VAR10;
}

VAR10:
return (VAR4 == VAR9) ? 0 : -VAR11;
}