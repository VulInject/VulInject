static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6, *VAR7 = NULL;
struct VAR8 *VAR9;
int VAR10;



VAR10 = FUN2(VAR2, &VAR6, VAR11,
VAR12, NULL, 0);
if (VAR10 < 0)
return VAR10;

VAR10 = FUN3(VAR2, VAR6, &VAR7);
FUN4(VAR6);
if (VAR10 < 0)
return VAR10;

VAR9 = (struct VAR8 *) VAR7->VAR13;
if (VAR9->VAR14 != VAR15) {
VAR10 = -VAR16;
goto VAR17;
}

memcpy(VAR4, VAR7->VAR13 + VAR18, 10);

VAR17:
FUN4(VAR7);
return VAR10;
}