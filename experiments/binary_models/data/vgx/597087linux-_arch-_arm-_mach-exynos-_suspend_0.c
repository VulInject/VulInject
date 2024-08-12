static void FUN1(void)
{
u32 VAR1 = FUN2();

if (FUN3())
goto VAR2;

if (VAR1 == VAR3)
FUN4();

if (FUN5(VAR4) == -VAR5
&& VAR1 == VAR3)
FUN6();

VAR2:


FUN7(0x0, VAR6);
FUN8(true);
}