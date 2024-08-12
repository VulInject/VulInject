static int FUN1(void)
{
struct VAR1 *VAR2;
struct fsl_lbc_regs VAR3 *VAR4;

VAR2 = VAR5;
if (!VAR2)
goto VAR6;

VAR4 = VAR2->VAR7;
if (!VAR4)
goto VAR6;

VAR2->VAR8 = FUN2(sizeof(struct VAR9), VAR10);
if (!VAR2->VAR8)
return -VAR11;

FUN3(VAR2->VAR8, VAR4, sizeof(struct VAR9));

VAR6:
return 0;
}