void FUN1(struct VAR1 *VAR2, gfp_t VAR3, void *VAR4,
size_t VAR5)
{
if (FUN2(!VAR4)) 
return;


if (VAR3 & VAR6)
return;


if (VAR2->VAR7 & VAR8)
return;

if (!VAR9 || VAR3 & VAR10) {

FUN3(VAR4, VAR5);
} else if (!VAR2->VAR11) {

FUN4(VAR4, VAR5);
}
}