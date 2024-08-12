static void FUN1(void)
{
int VAR1, VAR2 = -1, VAR3 = -1;
struct VAR4 *VAR5 = NULL;
FUN2(VAR6, VAR7);
unsigned long long VAR8[8];
__u64 VAR9[8];

if (!FUN3(FUN4(), ""))
goto VAR10;

VAR5 = FUN5();
if (!FUN6(VAR5, ""))
goto VAR10;

VAR5->VAR11->VAR12 = FUN7();
VAR5->VAR11->VAR13 = true;

VAR14 = FUN8(VAR15);				\
if (!FUN9(VAR14, 0, "" #VAR15))	\
goto VAR10;					\
})