int FUN1(void)
{
static struct VAR1 * const VAR2 = (void *)VAR3;
u32 VAR4;
int VAR5;

VAR5 = FUN2(VAR6, "");
if (VAR5 < 0) {
FUN3("", VAR5);
return 0;
}

FUN4(VAR6);

if (FUN5(VAR6))
VAR4 = VAR7 << VAR8 |
VAR9 << VAR10;
else
VAR4 = VAR7 << VAR8 |
VAR11 << VAR10;
FUN6(&VAR2->VAR12, VAR13 | VAR14, VAR4);

FUN7(VAR6);
return 0;
}