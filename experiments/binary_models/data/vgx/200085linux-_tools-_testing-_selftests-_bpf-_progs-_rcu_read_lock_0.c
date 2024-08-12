int FUN1(void *VAR1)
{
struct VAR2 *VAR3, *VAR4;
struct VAR5 *VAR6;
__u32 VAR7 = 0;
void *VAR8;

VAR3 = FUN2();

FUN3();
VAR4 = VAR3->VAR4;
if (!VAR4)
goto VAR9;
VAR6 = (struct VAR5 *)FUN4(VAR4);
if (!VAR6)
goto VAR9;

VAR8 = (void *)FUN5(VAR6);
(void)FUN6(&VAR7, sizeof(VAR10), VAR8, VAR3, 0);
VAR11 = VAR7;
(void)FUN7(&VAR12, VAR4, 0, 0);
VAR9:
FUN8();
return 0;
}