int FUN1(void)
{
dict_types VAR1;
memset(&VAR1, 0, sizeof(VAR1));
VAR1.VAR2 = VAR3;
VAR1.VAR4 = VAR5;
VAR1.VAR6 = VAR7;
VAR1.VAR8 = VAR9;
VAR1.VAR10 = VAR11;
VAR1.VAR12 = VAR13;

VAR14 = FUN2(&VAR1, 64);
if (VAR14 == NULL)
return -VAR15;

rpc_clt_type VAR16;
memset(&VAR16, 0, sizeof(VAR16));
VAR16.VAR17 = VAR18;
VAR16.VAR19 = VAR20;

VAR21 = FUN3(&VAR22.VAR21, &VAR16);
if (VAR21 == NULL)
return -VAR15;
if (FUN4(VAR21) < 0)
return -VAR15;

nw_state_type VAR23;
memset(&VAR23, 0, sizeof(VAR23));
VAR23.VAR24 = VAR24;

VAR25 = FUN5(&VAR23, sizeof(struct VAR26));
if (VAR25 == NULL)
return -VAR15;

FUN6(&VAR27, VAR22.VAR28, true, VAR29, NULL);
FUN7(&VAR27);

return 0;
}