static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5,
const char *VAR6, size_t VAR7)
{
struct VAR8 *VAR9 = FUN2(VAR3);
unsigned long VAR10;
int VAR11;
int VAR12;

if (!FUN3(VAR13))
return -VAR14;

VAR12 = FUN4(VAR6, VAR7);
switch (VAR12) {
case 0:
VAR12 = VAR15;
break;
case 1:
VAR12 = VAR16;
break;
case 2:
VAR12 = VAR17;
break;
case 3:
VAR12 = VAR18;
break;
default:
return -VAR19;
}

FUN5(&VAR9->VAR20->mutex);
FUN6(&VAR9->VAR20->VAR21, VAR10);

VAR11 = FUN7(VAR9, VAR12);
if (VAR11)
FUN8(VAR9->VAR20, ""
"");
FUN9(&VAR9->VAR20->VAR21, VAR10);
FUN10(&VAR9->VAR20->mutex);

return VAR11 ? VAR11 : VAR7;
}