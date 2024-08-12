static int FUN1(struct VAR1 *VAR2, unsigned int VAR3,
struct snd_seq_port_info32 VAR4 *VAR5)
{
int VAR6 = -VAR7;
struct VAR8 *VAR9;

VAR9 = FUN2(sizeof(*VAR9), VAR10);
if (!VAR9)
return -VAR11;

if (FUN3(VAR9, VAR5, sizeof(*VAR5)) ||
FUN4(VAR9->VAR12, &VAR5->VAR12) ||
FUN4(VAR9->VAR13, &VAR5->VAR13))
goto VAR14;
VAR9->VAR15 = NULL;

VAR6 = FUN5(VAR2->VAR16, VAR3, VAR9);
if (VAR6 < 0)
goto VAR14;

if (FUN6(VAR5, VAR9, sizeof(*VAR5)) ||
FUN7(VAR9->VAR12, &VAR5->VAR12) ||
FUN7(VAR9->VAR13, &VAR5->VAR13))
VAR6 = -VAR7;

VAR14:
FUN8(VAR9);
return VAR6;
}





enum {
VAR17 = FUN9('', 0x20, struct VAR18),
VAR19 = FUN10 ('', 0x21, struct VAR18),
VAR20 = FUN9('', 0x22, struct VAR18),
VAR21 = FUN10 ('', 0x23, struct VAR18),
VAR22 = FUN9('', 0x52, struct VAR18),
};