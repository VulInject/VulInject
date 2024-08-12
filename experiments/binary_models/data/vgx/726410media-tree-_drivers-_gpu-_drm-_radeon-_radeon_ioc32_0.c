static int FUN1(struct VAR1 *VAR1, unsigned int VAR2,
unsigned long VAR3)
{
drm_radeon_stipple32_t VAR4 *VAR5 = (void VAR4 *)VAR3;
drm_radeon_stipple_t VAR4 *VAR6;
u32 VAR7;

if (FUN2(VAR7, &VAR5->VAR7))
return -VAR8;

VAR6 = FUN3(sizeof(*VAR6));
if (!FUN4(VAR9, VAR6, sizeof(*VAR6))
|| FUN5((unsigned int VAR4 *)(unsigned long)VAR7,
&VAR6->VAR7))
return -VAR8;

return FUN6(VAR1, VAR10, (unsigned long)VAR6);
}

typedef struct VAR11 {
unsigned int VAR12, VAR13;	
unsigned int VAR14, VAR15;
u32 VAR16;
} VAR17;

typedef struct VAR18 {
unsigned int VAR19;
int VAR20;
int VAR21;
int VAR14;		
int VAR15;
u32 VAR22;
} VAR23;