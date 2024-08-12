static bool FUN1(struct VAR1 *VAR2)
{
uint32_t VAR3, VAR4;
uint32_t VAR5, VAR6, VAR7, VAR8;

VAR3 = FUN2(VAR9, 0,
VAR10);
VAR4 = FUN2(VAR9, 0,
VAR11);

VAR5 = FUN3(VAR3,
VAR12, VAR13);
VAR6 = FUN3(VAR3,
VAR12, VAR14);
VAR7 = FUN3(VAR4,
VAR15, VAR16);
VAR8 = FUN3(VAR4,
VAR15, VAR17);

if (VAR5 && VAR6 && VAR7 && VAR8)
return true;
else if (!VAR5 && !VAR6 && !VAR7 && !VAR8)
return false;
else {
FUN4(VAR2->VAR18, "",
VAR5, VAR6, VAR7, VAR8);
return false;
}
}