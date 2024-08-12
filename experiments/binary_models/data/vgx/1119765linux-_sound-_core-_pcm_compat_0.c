static int FUN1(struct VAR1 *VAR2,
u32 VAR3 *VAR4)
{
snd_pcm_uframes_t VAR5;
int VAR6;

if (FUN2(VAR5, VAR4))
return -VAR7;
VAR6 = FUN3(VAR2, VAR5);
if (FUN4(VAR6, VAR4))
return -VAR7;
return VAR6 < 0 ? VAR6 : 0;
}

struct VAR8 {
u32 VAR9;
struct snd_mask VAR10[VAR11 - VAR12 + 1]; 
struct snd_mask VAR13[5];	
struct snd_interval VAR14[VAR15 - VAR16 + 1];
struct snd_interval VAR17[9];	
u32 VAR18;
u32 VAR19;
u32 VAR20;
u32 VAR21;
u32 VAR22;
u32 VAR23;
u32 VAR24;
unsigned char VAR25[64];
};

struct VAR26 {
s32 VAR27;
u32 VAR28;
u32 VAR29;
u32 VAR30;
u32 VAR31;
u32 VAR32;
u32 VAR33;
u32 VAR34;
u32 VAR35;
u32 VAR36;
u32 VAR37;
u32 VAR38;
unsigned char VAR25[56];
};