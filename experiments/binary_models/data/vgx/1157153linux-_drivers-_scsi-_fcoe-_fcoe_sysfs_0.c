static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5,
const char *VAR6, size_t VAR7)
{
struct VAR8 *VAR9 = FUN2(VAR3);
bool VAR10;
int VAR11;

if (*VAR6 == '')
VAR10 = true;
else if (*VAR6 == '')
VAR10 = false;
else
return -VAR12;

switch (VAR9->VAR10) {
case VAR13:
if (VAR10)
return VAR7;
VAR9->VAR10 = VAR14;
break;
case VAR14:
if (!VAR10)
return VAR7;
VAR9->VAR10 = VAR13;
break;
case VAR15:
return -VAR16;
}

VAR11 = VAR9->VAR17->FUN3(VAR9);
if (VAR11)
return VAR11;

return VAR7;
}