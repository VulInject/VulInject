static int FUN1(struct VAR1 *VAR2,
u16 VAR3, int VAR4)
{
struct VAR5 *VAR6;
struct hwrm_ring_free_input VAR7 = {0};
struct hwrm_ring_free_output VAR8;
struct bnxt_fw_msg VAR9;
int VAR10 = -VAR11;

if (!VAR2)
return VAR10;

VAR6 = VAR2->VAR6;

if (!VAR6)
return VAR10;

if (FUN2(VAR12, &VAR2->VAR13))
return 0;

memset(&VAR9, 0, sizeof(VAR9));

FUN3(VAR2, (void *)&VAR7, VAR14, -1, -1);
VAR7.VAR15 = VAR4;
VAR7.VAR16 = FUN4(VAR3);
FUN5(&VAR9, (void *)&VAR7, sizeof(VAR7), (void *)&VAR8,
sizeof(VAR8), VAR17);
VAR10 = FUN6(VAR6, &VAR9);
if (VAR10)
FUN7(&VAR2->VAR18, "",
VAR7.VAR16, VAR10);
return VAR10;
}