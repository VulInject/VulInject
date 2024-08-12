void
FUN1(int VAR1, int VAR2, int VAR3, int VAR4, uint32_t VAR5)
{
ddi_acc_handle_t VAR6;

VAR6 = FUN2(VAR1, VAR2, VAR3);
FUN3(VAR1, VAR2, VAR3, VAR4, VAR6, VAR5);
}