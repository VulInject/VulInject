int
FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
zap_cursor_t VAR5;
zap_attribute_t	VAR6;
int VAR7;

FUN2(&VAR5, FUN3(VAR2)->VAR8, FUN4(VAR2)->VAR9);

while ((VAR7 = -FUN5(&VAR5, &VAR6)) == 0) {

if (VAR6.VAR10 != 8 || VAR6.VAR11 != 1) {
VAR7 = -VAR12;
break;
}

VAR7 = FUN6(VAR4, VAR6.VAR13, strlen(VAR6.VAR13));
if (VAR7)
break;

FUN7(&VAR5);
}

FUN8(&VAR5);

if (VAR7 == -VAR14)
VAR7 = 0;

return (VAR7);
}