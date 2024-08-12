static void FUN1(slurm_cred_ctx_t VAR1, VAR2 *VAR3)
{
time_t       VAR4 = FUN2(NULL);
uint32_t     VAR5   = 0;
int          VAR6   = 0;
VAR7 *VAR8   = NULL;

FUN3(&VAR5, VAR3);
if (VAR5 > VAR9)
goto VAR10;
for (VAR6 = 0; VAR6 < VAR5; VAR6++) {
if (!(VAR8 = FUN4(VAR3)))
goto VAR10;

if (!VAR8->VAR11 || (VAR8->VAR11 && (VAR4 < VAR8->VAR12)))
FUN5(VAR1->VAR13, VAR8);
else {
FUN6 ("",
VAR8->VAR14);
FUN7(VAR8);
}
}

return;

VAR10:
FUN8("");
return;
}