VAR1 FUN1(struct VAR2 *VAR3)
{
s32 VAR4 = 0;
s32 VAR5 = 0;

while (VAR5 < VAR6) {
if (FUN2(VAR7) & VAR8)
break;
FUN3(1000, 2000);
VAR5++;
}

if (VAR5 == VAR6) {
FUN4("");
VAR4 = -VAR9;
goto VAR10;
}

VAR10:
return VAR4;
}