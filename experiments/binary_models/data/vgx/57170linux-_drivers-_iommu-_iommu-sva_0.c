int FUN1(struct VAR1 *VAR2, ioasid_t VAR3, ioasid_t VAR4)
{
int VAR5 = 0;
ioasid_t VAR6;

if (VAR3 == VAR7 || VAR4 == VAR7 ||
VAR3 == 0 || VAR4 < VAR3)
return -VAR8;

FUN2(&VAR9);

if (FUN3(VAR2->VAR6)) {
if (VAR2->VAR6 < VAR3 || VAR2->VAR6 >= VAR4)
VAR5 = -VAR10;
goto VAR11;
}

VAR6 = FUN4(&VAR12, VAR3, VAR4, VAR2);
if (!FUN3(VAR6))
VAR5 = -VAR13;
else
FUN5(VAR2, VAR6);
VAR11:
FUN6(&VAR9);
return VAR5;
}