static int FUN1(struct VAR1 *VAR2, u8 VAR3,
u8 const VAR4[], size_t VAR5)
{
int VAR6, VAR7;
size_t VAR8;
u8 VAR9;

VAR7 = FUN2(VAR2);
if (VAR7 < 0)
return VAR7;

for (VAR8 = 0; VAR8 < VAR5; VAR8++, VAR3++) {
VAR6 = FUN3(VAR2, VAR3, &VAR9, 1);
if (VAR6 < 0)
break;
if (VAR9 != VAR4[VAR8]) {
VAR6 = FUN4(VAR2, VAR3, &VAR4[VAR8], 1);
if (VAR6 < 0)
break;
}
VAR6 = FUN5(VAR2);
if (VAR6 < 0)
break;
}

VAR7 = FUN6(VAR2);
if (VAR7 < 0)
return VAR7;

return VAR6;
}