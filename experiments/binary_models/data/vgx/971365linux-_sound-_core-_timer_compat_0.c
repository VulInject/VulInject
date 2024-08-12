static int FUN1(struct VAR1 *VAR1,
struct snd_timer_info32 VAR2 *VAR3)
{
struct VAR4 *VAR5;
struct snd_timer_info32 VAR6;
struct VAR7 *VAR8;

VAR5 = VAR1->VAR9;
if (!VAR5->VAR10)
return -VAR11;
VAR8 = VAR5->VAR10->VAR12;
if (!VAR8)
return -VAR11;
memset(&VAR6, 0, sizeof(VAR6));
VAR6.VAR13 = VAR8->VAR13 ? VAR8->VAR13->VAR14 : -1;
if (VAR8->VAR15.VAR16 & VAR17)
VAR6.VAR16 |= VAR18;
FUN2(VAR6.VAR19, VAR8->VAR19, sizeof(VAR6.VAR19));
FUN2(VAR6.VAR20, VAR8->VAR20, sizeof(VAR6.VAR20));
VAR6.VAR21 = VAR8->VAR15.VAR21;
if (FUN3(VAR3, &VAR6, sizeof(*VAR3)))
return -VAR22;
return 0;
}

enum {
VAR23 = FUN4('', 0x04, struct VAR24),
VAR25 = FUN5('', 0x11, struct VAR26),
VAR27 = FUN4('', 0x14, struct VAR28),
VAR29 = FUN4('', 0x14, struct VAR30),
};