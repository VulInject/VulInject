static int FUN1(struct VAR1 *VAR1, unsigned int VAR2,
unsigned long VAR3)
{
drm_r128_getparam32_t VAR4;
drm_r128_getparam_t VAR5 *VAR6;

if (FUN2(&VAR4, (void VAR5 *)VAR3, sizeof(VAR4)))
return -VAR7;

VAR6 = FUN3(sizeof(*VAR6));
if (!FUN4(VAR8, VAR6, sizeof(*VAR6))
|| FUN5(VAR4.VAR9, &VAR6->VAR9)
|| FUN5((void VAR5 *)(unsigned long)VAR4.VAR10,
&VAR6->VAR10))
return -VAR7;

return FUN6(VAR1, VAR11, (unsigned long)VAR6);
}

VAR12 *VAR13[] = {
[VAR14] = VAR15,
[VAR16] = VAR17,
[VAR18] = VAR19,
[VAR20] = VAR21,
};