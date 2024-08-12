static VAR1 FUN1(VAR2 *VAR3, guint VAR4, guint VAR5)
{
guint32 VAR6;
guint VAR7, VAR8 = VAR5;

while (1) {
VAR6 = FUN2(VAR3, VAR5);
VAR5 += 4;
if (VAR5 > VAR4)
return 0;
if (!VAR6)
break;

VAR7 = FUN3(VAR3, VAR5);
if (VAR4 - VAR5 < VAR7)
return 0;
VAR5 += VAR7;
}

return VAR5 - VAR8;
}